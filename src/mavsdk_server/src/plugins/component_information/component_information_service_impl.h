// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see
// https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/component_information/component_information.proto)

#include "component_information/component_information.grpc.pb.h"
#include "plugins/component_information/component_information.h"

#include "mavsdk.h"
#include "lazy_plugin.h"
#include "log.h"
#include <atomic>
#include <cmath>
#include <future>
#include <limits>
#include <memory>
#include <sstream>
#include <vector>

namespace mavsdk {
namespace mavsdk_server {

template<
    typename ComponentInformation = ComponentInformation,
    typename LazyPlugin = LazyPlugin<ComponentInformation>>
class ComponentInformationServiceImpl final
    : public rpc::component_information::ComponentInformationService::Service {
public:
    ComponentInformationServiceImpl(LazyPlugin& lazy_plugin) : _lazy_plugin(lazy_plugin) {}

    template<typename ResponseType>
    void fillResponseWithResult(
        ResponseType* response, mavsdk::ComponentInformation::Result& result) const
    {
        auto rpc_result = translateToRpcResult(result);

        auto* rpc_component_information_result =
            new rpc::component_information::ComponentInformationResult();
        rpc_component_information_result->set_result(rpc_result);
        std::stringstream ss;
        ss << result;
        rpc_component_information_result->set_result_str(ss.str());

        response->set_allocated_component_information_result(rpc_component_information_result);
    }

    static std::unique_ptr<rpc::component_information::FloatParam>
    translateToRpcFloatParam(const mavsdk::ComponentInformation::FloatParam& float_param)
    {
        auto rpc_obj = std::make_unique<rpc::component_information::FloatParam>();

        rpc_obj->set_name(float_param.name);

        rpc_obj->set_short_description(float_param.short_description);

        rpc_obj->set_long_description(float_param.long_description);

        rpc_obj->set_unit(float_param.unit);

        rpc_obj->set_decimal_places(float_param.decimal_places);

        rpc_obj->set_start_value(float_param.start_value);

        rpc_obj->set_default_value(float_param.default_value);

        rpc_obj->set_min_value(float_param.min_value);

        rpc_obj->set_max_value(float_param.max_value);

        return rpc_obj;
    }

    static mavsdk::ComponentInformation::FloatParam
    translateFromRpcFloatParam(const rpc::component_information::FloatParam& float_param)
    {
        mavsdk::ComponentInformation::FloatParam obj;

        obj.name = float_param.name();

        obj.short_description = float_param.short_description();

        obj.long_description = float_param.long_description();

        obj.unit = float_param.unit();

        obj.decimal_places = float_param.decimal_places();

        obj.start_value = float_param.start_value();

        obj.default_value = float_param.default_value();

        obj.min_value = float_param.min_value();

        obj.max_value = float_param.max_value();

        return obj;
    }

    static std::unique_ptr<rpc::component_information::FloatParamUpdate>
    translateToRpcFloatParamUpdate(
        const mavsdk::ComponentInformation::FloatParamUpdate& float_param_update)
    {
        auto rpc_obj = std::make_unique<rpc::component_information::FloatParamUpdate>();

        rpc_obj->set_name(float_param_update.name);

        rpc_obj->set_value(float_param_update.value);

        return rpc_obj;
    }

    static mavsdk::ComponentInformation::FloatParamUpdate translateFromRpcFloatParamUpdate(
        const rpc::component_information::FloatParamUpdate& float_param_update)
    {
        mavsdk::ComponentInformation::FloatParamUpdate obj;

        obj.name = float_param_update.name();

        obj.value = float_param_update.value();

        return obj;
    }

    static rpc::component_information::ComponentInformationResult::Result
    translateToRpcResult(const mavsdk::ComponentInformation::Result& result)
    {
        switch (result) {
            default:
                LogErr() << "Unknown result enum value: " << static_cast<int>(result);
            // FALLTHROUGH
            case mavsdk::ComponentInformation::Result::Unknown:
                return rpc::component_information::ComponentInformationResult_Result_RESULT_UNKNOWN;
            case mavsdk::ComponentInformation::Result::Success:
                return rpc::component_information::ComponentInformationResult_Result_RESULT_SUCCESS;
            case mavsdk::ComponentInformation::Result::NoSystem:
                return rpc::component_information::
                    ComponentInformationResult_Result_RESULT_NO_SYSTEM;
        }
    }

    static mavsdk::ComponentInformation::Result translateFromRpcResult(
        const rpc::component_information::ComponentInformationResult::Result result)
    {
        switch (result) {
            default:
                LogErr() << "Unknown result enum value: " << static_cast<int>(result);
            // FALLTHROUGH
            case rpc::component_information::ComponentInformationResult_Result_RESULT_UNKNOWN:
                return mavsdk::ComponentInformation::Result::Unknown;
            case rpc::component_information::ComponentInformationResult_Result_RESULT_SUCCESS:
                return mavsdk::ComponentInformation::Result::Success;
            case rpc::component_information::ComponentInformationResult_Result_RESULT_NO_SYSTEM:
                return mavsdk::ComponentInformation::Result::NoSystem;
        }
    }

    grpc::Status AccessFloatParams(
        grpc::ServerContext* /* context */,
        const rpc::component_information::AccessFloatParamsRequest* /* request */,
        rpc::component_information::AccessFloatParamsResponse* response) override
    {
        if (_lazy_plugin.maybe_plugin() == nullptr) {
            if (response != nullptr) {
                auto result = mavsdk::ComponentInformation::Result::NoSystem;
                fillResponseWithResult(response, result);
            }

            return grpc::Status::OK;
        }

        auto result = _lazy_plugin.maybe_plugin()->access_float_params();

        if (response != nullptr) {
            fillResponseWithResult(response, result.first);

            for (auto elem : result.second) {
                auto* ptr = response->add_params();
                ptr->CopyFrom(*translateToRpcFloatParam(elem).release());
            }
        }

        return grpc::Status::OK;
    }

    grpc::Status SubscribeFloatParam(
        grpc::ServerContext* /* context */,
        const mavsdk::rpc::component_information::SubscribeFloatParamRequest* /* request */,
        grpc::ServerWriter<rpc::component_information::FloatParamResponse>* writer) override
    {
        if (_lazy_plugin.maybe_plugin() == nullptr) {
            return grpc::Status::OK;
        }

        auto stream_closed_promise = std::make_shared<std::promise<void>>();
        auto stream_closed_future = stream_closed_promise->get_future();
        register_stream_stop_promise(stream_closed_promise);

        auto is_finished = std::make_shared<bool>(false);
        auto subscribe_mutex = std::make_shared<std::mutex>();

        _lazy_plugin.maybe_plugin()->subscribe_float_param(
            [this, &writer, &stream_closed_promise, is_finished, subscribe_mutex](
                const mavsdk::ComponentInformation::FloatParamUpdate float_param) {
                rpc::component_information::FloatParamResponse rpc_response;

                rpc_response.set_allocated_param_update(
                    translateToRpcFloatParamUpdate(float_param).release());

                std::unique_lock<std::mutex> lock(*subscribe_mutex);
                if (!*is_finished && !writer->Write(rpc_response)) {
                    _lazy_plugin.maybe_plugin()->subscribe_float_param(nullptr);

                    *is_finished = true;
                    unregister_stream_stop_promise(stream_closed_promise);
                    stream_closed_promise->set_value();
                }
            });

        stream_closed_future.wait();
        std::unique_lock<std::mutex> lock(*subscribe_mutex);
        *is_finished = true;

        return grpc::Status::OK;
    }

    void stop()
    {
        _stopped.store(true);
        for (auto& prom : _stream_stop_promises) {
            if (auto handle = prom.lock()) {
                handle->set_value();
            }
        }
    }

private:
    void register_stream_stop_promise(std::weak_ptr<std::promise<void>> prom)
    {
        // If we have already stopped, set promise immediately and don't add it to list.
        if (_stopped.load()) {
            if (auto handle = prom.lock()) {
                handle->set_value();
            }
        } else {
            _stream_stop_promises.push_back(prom);
        }
    }

    void unregister_stream_stop_promise(std::shared_ptr<std::promise<void>> prom)
    {
        for (auto it = _stream_stop_promises.begin(); it != _stream_stop_promises.end();
             /* ++it */) {
            if (it->lock() == prom) {
                it = _stream_stop_promises.erase(it);
            } else {
                ++it;
            }
        }
    }

    LazyPlugin& _lazy_plugin;
    std::atomic<bool> _stopped{false};
    std::vector<std::weak_ptr<std::promise<void>>> _stream_stop_promises{};
};

} // namespace mavsdk_server
} // namespace mavsdk