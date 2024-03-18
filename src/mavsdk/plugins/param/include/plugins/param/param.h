// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/main/protos/param/param.proto)

#pragma once

#include <array>
#include <cmath>
#include <functional>
#include <limits>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "plugin_base.h"

#include "handle.h"

namespace mavsdk {

class System;
class ParamImpl;

/**
 * @brief Provide raw access to get and set parameters.
 */
class Param : public PluginBase {
public:
    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto param = Param(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit Param(System& system); // deprecated

    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto param = Param(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit Param(std::shared_ptr<System> system); // new

    /**
     * @brief Destructor (internal use only).
     */
    ~Param() override;

    /**
     * @brief Parameter version
     */
    enum class ProtocolVersion {
        V1, /**< @brief Original v1 version. */
        Ext, /**< @brief Extended param version. */
    };

    /**
     * @brief Stream operator to print information about a `Param::ProtocolVersion`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream&
    operator<<(std::ostream& str, Param::ProtocolVersion const& protocol_version);

    /**
     * @brief Type for integer parameters.
     */
    struct IntParam {
        std::string name{}; /**< @brief Name of the parameter */
        int32_t value{}; /**< @brief Value of the parameter */
    };

    /**
     * @brief Equal operator to compare two `Param::IntParam` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(const Param::IntParam& lhs, const Param::IntParam& rhs);

    /**
     * @brief Stream operator to print information about a `Param::IntParam`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, Param::IntParam const& int_param);

    /**
     * @brief Type for float parameters.
     */
    struct FloatParam {
        std::string name{}; /**< @brief Name of the parameter */
        float value{}; /**< @brief Value of the parameter */
    };

    /**
     * @brief Equal operator to compare two `Param::FloatParam` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(const Param::FloatParam& lhs, const Param::FloatParam& rhs);

    /**
     * @brief Stream operator to print information about a `Param::FloatParam`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, Param::FloatParam const& float_param);

    /**
     * @brief Type for custom parameters
     */
    struct CustomParam {
        std::string name{}; /**< @brief Name of the parameter */
        std::string value{}; /**< @brief Value of the parameter (max len 128 bytes) */
    };

    /**
     * @brief Equal operator to compare two `Param::CustomParam` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(const Param::CustomParam& lhs, const Param::CustomParam& rhs);

    /**
     * @brief Stream operator to print information about a `Param::CustomParam`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, Param::CustomParam const& custom_param);

    /**
     * @brief Type collecting all integer, float, and custom parameters.
     */
    struct AllParams {
        std::vector<IntParam>
            int_params{}; /**< @brief Collection of all parameter names and values of type int */
        std::vector<FloatParam> float_params{}; /**< @brief Collection of all parameter names and
                                                   values of type float */
        std::vector<CustomParam> custom_params{}; /**< @brief Collection of all parameter names and
                                                     values of type custom */
    };

    /**
     * @brief Equal operator to compare two `Param::AllParams` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(const Param::AllParams& lhs, const Param::AllParams& rhs);

    /**
     * @brief Stream operator to print information about a `Param::AllParams`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, Param::AllParams const& all_params);

    /**
     * @brief Possible results returned for param requests.
     */
    enum class Result {
        Unknown, /**< @brief Unknown result. */
        Success, /**< @brief Request succeeded. */
        Timeout, /**< @brief Request timed out. */
        ConnectionError, /**< @brief Connection error. */
        WrongType, /**< @brief Wrong type. */
        ParamNameTooLong, /**< @brief Parameter name too long (> 16). */
        NoSystem, /**< @brief No system connected. */
        ParamValueTooLong, /**< @brief Param value too long (> 128). */
        Failed, /**< @brief Operation failed.. */
    };

    /**
     * @brief Stream operator to print information about a `Param::Result`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, Param::Result const& result);

    /**
     * @brief Callback type for asynchronous Param calls.
     */
    using ResultCallback = std::function<void(Result)>;

    /**
     * @brief Get an any parameter.
     *
     * If the type is wrong, the result will be `WRONG_TYPE`.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    template <typename T>
    std::pair<Result, T> get_param_any(const std::string &name) const;

    /**
     * @brief Get an int parameter.
     *
     * If the type is wrong, the result will be `WRONG_TYPE`.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    std::pair<Result, int32_t> get_param_int(std::string name) const;

    /**
     * @brief Set an int parameter.
     *
     * If the type is wrong, the result will be `WRONG_TYPE`.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    Result set_param_int(std::string name, int32_t value) const;

    /**
     * @brief Get a float parameter.
     *
     * If the type is wrong, the result will be `WRONG_TYPE`.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    std::pair<Result, float> get_param_float(std::string name) const;

    /**
     * @brief Set a float parameter.
     *
     * If the type is wrong, the result will be `WRONG_TYPE`.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    Result set_param_float(std::string name, float value) const;

    /**
     * @brief Get a custom parameter.
     *
     * If the type is wrong, the result will be `WRONG_TYPE`.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    std::pair<Result, std::string> get_param_custom(std::string name) const;

    /**
     * @brief Set a custom parameter.
     *
     * If the type is wrong, the result will be `WRONG_TYPE`.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    Result set_param_custom(std::string name, std::string value) const;

    /**
     * @brief Get all parameters.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    Param::AllParams get_all_params() const;

    /**
     * @brief Select component ID of parameter component to talk to and param protocol version.
     *
     * Default is the autopilot component (1), and Version (0).
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    Result select_component(int32_t component_id, ProtocolVersion protocol_version) const;

    /**
     * @brief Copy constructor.
     */
    Param(const Param& other);

    /**
     * @brief Equality operator (object is not copyable).
     */
    const Param& operator=(const Param&) = delete;

private:
    /** @private Underlying implementation, set at instantiation */
    std::unique_ptr<ParamImpl> _impl;
};

} // namespace mavsdk
