// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: component_metadata_server/component_metadata_server.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_component_5fmetadata_5fserver_2fcomponent_5fmetadata_5fserver_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_component_5fmetadata_5fserver_2fcomponent_5fmetadata_5fserver_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_bases.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
#include "mavsdk_options.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_component_5fmetadata_5fserver_2fcomponent_5fmetadata_5fserver_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_component_5fmetadata_5fserver_2fcomponent_5fmetadata_5fserver_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_component_5fmetadata_5fserver_2fcomponent_5fmetadata_5fserver_2eproto;
namespace mavsdk {
namespace rpc {
namespace component_metadata_server {
class Metadata;
struct MetadataDefaultTypeInternal;
extern MetadataDefaultTypeInternal _Metadata_default_instance_;
class SetMetadataRequest;
struct SetMetadataRequestDefaultTypeInternal;
extern SetMetadataRequestDefaultTypeInternal _SetMetadataRequest_default_instance_;
class SetMetadataResponse;
struct SetMetadataResponseDefaultTypeInternal;
extern SetMetadataResponseDefaultTypeInternal _SetMetadataResponse_default_instance_;
}  // namespace component_metadata_server
}  // namespace rpc
}  // namespace mavsdk
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace mavsdk {
namespace rpc {
namespace component_metadata_server {
enum MetadataType : int {
  METADATA_TYPE_PARAMETER = 0,
  METADATA_TYPE_EVENTS = 1,
  METADATA_TYPE_ACTUATORS = 2,
  MetadataType_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  MetadataType_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool MetadataType_IsValid(int value);
extern const uint32_t MetadataType_internal_data_[];
constexpr MetadataType MetadataType_MIN = static_cast<MetadataType>(0);
constexpr MetadataType MetadataType_MAX = static_cast<MetadataType>(2);
constexpr int MetadataType_ARRAYSIZE = 2 + 1;
const ::google::protobuf::EnumDescriptor*
MetadataType_descriptor();
template <typename T>
const std::string& MetadataType_Name(T value) {
  static_assert(std::is_same<T, MetadataType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to MetadataType_Name().");
  return MetadataType_Name(static_cast<MetadataType>(value));
}
template <>
inline const std::string& MetadataType_Name(MetadataType value) {
  return ::google::protobuf::internal::NameOfDenseEnum<MetadataType_descriptor,
                                                 0, 2>(
      static_cast<int>(value));
}
inline bool MetadataType_Parse(absl::string_view name, MetadataType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MetadataType>(
      MetadataType_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class SetMetadataResponse final :
    public ::google::protobuf::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:mavsdk.rpc.component_metadata_server.SetMetadataResponse) */ {
 public:
  inline SetMetadataResponse() : SetMetadataResponse(nullptr) {}
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR SetMetadataResponse(::google::protobuf::internal::ConstantInitialized);

  inline SetMetadataResponse(const SetMetadataResponse& from)
      : SetMetadataResponse(nullptr, from) {}
  SetMetadataResponse(SetMetadataResponse&& from) noexcept
    : SetMetadataResponse() {
    *this = ::std::move(from);
  }

  inline SetMetadataResponse& operator=(const SetMetadataResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetMetadataResponse& operator=(SetMetadataResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SetMetadataResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetMetadataResponse* internal_default_instance() {
    return reinterpret_cast<const SetMetadataResponse*>(
               &_SetMetadataResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SetMetadataResponse& a, SetMetadataResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SetMetadataResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetMetadataResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetMetadataResponse* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SetMetadataResponse>(arena);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const SetMetadataResponse& from) {
    ::google::protobuf::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const SetMetadataResponse& from) {
    ::google::protobuf::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "mavsdk.rpc.component_metadata_server.SetMetadataResponse";
  }
  protected:
  explicit SetMetadataResponse(::google::protobuf::Arena* arena);
  SetMetadataResponse(::google::protobuf::Arena* arena, const SetMetadataResponse& from);
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:mavsdk.rpc.component_metadata_server.SetMetadataResponse)
 private:
  class _Internal;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  friend struct ::TableStruct_component_5fmetadata_5fserver_2fcomponent_5fmetadata_5fserver_2eproto;
};// -------------------------------------------------------------------

class Metadata final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mavsdk.rpc.component_metadata_server.Metadata) */ {
 public:
  inline Metadata() : Metadata(nullptr) {}
  ~Metadata() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Metadata(::google::protobuf::internal::ConstantInitialized);

  inline Metadata(const Metadata& from)
      : Metadata(nullptr, from) {}
  Metadata(Metadata&& from) noexcept
    : Metadata() {
    *this = ::std::move(from);
  }

  inline Metadata& operator=(const Metadata& from) {
    CopyFrom(from);
    return *this;
  }
  inline Metadata& operator=(Metadata&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Metadata& default_instance() {
    return *internal_default_instance();
  }
  static inline const Metadata* internal_default_instance() {
    return reinterpret_cast<const Metadata*>(
               &_Metadata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Metadata& a, Metadata& b) {
    a.Swap(&b);
  }
  inline void Swap(Metadata* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Metadata* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Metadata* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Metadata>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Metadata& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Metadata& from) {
    Metadata::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Metadata* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "mavsdk.rpc.component_metadata_server.Metadata";
  }
  protected:
  explicit Metadata(::google::protobuf::Arena* arena);
  Metadata(::google::protobuf::Arena* arena, const Metadata& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kJsonMetadataFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // string json_metadata = 2;
  void clear_json_metadata() ;
  const std::string& json_metadata() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_json_metadata(Arg_&& arg, Args_... args);
  std::string* mutable_json_metadata();
  PROTOBUF_NODISCARD std::string* release_json_metadata();
  void set_allocated_json_metadata(std::string* value);

  private:
  const std::string& _internal_json_metadata() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_json_metadata(
      const std::string& value);
  std::string* _internal_mutable_json_metadata();

  public:
  // .mavsdk.rpc.component_metadata_server.MetadataType type = 1;
  void clear_type() ;
  ::mavsdk::rpc::component_metadata_server::MetadataType type() const;
  void set_type(::mavsdk::rpc::component_metadata_server::MetadataType value);

  private:
  ::mavsdk::rpc::component_metadata_server::MetadataType _internal_type() const;
  void _internal_set_type(::mavsdk::rpc::component_metadata_server::MetadataType value);

  public:
  // @@protoc_insertion_point(class_scope:mavsdk.rpc.component_metadata_server.Metadata)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      67, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr json_metadata_;
    int type_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_component_5fmetadata_5fserver_2fcomponent_5fmetadata_5fserver_2eproto;
};// -------------------------------------------------------------------

class SetMetadataRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mavsdk.rpc.component_metadata_server.SetMetadataRequest) */ {
 public:
  inline SetMetadataRequest() : SetMetadataRequest(nullptr) {}
  ~SetMetadataRequest() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR SetMetadataRequest(::google::protobuf::internal::ConstantInitialized);

  inline SetMetadataRequest(const SetMetadataRequest& from)
      : SetMetadataRequest(nullptr, from) {}
  SetMetadataRequest(SetMetadataRequest&& from) noexcept
    : SetMetadataRequest() {
    *this = ::std::move(from);
  }

  inline SetMetadataRequest& operator=(const SetMetadataRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetMetadataRequest& operator=(SetMetadataRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SetMetadataRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetMetadataRequest* internal_default_instance() {
    return reinterpret_cast<const SetMetadataRequest*>(
               &_SetMetadataRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SetMetadataRequest& a, SetMetadataRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SetMetadataRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SetMetadataRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetMetadataRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SetMetadataRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const SetMetadataRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const SetMetadataRequest& from) {
    SetMetadataRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(SetMetadataRequest* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "mavsdk.rpc.component_metadata_server.SetMetadataRequest";
  }
  protected:
  explicit SetMetadataRequest(::google::protobuf::Arena* arena);
  SetMetadataRequest(::google::protobuf::Arena* arena, const SetMetadataRequest& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMetadataFieldNumber = 1,
  };
  // repeated .mavsdk.rpc.component_metadata_server.Metadata metadata = 1;
  int metadata_size() const;
  private:
  int _internal_metadata_size() const;

  public:
  void clear_metadata() ;
  ::mavsdk::rpc::component_metadata_server::Metadata* mutable_metadata(int index);
  ::google::protobuf::RepeatedPtrField< ::mavsdk::rpc::component_metadata_server::Metadata >*
      mutable_metadata();
  private:
  const ::google::protobuf::RepeatedPtrField<::mavsdk::rpc::component_metadata_server::Metadata>& _internal_metadata() const;
  ::google::protobuf::RepeatedPtrField<::mavsdk::rpc::component_metadata_server::Metadata>* _internal_mutable_metadata();
  public:
  const ::mavsdk::rpc::component_metadata_server::Metadata& metadata(int index) const;
  ::mavsdk::rpc::component_metadata_server::Metadata* add_metadata();
  const ::google::protobuf::RepeatedPtrField< ::mavsdk::rpc::component_metadata_server::Metadata >&
      metadata() const;
  // @@protoc_insertion_point(class_scope:mavsdk.rpc.component_metadata_server.SetMetadataRequest)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 1,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::RepeatedPtrField< ::mavsdk::rpc::component_metadata_server::Metadata > metadata_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_component_5fmetadata_5fserver_2fcomponent_5fmetadata_5fserver_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// SetMetadataRequest

// repeated .mavsdk.rpc.component_metadata_server.Metadata metadata = 1;
inline int SetMetadataRequest::_internal_metadata_size() const {
  return _internal_metadata().size();
}
inline int SetMetadataRequest::metadata_size() const {
  return _internal_metadata_size();
}
inline void SetMetadataRequest::clear_metadata() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.metadata_.Clear();
}
inline ::mavsdk::rpc::component_metadata_server::Metadata* SetMetadataRequest::mutable_metadata(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:mavsdk.rpc.component_metadata_server.SetMetadataRequest.metadata)
  return _internal_mutable_metadata()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::mavsdk::rpc::component_metadata_server::Metadata>* SetMetadataRequest::mutable_metadata()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:mavsdk.rpc.component_metadata_server.SetMetadataRequest.metadata)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_metadata();
}
inline const ::mavsdk::rpc::component_metadata_server::Metadata& SetMetadataRequest::metadata(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.component_metadata_server.SetMetadataRequest.metadata)
  return _internal_metadata().Get(index);
}
inline ::mavsdk::rpc::component_metadata_server::Metadata* SetMetadataRequest::add_metadata() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::mavsdk::rpc::component_metadata_server::Metadata* _add = _internal_mutable_metadata()->Add();
  // @@protoc_insertion_point(field_add:mavsdk.rpc.component_metadata_server.SetMetadataRequest.metadata)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::mavsdk::rpc::component_metadata_server::Metadata>& SetMetadataRequest::metadata() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:mavsdk.rpc.component_metadata_server.SetMetadataRequest.metadata)
  return _internal_metadata();
}
inline const ::google::protobuf::RepeatedPtrField<::mavsdk::rpc::component_metadata_server::Metadata>&
SetMetadataRequest::_internal_metadata() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.metadata_;
}
inline ::google::protobuf::RepeatedPtrField<::mavsdk::rpc::component_metadata_server::Metadata>*
SetMetadataRequest::_internal_mutable_metadata() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.metadata_;
}

// -------------------------------------------------------------------

// SetMetadataResponse

// -------------------------------------------------------------------

// Metadata

// .mavsdk.rpc.component_metadata_server.MetadataType type = 1;
inline void Metadata::clear_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.type_ = 0;
}
inline ::mavsdk::rpc::component_metadata_server::MetadataType Metadata::type() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.component_metadata_server.Metadata.type)
  return _internal_type();
}
inline void Metadata::set_type(::mavsdk::rpc::component_metadata_server::MetadataType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:mavsdk.rpc.component_metadata_server.Metadata.type)
}
inline ::mavsdk::rpc::component_metadata_server::MetadataType Metadata::_internal_type() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::mavsdk::rpc::component_metadata_server::MetadataType>(_impl_.type_);
}
inline void Metadata::_internal_set_type(::mavsdk::rpc::component_metadata_server::MetadataType value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.type_ = value;
}

// string json_metadata = 2;
inline void Metadata::clear_json_metadata() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.json_metadata_.ClearToEmpty();
}
inline const std::string& Metadata::json_metadata() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.component_metadata_server.Metadata.json_metadata)
  return _internal_json_metadata();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Metadata::set_json_metadata(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.json_metadata_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:mavsdk.rpc.component_metadata_server.Metadata.json_metadata)
}
inline std::string* Metadata::mutable_json_metadata() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_json_metadata();
  // @@protoc_insertion_point(field_mutable:mavsdk.rpc.component_metadata_server.Metadata.json_metadata)
  return _s;
}
inline const std::string& Metadata::_internal_json_metadata() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.json_metadata_.Get();
}
inline void Metadata::_internal_set_json_metadata(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.json_metadata_.Set(value, GetArena());
}
inline std::string* Metadata::_internal_mutable_json_metadata() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.json_metadata_.Mutable( GetArena());
}
inline std::string* Metadata::release_json_metadata() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:mavsdk.rpc.component_metadata_server.Metadata.json_metadata)
  return _impl_.json_metadata_.Release();
}
inline void Metadata::set_allocated_json_metadata(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.json_metadata_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.json_metadata_.IsDefault()) {
          _impl_.json_metadata_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mavsdk.rpc.component_metadata_server.Metadata.json_metadata)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace component_metadata_server
}  // namespace rpc
}  // namespace mavsdk


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::mavsdk::rpc::component_metadata_server::MetadataType> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::mavsdk::rpc::component_metadata_server::MetadataType>() {
  return ::mavsdk::rpc::component_metadata_server::MetadataType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_component_5fmetadata_5fserver_2fcomponent_5fmetadata_5fserver_2eproto_2epb_2eh
