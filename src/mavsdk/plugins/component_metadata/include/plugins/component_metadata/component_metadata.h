// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see
// https://github.com/mavlink/MAVSDK-Proto/blob/main/protos/component_metadata/component_metadata.proto)

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
class ComponentMetadataImpl;

/**
 * @brief Access component metadata json definitions, such as parameters.
 */
class ComponentMetadata : public PluginBase {
public:
    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto component_metadata = ComponentMetadata(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit ComponentMetadata(System& system); // deprecated

    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto component_metadata = ComponentMetadata(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit ComponentMetadata(std::shared_ptr<System> system); // new

    /**
     * @brief Destructor (internal use only).
     */
    ~ComponentMetadata() override;

    /**
     * @brief
     */
    enum class MetadataType {
        AllCompleted, /**< @brief This is set in the subscription callback when all metadata types
                         completed for a given component ID. */
        Parameter, /**< @brief Parameter metadata. */
        Events, /**< @brief Event definitions. */
        Actuators, /**< @brief Actuator definitions. */
    };

    /**
     * @brief Stream operator to print information about a `ComponentMetadata::MetadataType`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream&
    operator<<(std::ostream& str, ComponentMetadata::MetadataType const& metadata_type);

    /**
     * @brief Metadata response
     */
    struct MetadataData {
        std::string json_metadata{}; /**< @brief The JSON metadata */
    };

    /**
     * @brief Equal operator to compare two `ComponentMetadata::MetadataData` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(
        const ComponentMetadata::MetadataData& lhs, const ComponentMetadata::MetadataData& rhs);

    /**
     * @brief Stream operator to print information about a `ComponentMetadata::MetadataData`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream&
    operator<<(std::ostream& str, ComponentMetadata::MetadataData const& metadata_data);

    /**
     * @brief Possible results returned for GetMetadata
     */
    enum class Result {
        Success, /**< @brief. */
        NotAvailable, /**< @brief. */
        ConnectionError, /**< @brief. */
        Unsupported, /**< @brief. */
        Denied, /**< @brief. */
        Failed, /**< @brief. */
        Timeout, /**< @brief. */
        NoSystem, /**< @brief. */
        NotRequested, /**< @brief. */
    };

    /**
     * @brief Stream operator to print information about a `ComponentMetadata::Result`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream& operator<<(std::ostream& str, ComponentMetadata::Result const& result);

    /**
     * @brief Metadata for a given component and type
     */
    struct MetadataUpdate {
        uint32_t compid{}; /**< @brief The component ID */
        MetadataType type{}; /**< @brief The metadata type */
        std::string json_metadata{}; /**< @brief The JSON metadata */
    };

    /**
     * @brief Equal operator to compare two `ComponentMetadata::MetadataUpdate` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(
        const ComponentMetadata::MetadataUpdate& lhs, const ComponentMetadata::MetadataUpdate& rhs);

    /**
     * @brief Stream operator to print information about a `ComponentMetadata::MetadataUpdate`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream&
    operator<<(std::ostream& str, ComponentMetadata::MetadataUpdate const& metadata_update);

    /**
     * @brief Callback type for asynchronous ComponentMetadata calls.
     */
    using ResultCallback = std::function<void(Result)>;

    /**
     * @brief Request metadata from a specific component. This is used to start requesting metadata
     * from a component. The metadata can later be accessed via subscription (see below) or
     * GetMetadata.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    void request_component(uint32_t compid) const;

    /**
     * @brief Request metadata from the autopilot component. This is used to start requesting
     * metadata from the autopilot. The metadata can later be accessed via subscription (see below)
     * or GetMetadata.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    void request_autopilot_component() const;

    /**
     * @brief Callback type for subscribe_metadata_available.
     */
    using MetadataAvailableCallback = std::function<void(MetadataUpdate)>;

    /**
     * @brief Handle type for subscribe_metadata_available.
     */
    using MetadataAvailableHandle = Handle<MetadataUpdate>;

    /**
     * @brief Register a callback that gets called when metadata is available
     */
    MetadataAvailableHandle subscribe_metadata_available(const MetadataAvailableCallback& callback);

    /**
     * @brief Unsubscribe from subscribe_metadata_available
     */
    void unsubscribe_metadata_available(MetadataAvailableHandle handle);

    /**
     * @brief Access metadata. This can be used if you know the metadata is available already,
     * otherwise use the subscription to get notified when it becomes available.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    std::pair<Result, ComponentMetadata::MetadataData>
    get_metadata(uint32_t compid, MetadataType metadata_type) const;

    /**
     * @brief Copy constructor.
     */
    ComponentMetadata(const ComponentMetadata& other);

    /**
     * @brief Equality operator (object is not copyable).
     */
    const ComponentMetadata& operator=(const ComponentMetadata&) = delete;

private:
    /** @private Underlying implementation, set at instantiation */
    std::unique_ptr<ComponentMetadataImpl> _impl;
};

} // namespace mavsdk