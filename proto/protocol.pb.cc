// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: protocol.proto
// Protobuf C++ Version: 5.27.3

#include "protocol.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace command {

inline constexpr Command::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        cmd_{0u},
        src_{static_cast< ::command::Device >(0)},
        dst_{static_cast< ::command::Device >(0)},
        dtt_{0u},
        sig_{0u},
        data_{},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR Command::Command(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct CommandDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommandDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommandDefaultTypeInternal() {}
  union {
    Command _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommandDefaultTypeInternal _Command_default_instance_;
}  // namespace command
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_protocol_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protocol_2eproto = nullptr;
const ::uint32_t
    TableStruct_protocol_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::command::Command, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::command::Command, _internal_metadata_),
        ~0u,  // no _extensions_
        PROTOBUF_FIELD_OFFSET(::command::Command, _impl_._oneof_case_[0]),
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::command::Command, _impl_.cmd_),
        PROTOBUF_FIELD_OFFSET(::command::Command, _impl_.src_),
        PROTOBUF_FIELD_OFFSET(::command::Command, _impl_.dst_),
        PROTOBUF_FIELD_OFFSET(::command::Command, _impl_.dtt_),
        PROTOBUF_FIELD_OFFSET(::command::Command, _impl_.sig_),
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        PROTOBUF_FIELD_OFFSET(::command::Command, _impl_.data_),
        0,
        1,
        2,
        3,
        4,
        ~0u,
        ~0u,
        ~0u,
        ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 18, -1, sizeof(::command::Command)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::command::_Command_default_instance_._instance,
};
const char descriptor_table_protodef_protocol_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\016protocol.proto\022\007command\"\300\001\n\007Command\022\013\n"
    "\003cmd\030\001 \002(\r\022\034\n\003src\030\002 \002(\0162\017.command.Device"
    "\022\034\n\003dst\030\003 \002(\0162\017.command.Device\022\013\n\003dtt\030\004 "
    "\002(\r\022\013\n\003sig\030\005 \002(\r\022\022\n\010string_d\030\006 \001(\tH\000\022\021\n\007"
    "bytes_d\030\007 \001(\014H\000\022\017\n\005int_d\030\010 \001(\003H\000\022\022\n\010doub"
    "le_d\030\t \001(\001H\000B\006\n\004data*`\n\006Device\022\007\n\003IPC\020\000\022"
    "\007\n\003ADC\020d\022\010\n\003CMM\020\310\001\022\010\n\003EPS\020\254\002\022\010\n\003OBM\020\220\003\022\010"
    "\n\003OBA\020\364\003\022\010\n\003PAY\020\330\004\022\010\n\003SFT\020\274\005\022\010\n\003THM\020\240\006B\002"
    "H\002"
};
static ::absl::once_flag descriptor_table_protocol_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_protocol_2eproto = {
    false,
    false,
    322,
    descriptor_table_protodef_protocol_2eproto,
    "protocol.proto",
    &descriptor_table_protocol_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protocol_2eproto::offsets,
    file_level_enum_descriptors_protocol_2eproto,
    file_level_service_descriptors_protocol_2eproto,
};
namespace command {
const ::google::protobuf::EnumDescriptor* Device_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_protocol_2eproto);
  return file_level_enum_descriptors_protocol_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t Device_internal_data_[] = {
    65536u, 524288u, 500u, 300u, 700u, 200u, 400u, 600u, 800u, 100u, };
bool Device_IsValid(int value) {
  return ::_pbi::ValidateEnum(value, Device_internal_data_);
}
// ===================================================================

class Command::_Internal {
 public:
  using HasBits =
      decltype(std::declval<Command>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(Command, _impl_._has_bits_);
  static constexpr ::int32_t kOneofCaseOffset =
      PROTOBUF_FIELD_OFFSET(::command::Command, _impl_._oneof_case_);
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000001f) ^ 0x0000001f) != 0;
  }
};

Command::Command(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:command.Command)
}
inline PROTOBUF_NDEBUG_INLINE Command::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::command::Command& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        data_{},
        _oneof_case_{from._oneof_case_[0]} {}

Command::Command(
    ::google::protobuf::Arena* arena,
    const Command& from)
    : ::google::protobuf::Message(arena) {
  Command* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, cmd_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, cmd_),
           offsetof(Impl_, sig_) -
               offsetof(Impl_, cmd_) +
               sizeof(Impl_::sig_));
  switch (data_case()) {
    case DATA_NOT_SET:
      break;
      case kStringD:
        new (&_impl_.data_.string_d_) decltype(_impl_.data_.string_d_){arena, from._impl_.data_.string_d_};
        break;
      case kBytesD:
        new (&_impl_.data_.bytes_d_) decltype(_impl_.data_.bytes_d_){arena, from._impl_.data_.bytes_d_};
        break;
      case kIntD:
        _impl_.data_.int_d_ = from._impl_.data_.int_d_;
        break;
      case kDoubleD:
        _impl_.data_.double_d_ = from._impl_.data_.double_d_;
        break;
  }

  // @@protoc_insertion_point(copy_constructor:command.Command)
}
inline PROTOBUF_NDEBUG_INLINE Command::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        data_{},
        _oneof_case_{} {}

inline void Command::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, cmd_),
           0,
           offsetof(Impl_, sig_) -
               offsetof(Impl_, cmd_) +
               sizeof(Impl_::sig_));
}
Command::~Command() {
  // @@protoc_insertion_point(destructor:command.Command)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Command::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  if (has_data()) {
    clear_data();
  }
  _impl_.~Impl_();
}

void Command::clear_data() {
// @@protoc_insertion_point(one_of_clear_start:command.Command)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (data_case()) {
    case kStringD: {
      _impl_.data_.string_d_.Destroy();
      break;
    }
    case kBytesD: {
      _impl_.data_.bytes_d_.Destroy();
      break;
    }
    case kIntD: {
      // No need to clear
      break;
    }
    case kDoubleD: {
      // No need to clear
      break;
    }
    case DATA_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = DATA_NOT_SET;
}


const ::google::protobuf::MessageLite::ClassData*
Command::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              Command::IsInitializedImpl,
              PROTOBUF_FIELD_OFFSET(Command, _impl_._cached_size_),
              false,
          },
          &Command::MergeImpl,
          &Command::kDescriptorMethods,
          &descriptor_table_protocol_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 9, 2, 40, 2> Command::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Command, _impl_._has_bits_),
    0, // no _extensions_
    9, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294966784,  // skipmap
    offsetof(decltype(_table_), field_entries),
    9,  // num_field_entries
    2,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Command_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::command::Command>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // required uint32 cmd = 1;
    {::_pbi::TcParser::FastV32S1,
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(Command, _impl_.cmd_)}},
    // required .command.Device src = 2;
    {::_pbi::TcParser::FastEvS1,
     {16, 1, 0, PROTOBUF_FIELD_OFFSET(Command, _impl_.src_)}},
    // required .command.Device dst = 3;
    {::_pbi::TcParser::FastEvS1,
     {24, 2, 1, PROTOBUF_FIELD_OFFSET(Command, _impl_.dst_)}},
    // required uint32 dtt = 4;
    {::_pbi::TcParser::FastV32S1,
     {32, 3, 0, PROTOBUF_FIELD_OFFSET(Command, _impl_.dtt_)}},
    // required uint32 sig = 5;
    {::_pbi::TcParser::FastV32S1,
     {40, 4, 0, PROTOBUF_FIELD_OFFSET(Command, _impl_.sig_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // required uint32 cmd = 1;
    {PROTOBUF_FIELD_OFFSET(Command, _impl_.cmd_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // required .command.Device src = 2;
    {PROTOBUF_FIELD_OFFSET(Command, _impl_.src_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kEnum)},
    // required .command.Device dst = 3;
    {PROTOBUF_FIELD_OFFSET(Command, _impl_.dst_), _Internal::kHasBitsOffset + 2, 1,
    (0 | ::_fl::kFcOptional | ::_fl::kEnum)},
    // required uint32 dtt = 4;
    {PROTOBUF_FIELD_OFFSET(Command, _impl_.dtt_), _Internal::kHasBitsOffset + 3, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // required uint32 sig = 5;
    {PROTOBUF_FIELD_OFFSET(Command, _impl_.sig_), _Internal::kHasBitsOffset + 4, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // string string_d = 6;
    {PROTOBUF_FIELD_OFFSET(Command, _impl_.data_.string_d_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kRawString | ::_fl::kRepAString)},
    // bytes bytes_d = 7;
    {PROTOBUF_FIELD_OFFSET(Command, _impl_.data_.bytes_d_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kBytes | ::_fl::kRepAString)},
    // int64 int_d = 8;
    {PROTOBUF_FIELD_OFFSET(Command, _impl_.data_.int_d_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kInt64)},
    // double double_d = 9;
    {PROTOBUF_FIELD_OFFSET(Command, _impl_.data_.double_d_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kDouble)},
  }}, {{
    {::_pbi::FieldAuxEnumData{}, ::command::Device_internal_data_},
    {::_pbi::FieldAuxEnumData{}, ::command::Device_internal_data_},
  }}, {{
    "\17\0\0\0\0\0\10\0\0\0\0\0\0\0\0\0"
    "command.Command"
    "string_d"
  }},
};

void Command::InternalSwap(Command* PROTOBUF_RESTRICT other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Command::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace command
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_protocol_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
