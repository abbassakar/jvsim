// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: npu_mem.proto

#ifndef PROTOBUF_npu_5fmem_2eproto__INCLUDED
#define PROTOBUF_npu_5fmem_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "telemetry_top.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_npu_5fmem_2eproto();
void protobuf_AssignDesc_npu_5fmem_2eproto();
void protobuf_ShutdownFile_npu_5fmem_2eproto();

class NetworkProcessorMemoryUtilization;
class NpuMemory;
class NpuMemoryPartition;
class NpuMemorySummary;

// ===================================================================

class NetworkProcessorMemoryUtilization : public ::google::protobuf::Message {
 public:
  NetworkProcessorMemoryUtilization();
  virtual ~NetworkProcessorMemoryUtilization();

  NetworkProcessorMemoryUtilization(const NetworkProcessorMemoryUtilization& from);

  inline NetworkProcessorMemoryUtilization& operator=(const NetworkProcessorMemoryUtilization& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NetworkProcessorMemoryUtilization& default_instance();

  void Swap(NetworkProcessorMemoryUtilization* other);

  // implements Message ----------------------------------------------

  inline NetworkProcessorMemoryUtilization* New() const { return New(NULL); }

  NetworkProcessorMemoryUtilization* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NetworkProcessorMemoryUtilization& from);
  void MergeFrom(const NetworkProcessorMemoryUtilization& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NetworkProcessorMemoryUtilization* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .NpuMemory memory_stats = 1;
  int memory_stats_size() const;
  void clear_memory_stats();
  static const int kMemoryStatsFieldNumber = 1;
  const ::NpuMemory& memory_stats(int index) const;
  ::NpuMemory* mutable_memory_stats(int index);
  ::NpuMemory* add_memory_stats();
  ::google::protobuf::RepeatedPtrField< ::NpuMemory >*
      mutable_memory_stats();
  const ::google::protobuf::RepeatedPtrField< ::NpuMemory >&
      memory_stats() const;

  // @@protoc_insertion_point(class_scope:NetworkProcessorMemoryUtilization)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::NpuMemory > memory_stats_;
  friend void  protobuf_AddDesc_npu_5fmem_2eproto();
  friend void protobuf_AssignDesc_npu_5fmem_2eproto();
  friend void protobuf_ShutdownFile_npu_5fmem_2eproto();

  void InitAsDefaultInstance();
  static NetworkProcessorMemoryUtilization* default_instance_;
};
// -------------------------------------------------------------------

class NpuMemory : public ::google::protobuf::Message {
 public:
  NpuMemory();
  virtual ~NpuMemory();

  NpuMemory(const NpuMemory& from);

  inline NpuMemory& operator=(const NpuMemory& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NpuMemory& default_instance();

  void Swap(NpuMemory* other);

  // implements Message ----------------------------------------------

  inline NpuMemory* New() const { return New(NULL); }

  NpuMemory* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NpuMemory& from);
  void MergeFrom(const NpuMemory& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NpuMemory* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string identifier = 1;
  bool has_identifier() const;
  void clear_identifier();
  static const int kIdentifierFieldNumber = 1;
  const ::std::string& identifier() const;
  void set_identifier(const ::std::string& value);
  void set_identifier(const char* value);
  void set_identifier(const char* value, size_t size);
  ::std::string* mutable_identifier();
  ::std::string* release_identifier();
  void set_allocated_identifier(::std::string* identifier);

  // repeated .NpuMemorySummary summary = 2;
  int summary_size() const;
  void clear_summary();
  static const int kSummaryFieldNumber = 2;
  const ::NpuMemorySummary& summary(int index) const;
  ::NpuMemorySummary* mutable_summary(int index);
  ::NpuMemorySummary* add_summary();
  ::google::protobuf::RepeatedPtrField< ::NpuMemorySummary >*
      mutable_summary();
  const ::google::protobuf::RepeatedPtrField< ::NpuMemorySummary >&
      summary() const;

  // repeated .NpuMemoryPartition partition = 3;
  int partition_size() const;
  void clear_partition();
  static const int kPartitionFieldNumber = 3;
  const ::NpuMemoryPartition& partition(int index) const;
  ::NpuMemoryPartition* mutable_partition(int index);
  ::NpuMemoryPartition* add_partition();
  ::google::protobuf::RepeatedPtrField< ::NpuMemoryPartition >*
      mutable_partition();
  const ::google::protobuf::RepeatedPtrField< ::NpuMemoryPartition >&
      partition() const;

  // @@protoc_insertion_point(class_scope:NpuMemory)
 private:
  inline void set_has_identifier();
  inline void clear_has_identifier();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr identifier_;
  ::google::protobuf::RepeatedPtrField< ::NpuMemorySummary > summary_;
  ::google::protobuf::RepeatedPtrField< ::NpuMemoryPartition > partition_;
  friend void  protobuf_AddDesc_npu_5fmem_2eproto();
  friend void protobuf_AssignDesc_npu_5fmem_2eproto();
  friend void protobuf_ShutdownFile_npu_5fmem_2eproto();

  void InitAsDefaultInstance();
  static NpuMemory* default_instance_;
};
// -------------------------------------------------------------------

class NpuMemorySummary : public ::google::protobuf::Message {
 public:
  NpuMemorySummary();
  virtual ~NpuMemorySummary();

  NpuMemorySummary(const NpuMemorySummary& from);

  inline NpuMemorySummary& operator=(const NpuMemorySummary& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NpuMemorySummary& default_instance();

  void Swap(NpuMemorySummary* other);

  // implements Message ----------------------------------------------

  inline NpuMemorySummary* New() const { return New(NULL); }

  NpuMemorySummary* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NpuMemorySummary& from);
  void MergeFrom(const NpuMemorySummary& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NpuMemorySummary* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string resource_name = 1;
  bool has_resource_name() const;
  void clear_resource_name();
  static const int kResourceNameFieldNumber = 1;
  const ::std::string& resource_name() const;
  void set_resource_name(const ::std::string& value);
  void set_resource_name(const char* value);
  void set_resource_name(const char* value, size_t size);
  ::std::string* mutable_resource_name();
  ::std::string* release_resource_name();
  void set_allocated_resource_name(::std::string* resource_name);

  // optional uint64 size = 2;
  bool has_size() const;
  void clear_size();
  static const int kSizeFieldNumber = 2;
  ::google::protobuf::uint64 size() const;
  void set_size(::google::protobuf::uint64 value);

  // optional uint64 allocated = 3;
  bool has_allocated() const;
  void clear_allocated();
  static const int kAllocatedFieldNumber = 3;
  ::google::protobuf::uint64 allocated() const;
  void set_allocated(::google::protobuf::uint64 value);

  // optional int32 utilization = 4;
  bool has_utilization() const;
  void clear_utilization();
  static const int kUtilizationFieldNumber = 4;
  ::google::protobuf::int32 utilization() const;
  void set_utilization(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:NpuMemorySummary)
 private:
  inline void set_has_resource_name();
  inline void clear_has_resource_name();
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_allocated();
  inline void clear_has_allocated();
  inline void set_has_utilization();
  inline void clear_has_utilization();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr resource_name_;
  ::google::protobuf::uint64 size_;
  ::google::protobuf::uint64 allocated_;
  ::google::protobuf::int32 utilization_;
  friend void  protobuf_AddDesc_npu_5fmem_2eproto();
  friend void protobuf_AssignDesc_npu_5fmem_2eproto();
  friend void protobuf_ShutdownFile_npu_5fmem_2eproto();

  void InitAsDefaultInstance();
  static NpuMemorySummary* default_instance_;
};
// -------------------------------------------------------------------

class NpuMemoryPartition : public ::google::protobuf::Message {
 public:
  NpuMemoryPartition();
  virtual ~NpuMemoryPartition();

  NpuMemoryPartition(const NpuMemoryPartition& from);

  inline NpuMemoryPartition& operator=(const NpuMemoryPartition& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NpuMemoryPartition& default_instance();

  void Swap(NpuMemoryPartition* other);

  // implements Message ----------------------------------------------

  inline NpuMemoryPartition* New() const { return New(NULL); }

  NpuMemoryPartition* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NpuMemoryPartition& from);
  void MergeFrom(const NpuMemoryPartition& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NpuMemoryPartition* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string application_name = 2;
  bool has_application_name() const;
  void clear_application_name();
  static const int kApplicationNameFieldNumber = 2;
  const ::std::string& application_name() const;
  void set_application_name(const ::std::string& value);
  void set_application_name(const char* value);
  void set_application_name(const char* value, size_t size);
  ::std::string* mutable_application_name();
  ::std::string* release_application_name();
  void set_allocated_application_name(::std::string* application_name);

  // optional uint32 bytes_allocated = 3;
  bool has_bytes_allocated() const;
  void clear_bytes_allocated();
  static const int kBytesAllocatedFieldNumber = 3;
  ::google::protobuf::uint32 bytes_allocated() const;
  void set_bytes_allocated(::google::protobuf::uint32 value);

  // optional uint32 allocation_count = 4;
  bool has_allocation_count() const;
  void clear_allocation_count();
  static const int kAllocationCountFieldNumber = 4;
  ::google::protobuf::uint32 allocation_count() const;
  void set_allocation_count(::google::protobuf::uint32 value);

  // optional uint32 free_count = 5;
  bool has_free_count() const;
  void clear_free_count();
  static const int kFreeCountFieldNumber = 5;
  ::google::protobuf::uint32 free_count() const;
  void set_free_count(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:NpuMemoryPartition)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_application_name();
  inline void clear_has_application_name();
  inline void set_has_bytes_allocated();
  inline void clear_has_bytes_allocated();
  inline void set_has_allocation_count();
  inline void clear_has_allocation_count();
  inline void set_has_free_count();
  inline void clear_has_free_count();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr application_name_;
  ::google::protobuf::uint32 bytes_allocated_;
  ::google::protobuf::uint32 allocation_count_;
  ::google::protobuf::uint32 free_count_;
  friend void  protobuf_AddDesc_npu_5fmem_2eproto();
  friend void protobuf_AssignDesc_npu_5fmem_2eproto();
  friend void protobuf_ShutdownFile_npu_5fmem_2eproto();

  void InitAsDefaultInstance();
  static NpuMemoryPartition* default_instance_;
};
// ===================================================================

static const int kNpuMemoryExtFieldNumber = 11;
extern ::google::protobuf::internal::ExtensionIdentifier< ::JuniperNetworksSensors,
    ::google::protobuf::internal::MessageTypeTraits< ::NetworkProcessorMemoryUtilization >, 11, false >
  npu_memory_ext;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// NetworkProcessorMemoryUtilization

// repeated .NpuMemory memory_stats = 1;
inline int NetworkProcessorMemoryUtilization::memory_stats_size() const {
  return memory_stats_.size();
}
inline void NetworkProcessorMemoryUtilization::clear_memory_stats() {
  memory_stats_.Clear();
}
inline const ::NpuMemory& NetworkProcessorMemoryUtilization::memory_stats(int index) const {
  // @@protoc_insertion_point(field_get:NetworkProcessorMemoryUtilization.memory_stats)
  return memory_stats_.Get(index);
}
inline ::NpuMemory* NetworkProcessorMemoryUtilization::mutable_memory_stats(int index) {
  // @@protoc_insertion_point(field_mutable:NetworkProcessorMemoryUtilization.memory_stats)
  return memory_stats_.Mutable(index);
}
inline ::NpuMemory* NetworkProcessorMemoryUtilization::add_memory_stats() {
  // @@protoc_insertion_point(field_add:NetworkProcessorMemoryUtilization.memory_stats)
  return memory_stats_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::NpuMemory >*
NetworkProcessorMemoryUtilization::mutable_memory_stats() {
  // @@protoc_insertion_point(field_mutable_list:NetworkProcessorMemoryUtilization.memory_stats)
  return &memory_stats_;
}
inline const ::google::protobuf::RepeatedPtrField< ::NpuMemory >&
NetworkProcessorMemoryUtilization::memory_stats() const {
  // @@protoc_insertion_point(field_list:NetworkProcessorMemoryUtilization.memory_stats)
  return memory_stats_;
}

// -------------------------------------------------------------------

// NpuMemory

// required string identifier = 1;
inline bool NpuMemory::has_identifier() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NpuMemory::set_has_identifier() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NpuMemory::clear_has_identifier() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NpuMemory::clear_identifier() {
  identifier_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_identifier();
}
inline const ::std::string& NpuMemory::identifier() const {
  // @@protoc_insertion_point(field_get:NpuMemory.identifier)
  return identifier_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NpuMemory::set_identifier(const ::std::string& value) {
  set_has_identifier();
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NpuMemory.identifier)
}
inline void NpuMemory::set_identifier(const char* value) {
  set_has_identifier();
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NpuMemory.identifier)
}
inline void NpuMemory::set_identifier(const char* value, size_t size) {
  set_has_identifier();
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NpuMemory.identifier)
}
inline ::std::string* NpuMemory::mutable_identifier() {
  set_has_identifier();
  // @@protoc_insertion_point(field_mutable:NpuMemory.identifier)
  return identifier_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NpuMemory::release_identifier() {
  clear_has_identifier();
  return identifier_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NpuMemory::set_allocated_identifier(::std::string* identifier) {
  if (identifier != NULL) {
    set_has_identifier();
  } else {
    clear_has_identifier();
  }
  identifier_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), identifier);
  // @@protoc_insertion_point(field_set_allocated:NpuMemory.identifier)
}

// repeated .NpuMemorySummary summary = 2;
inline int NpuMemory::summary_size() const {
  return summary_.size();
}
inline void NpuMemory::clear_summary() {
  summary_.Clear();
}
inline const ::NpuMemorySummary& NpuMemory::summary(int index) const {
  // @@protoc_insertion_point(field_get:NpuMemory.summary)
  return summary_.Get(index);
}
inline ::NpuMemorySummary* NpuMemory::mutable_summary(int index) {
  // @@protoc_insertion_point(field_mutable:NpuMemory.summary)
  return summary_.Mutable(index);
}
inline ::NpuMemorySummary* NpuMemory::add_summary() {
  // @@protoc_insertion_point(field_add:NpuMemory.summary)
  return summary_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::NpuMemorySummary >*
NpuMemory::mutable_summary() {
  // @@protoc_insertion_point(field_mutable_list:NpuMemory.summary)
  return &summary_;
}
inline const ::google::protobuf::RepeatedPtrField< ::NpuMemorySummary >&
NpuMemory::summary() const {
  // @@protoc_insertion_point(field_list:NpuMemory.summary)
  return summary_;
}

// repeated .NpuMemoryPartition partition = 3;
inline int NpuMemory::partition_size() const {
  return partition_.size();
}
inline void NpuMemory::clear_partition() {
  partition_.Clear();
}
inline const ::NpuMemoryPartition& NpuMemory::partition(int index) const {
  // @@protoc_insertion_point(field_get:NpuMemory.partition)
  return partition_.Get(index);
}
inline ::NpuMemoryPartition* NpuMemory::mutable_partition(int index) {
  // @@protoc_insertion_point(field_mutable:NpuMemory.partition)
  return partition_.Mutable(index);
}
inline ::NpuMemoryPartition* NpuMemory::add_partition() {
  // @@protoc_insertion_point(field_add:NpuMemory.partition)
  return partition_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::NpuMemoryPartition >*
NpuMemory::mutable_partition() {
  // @@protoc_insertion_point(field_mutable_list:NpuMemory.partition)
  return &partition_;
}
inline const ::google::protobuf::RepeatedPtrField< ::NpuMemoryPartition >&
NpuMemory::partition() const {
  // @@protoc_insertion_point(field_list:NpuMemory.partition)
  return partition_;
}

// -------------------------------------------------------------------

// NpuMemorySummary

// optional string resource_name = 1;
inline bool NpuMemorySummary::has_resource_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NpuMemorySummary::set_has_resource_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NpuMemorySummary::clear_has_resource_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NpuMemorySummary::clear_resource_name() {
  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_resource_name();
}
inline const ::std::string& NpuMemorySummary::resource_name() const {
  // @@protoc_insertion_point(field_get:NpuMemorySummary.resource_name)
  return resource_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NpuMemorySummary::set_resource_name(const ::std::string& value) {
  set_has_resource_name();
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NpuMemorySummary.resource_name)
}
inline void NpuMemorySummary::set_resource_name(const char* value) {
  set_has_resource_name();
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NpuMemorySummary.resource_name)
}
inline void NpuMemorySummary::set_resource_name(const char* value, size_t size) {
  set_has_resource_name();
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NpuMemorySummary.resource_name)
}
inline ::std::string* NpuMemorySummary::mutable_resource_name() {
  set_has_resource_name();
  // @@protoc_insertion_point(field_mutable:NpuMemorySummary.resource_name)
  return resource_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NpuMemorySummary::release_resource_name() {
  clear_has_resource_name();
  return resource_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NpuMemorySummary::set_allocated_resource_name(::std::string* resource_name) {
  if (resource_name != NULL) {
    set_has_resource_name();
  } else {
    clear_has_resource_name();
  }
  resource_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resource_name);
  // @@protoc_insertion_point(field_set_allocated:NpuMemorySummary.resource_name)
}

// optional uint64 size = 2;
inline bool NpuMemorySummary::has_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NpuMemorySummary::set_has_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NpuMemorySummary::clear_has_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NpuMemorySummary::clear_size() {
  size_ = GOOGLE_ULONGLONG(0);
  clear_has_size();
}
inline ::google::protobuf::uint64 NpuMemorySummary::size() const {
  // @@protoc_insertion_point(field_get:NpuMemorySummary.size)
  return size_;
}
inline void NpuMemorySummary::set_size(::google::protobuf::uint64 value) {
  set_has_size();
  size_ = value;
  // @@protoc_insertion_point(field_set:NpuMemorySummary.size)
}

// optional uint64 allocated = 3;
inline bool NpuMemorySummary::has_allocated() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NpuMemorySummary::set_has_allocated() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NpuMemorySummary::clear_has_allocated() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NpuMemorySummary::clear_allocated() {
  allocated_ = GOOGLE_ULONGLONG(0);
  clear_has_allocated();
}
inline ::google::protobuf::uint64 NpuMemorySummary::allocated() const {
  // @@protoc_insertion_point(field_get:NpuMemorySummary.allocated)
  return allocated_;
}
inline void NpuMemorySummary::set_allocated(::google::protobuf::uint64 value) {
  set_has_allocated();
  allocated_ = value;
  // @@protoc_insertion_point(field_set:NpuMemorySummary.allocated)
}

// optional int32 utilization = 4;
inline bool NpuMemorySummary::has_utilization() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NpuMemorySummary::set_has_utilization() {
  _has_bits_[0] |= 0x00000008u;
}
inline void NpuMemorySummary::clear_has_utilization() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void NpuMemorySummary::clear_utilization() {
  utilization_ = 0;
  clear_has_utilization();
}
inline ::google::protobuf::int32 NpuMemorySummary::utilization() const {
  // @@protoc_insertion_point(field_get:NpuMemorySummary.utilization)
  return utilization_;
}
inline void NpuMemorySummary::set_utilization(::google::protobuf::int32 value) {
  set_has_utilization();
  utilization_ = value;
  // @@protoc_insertion_point(field_set:NpuMemorySummary.utilization)
}

// -------------------------------------------------------------------

// NpuMemoryPartition

// optional string name = 1;
inline bool NpuMemoryPartition::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NpuMemoryPartition::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NpuMemoryPartition::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NpuMemoryPartition::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& NpuMemoryPartition::name() const {
  // @@protoc_insertion_point(field_get:NpuMemoryPartition.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NpuMemoryPartition::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NpuMemoryPartition.name)
}
inline void NpuMemoryPartition::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NpuMemoryPartition.name)
}
inline void NpuMemoryPartition::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NpuMemoryPartition.name)
}
inline ::std::string* NpuMemoryPartition::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:NpuMemoryPartition.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NpuMemoryPartition::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NpuMemoryPartition::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:NpuMemoryPartition.name)
}

// optional string application_name = 2;
inline bool NpuMemoryPartition::has_application_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NpuMemoryPartition::set_has_application_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NpuMemoryPartition::clear_has_application_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NpuMemoryPartition::clear_application_name() {
  application_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_application_name();
}
inline const ::std::string& NpuMemoryPartition::application_name() const {
  // @@protoc_insertion_point(field_get:NpuMemoryPartition.application_name)
  return application_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NpuMemoryPartition::set_application_name(const ::std::string& value) {
  set_has_application_name();
  application_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NpuMemoryPartition.application_name)
}
inline void NpuMemoryPartition::set_application_name(const char* value) {
  set_has_application_name();
  application_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NpuMemoryPartition.application_name)
}
inline void NpuMemoryPartition::set_application_name(const char* value, size_t size) {
  set_has_application_name();
  application_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NpuMemoryPartition.application_name)
}
inline ::std::string* NpuMemoryPartition::mutable_application_name() {
  set_has_application_name();
  // @@protoc_insertion_point(field_mutable:NpuMemoryPartition.application_name)
  return application_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NpuMemoryPartition::release_application_name() {
  clear_has_application_name();
  return application_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NpuMemoryPartition::set_allocated_application_name(::std::string* application_name) {
  if (application_name != NULL) {
    set_has_application_name();
  } else {
    clear_has_application_name();
  }
  application_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), application_name);
  // @@protoc_insertion_point(field_set_allocated:NpuMemoryPartition.application_name)
}

// optional uint32 bytes_allocated = 3;
inline bool NpuMemoryPartition::has_bytes_allocated() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NpuMemoryPartition::set_has_bytes_allocated() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NpuMemoryPartition::clear_has_bytes_allocated() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NpuMemoryPartition::clear_bytes_allocated() {
  bytes_allocated_ = 0u;
  clear_has_bytes_allocated();
}
inline ::google::protobuf::uint32 NpuMemoryPartition::bytes_allocated() const {
  // @@protoc_insertion_point(field_get:NpuMemoryPartition.bytes_allocated)
  return bytes_allocated_;
}
inline void NpuMemoryPartition::set_bytes_allocated(::google::protobuf::uint32 value) {
  set_has_bytes_allocated();
  bytes_allocated_ = value;
  // @@protoc_insertion_point(field_set:NpuMemoryPartition.bytes_allocated)
}

// optional uint32 allocation_count = 4;
inline bool NpuMemoryPartition::has_allocation_count() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NpuMemoryPartition::set_has_allocation_count() {
  _has_bits_[0] |= 0x00000008u;
}
inline void NpuMemoryPartition::clear_has_allocation_count() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void NpuMemoryPartition::clear_allocation_count() {
  allocation_count_ = 0u;
  clear_has_allocation_count();
}
inline ::google::protobuf::uint32 NpuMemoryPartition::allocation_count() const {
  // @@protoc_insertion_point(field_get:NpuMemoryPartition.allocation_count)
  return allocation_count_;
}
inline void NpuMemoryPartition::set_allocation_count(::google::protobuf::uint32 value) {
  set_has_allocation_count();
  allocation_count_ = value;
  // @@protoc_insertion_point(field_set:NpuMemoryPartition.allocation_count)
}

// optional uint32 free_count = 5;
inline bool NpuMemoryPartition::has_free_count() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NpuMemoryPartition::set_has_free_count() {
  _has_bits_[0] |= 0x00000010u;
}
inline void NpuMemoryPartition::clear_has_free_count() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void NpuMemoryPartition::clear_free_count() {
  free_count_ = 0u;
  clear_has_free_count();
}
inline ::google::protobuf::uint32 NpuMemoryPartition::free_count() const {
  // @@protoc_insertion_point(field_get:NpuMemoryPartition.free_count)
  return free_count_;
}
inline void NpuMemoryPartition::set_free_count(::google::protobuf::uint32 value) {
  set_has_free_count();
  free_count_ = value;
  // @@protoc_insertion_point(field_set:NpuMemoryPartition.free_count)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_npu_5fmem_2eproto__INCLUDED
