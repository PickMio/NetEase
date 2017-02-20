// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: book.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "book.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class PersonDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Person> {};
PersonDefaultTypeInternal _Person_default_instance_;
class AddrBookDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<AddrBook> {};
AddrBookDefaultTypeInternal _AddrBook_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace


const ::google::protobuf::uint32* protobuf_Offsets_book_2eproto() GOOGLE_ATTRIBUTE_COLD;
const ::google::protobuf::uint32* protobuf_Offsets_book_2eproto() {
  static const ::google::protobuf::uint32 offsets[] = {
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, result_per_page_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, score_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, phone_),
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddrBook, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddrBook, people_),
  };
  return offsets;
}

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Person)},
  { 9, -1, sizeof(AddrBook)},
};

static const ::google::protobuf::internal::DefaultInstanceData file_default_instances[] = {
  {reinterpret_cast<const ::google::protobuf::Message*>(&_Person_default_instance_), NULL},
  {reinterpret_cast<const ::google::protobuf::Message*>(&_AddrBook_default_instance_), NULL},
};

namespace {

void protobuf_AssignDescriptors() {
  protobuf_AddDesc_book_2eproto();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "book.proto", schemas, file_default_instances, protobuf_Offsets_book_2eproto(), factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void protobuf_ShutdownFile_book_2eproto() {
  _Person_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _AddrBook_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void protobuf_InitDefaults_book_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Person_default_instance_.DefaultConstruct();
  _AddrBook_default_instance_.DefaultConstruct();
}

void protobuf_InitDefaults_book_2eproto() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_InitDefaults_book_2eproto_impl);
}
void protobuf_AddDesc_book_2eproto_impl() {
  protobuf_InitDefaults_book_2eproto();
  static const char descriptor[] = {
      "\n\nbook.proto\"\220\001\n\006Person\022\014\n\004name\030\001 \001(\t\022\n\n"
      "\002id\030\002 \001(\005\022\027\n\017result_per_page\030\003 \001(\005\022\034\n\005sc"
      "ore\030\004 \001(\0162\r.Person.Score\022\r\n\005phone\030\005 \001(\t\""
      "&\n\005Score\022\010\n\004GOOD\020\000\022\n\n\006NORMAL\020\001\022\007\n\003BAD\020\002\""
      "#\n\010AddrBook\022\027\n\006people\030\001 \003(\0132\007.Personb\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 204);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "book.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_book_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_book_2eproto_once_);
void protobuf_AddDesc_book_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_book_2eproto_once_,
                 &protobuf_AddDesc_book_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_book_2eproto {
  StaticDescriptorInitializer_book_2eproto() {
    protobuf_AddDesc_book_2eproto();
  }
} static_descriptor_initializer_book_2eproto_;
const ::google::protobuf::EnumDescriptor* Person_Score_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_enum_descriptors[0];
}
bool Person_Score_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Person_Score Person::GOOD;
const Person_Score Person::NORMAL;
const Person_Score Person::BAD;
const Person_Score Person::Score_MIN;
const Person_Score Person::Score_MAX;
const int Person::Score_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Person::kNameFieldNumber;
const int Person::kIdFieldNumber;
const int Person::kResultPerPageFieldNumber;
const int Person::kScoreFieldNumber;
const int Person::kPhoneFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Person::Person()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_book_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Person)
}
Person::Person(const Person& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  phone_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.phone().size() > 0) {
    phone_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.phone_);
  }
  ::memcpy(&id_, &from.id_,
    reinterpret_cast<char*>(&score_) -
    reinterpret_cast<char*>(&id_) + sizeof(score_));
  // @@protoc_insertion_point(copy_constructor:Person)
}

void Person::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  phone_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, reinterpret_cast<char*>(&score_) -
    reinterpret_cast<char*>(&id_) + sizeof(score_));
  _cached_size_ = 0;
}

Person::~Person() {
  // @@protoc_insertion_point(destructor:Person)
  SharedDtor();
}

void Person::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  phone_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Person::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Person::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const Person& Person::default_instance() {
  protobuf_InitDefaults_book_2eproto();
  return *internal_default_instance();
}

Person* Person::New(::google::protobuf::Arena* arena) const {
  Person* n = new Person;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Person::Clear() {
// @@protoc_insertion_point(message_clear_start:Person)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  phone_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, reinterpret_cast<char*>(&score_) -
    reinterpret_cast<char*>(&id_) + sizeof(score_));
}

bool Person::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Person)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Person.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 id = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 result_per_page = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_per_page_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .Person.Score score = 4;
      case 4: {
        if (tag == 32u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_score(static_cast< ::Person_Score >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string phone = 5;
      case 5: {
        if (tag == 42u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_phone()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->phone().data(), this->phone().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Person.phone"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Person)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Person)
  return false;
#undef DO_
}

void Person::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Person)
  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Person.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // int32 id = 2;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // int32 result_per_page = 3;
  if (this->result_per_page() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->result_per_page(), output);
  }

  // .Person.Score score = 4;
  if (this->score() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->score(), output);
  }

  // string phone = 5;
  if (this->phone().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->phone().data(), this->phone().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Person.phone");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->phone(), output);
  }

  // @@protoc_insertion_point(serialize_end:Person)
}

::google::protobuf::uint8* Person::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Person)
  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Person.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // int32 id = 2;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // int32 result_per_page = 3;
  if (this->result_per_page() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->result_per_page(), target);
  }

  // .Person.Score score = 4;
  if (this->score() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->score(), target);
  }

  // string phone = 5;
  if (this->phone().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->phone().data(), this->phone().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Person.phone");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->phone(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Person)
  return target;
}

size_t Person::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Person)
  size_t total_size = 0;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string phone = 5;
  if (this->phone().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->phone());
  }

  // int32 id = 2;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // int32 result_per_page = 3;
  if (this->result_per_page() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->result_per_page());
  }

  // .Person.Score score = 4;
  if (this->score() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->score());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Person::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Person)
  GOOGLE_DCHECK_NE(&from, this);
  const Person* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Person>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Person)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Person)
    MergeFrom(*source);
  }
}

void Person::MergeFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Person)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.phone().size() > 0) {

    phone_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.phone_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.result_per_page() != 0) {
    set_result_per_page(from.result_per_page());
  }
  if (from.score() != 0) {
    set_score(from.score());
  }
}

void Person::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person::CopyFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Person::IsInitialized() const {
  return true;
}

void Person::Swap(Person* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Person::InternalSwap(Person* other) {
  name_.Swap(&other->name_);
  phone_.Swap(&other->phone_);
  std::swap(id_, other->id_);
  std::swap(result_per_page_, other->result_per_page_);
  std::swap(score_, other->score_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Person::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Person

// string name = 1;
void Person::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Person::name() const {
  // @@protoc_insertion_point(field_get:Person.name)
  return name_.GetNoArena();
}
void Person::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Person.name)
}
#if LANG_CXX11
void Person::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Person.name)
}
#endif
void Person::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Person.name)
}
void Person::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Person.name)
}
::std::string* Person::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Person.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Person::release_name() {
  // @@protoc_insertion_point(field_release:Person.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Person::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Person.name)
}

// int32 id = 2;
void Person::clear_id() {
  id_ = 0;
}
::google::protobuf::int32 Person::id() const {
  // @@protoc_insertion_point(field_get:Person.id)
  return id_;
}
void Person::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Person.id)
}

// int32 result_per_page = 3;
void Person::clear_result_per_page() {
  result_per_page_ = 0;
}
::google::protobuf::int32 Person::result_per_page() const {
  // @@protoc_insertion_point(field_get:Person.result_per_page)
  return result_per_page_;
}
void Person::set_result_per_page(::google::protobuf::int32 value) {
  
  result_per_page_ = value;
  // @@protoc_insertion_point(field_set:Person.result_per_page)
}

// .Person.Score score = 4;
void Person::clear_score() {
  score_ = 0;
}
::Person_Score Person::score() const {
  // @@protoc_insertion_point(field_get:Person.score)
  return static_cast< ::Person_Score >(score_);
}
void Person::set_score(::Person_Score value) {
  
  score_ = value;
  // @@protoc_insertion_point(field_set:Person.score)
}

// string phone = 5;
void Person::clear_phone() {
  phone_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Person::phone() const {
  // @@protoc_insertion_point(field_get:Person.phone)
  return phone_.GetNoArena();
}
void Person::set_phone(const ::std::string& value) {
  
  phone_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Person.phone)
}
#if LANG_CXX11
void Person::set_phone(::std::string&& value) {
  
  phone_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Person.phone)
}
#endif
void Person::set_phone(const char* value) {
  
  phone_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Person.phone)
}
void Person::set_phone(const char* value, size_t size) {
  
  phone_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Person.phone)
}
::std::string* Person::mutable_phone() {
  
  // @@protoc_insertion_point(field_mutable:Person.phone)
  return phone_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Person::release_phone() {
  // @@protoc_insertion_point(field_release:Person.phone)
  
  return phone_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Person::set_allocated_phone(::std::string* phone) {
  if (phone != NULL) {
    
  } else {
    
  }
  phone_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), phone);
  // @@protoc_insertion_point(field_set_allocated:Person.phone)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AddrBook::kPeopleFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AddrBook::AddrBook()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_book_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:AddrBook)
}
AddrBook::AddrBook(const AddrBook& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      people_(from.people_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AddrBook)
}

void AddrBook::SharedCtor() {
  _cached_size_ = 0;
}

AddrBook::~AddrBook() {
  // @@protoc_insertion_point(destructor:AddrBook)
  SharedDtor();
}

void AddrBook::SharedDtor() {
}

void AddrBook::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddrBook::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[1].descriptor;
}

const AddrBook& AddrBook::default_instance() {
  protobuf_InitDefaults_book_2eproto();
  return *internal_default_instance();
}

AddrBook* AddrBook::New(::google::protobuf::Arena* arena) const {
  AddrBook* n = new AddrBook;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AddrBook::Clear() {
// @@protoc_insertion_point(message_clear_start:AddrBook)
  people_.Clear();
}

bool AddrBook::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:AddrBook)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Person people = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_people()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:AddrBook)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:AddrBook)
  return false;
#undef DO_
}

void AddrBook::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:AddrBook)
  // repeated .Person people = 1;
  for (unsigned int i = 0, n = this->people_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->people(i), output);
  }

  // @@protoc_insertion_point(serialize_end:AddrBook)
}

::google::protobuf::uint8* AddrBook::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:AddrBook)
  // repeated .Person people = 1;
  for (unsigned int i = 0, n = this->people_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->people(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:AddrBook)
  return target;
}

size_t AddrBook::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AddrBook)
  size_t total_size = 0;

  // repeated .Person people = 1;
  {
    unsigned int count = this->people_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->people(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AddrBook::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AddrBook)
  GOOGLE_DCHECK_NE(&from, this);
  const AddrBook* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AddrBook>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AddrBook)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AddrBook)
    MergeFrom(*source);
  }
}

void AddrBook::MergeFrom(const AddrBook& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AddrBook)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  people_.MergeFrom(from.people_);
}

void AddrBook::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AddrBook)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddrBook::CopyFrom(const AddrBook& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AddrBook)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddrBook::IsInitialized() const {
  return true;
}

void AddrBook::Swap(AddrBook* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AddrBook::InternalSwap(AddrBook* other) {
  people_.UnsafeArenaSwap(&other->people_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AddrBook::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AddrBook

// repeated .Person people = 1;
int AddrBook::people_size() const {
  return people_.size();
}
void AddrBook::clear_people() {
  people_.Clear();
}
const ::Person& AddrBook::people(int index) const {
  // @@protoc_insertion_point(field_get:AddrBook.people)
  return people_.Get(index);
}
::Person* AddrBook::mutable_people(int index) {
  // @@protoc_insertion_point(field_mutable:AddrBook.people)
  return people_.Mutable(index);
}
::Person* AddrBook::add_people() {
  // @@protoc_insertion_point(field_add:AddrBook.people)
  return people_.Add();
}
::google::protobuf::RepeatedPtrField< ::Person >*
AddrBook::mutable_people() {
  // @@protoc_insertion_point(field_mutable_list:AddrBook.people)
  return &people_;
}
const ::google::protobuf::RepeatedPtrField< ::Person >&
AddrBook::people() const {
  // @@protoc_insertion_point(field_list:AddrBook.people)
  return people_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
