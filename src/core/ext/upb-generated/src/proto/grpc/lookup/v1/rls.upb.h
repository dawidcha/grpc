/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     grpc/lookup/v1/rls.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef GRPC_LOOKUP_V1_RLS_PROTO_UPB_H_
#define GRPC_LOOKUP_V1_RLS_PROTO_UPB_H_

#include "upb/upb/generated_code_support.h"

// Must be last.
#include "upb/upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef GRPCUPB
#ifdef GRPCUPB_EXPORT
#define GRPCUPB __declspec(dll_export)
#elifdef GRPCUPB_IMPORT
#define GRPCUPB __declspec(dll_import)
#else
#define GRPCUPB
#endif
#endif

extern const GRPCUPB upb_MiniTable* grpc_lookup_v1_RouteLookupRequest_msg_init();
extern const GRPCUPB upb_MiniTable* grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_msg_init();
extern const GRPCUPB upb_MiniTable* grpc_lookup_v1_RouteLookupResponse_msg_init();
extern const GRPCUPB upb_MiniTableEnum* grpc_lookup_v1_RouteLookupRequest_Reason_enum_init();

typedef struct grpc_lookup_v1_RouteLookupRequest grpc_lookup_v1_RouteLookupRequest;
typedef struct grpc_lookup_v1_RouteLookupRequest_KeyMapEntry grpc_lookup_v1_RouteLookupRequest_KeyMapEntry;
typedef struct grpc_lookup_v1_RouteLookupResponse grpc_lookup_v1_RouteLookupResponse;

typedef enum {
  grpc_lookup_v1_RouteLookupRequest_REASON_UNKNOWN = 0,
  grpc_lookup_v1_RouteLookupRequest_REASON_MISS = 1,
  grpc_lookup_v1_RouteLookupRequest_REASON_STALE = 2
} grpc_lookup_v1_RouteLookupRequest_Reason;



/* grpc.lookup.v1.RouteLookupRequest */

UPB_INLINE grpc_lookup_v1_RouteLookupRequest* grpc_lookup_v1_RouteLookupRequest_new(upb_Arena* arena) {
  return (grpc_lookup_v1_RouteLookupRequest*)_upb_Message_New(grpc_lookup_v1_RouteLookupRequest_msg_init(), arena);
}
UPB_INLINE grpc_lookup_v1_RouteLookupRequest* grpc_lookup_v1_RouteLookupRequest_parse(const char* buf, size_t size, upb_Arena* arena) {
  grpc_lookup_v1_RouteLookupRequest* ret = grpc_lookup_v1_RouteLookupRequest_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, grpc_lookup_v1_RouteLookupRequest_msg_init(), NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE grpc_lookup_v1_RouteLookupRequest* grpc_lookup_v1_RouteLookupRequest_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  grpc_lookup_v1_RouteLookupRequest* ret = grpc_lookup_v1_RouteLookupRequest_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, grpc_lookup_v1_RouteLookupRequest_msg_init(), extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* grpc_lookup_v1_RouteLookupRequest_serialize(const grpc_lookup_v1_RouteLookupRequest* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, grpc_lookup_v1_RouteLookupRequest_msg_init(), 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* grpc_lookup_v1_RouteLookupRequest_serialize_ex(const grpc_lookup_v1_RouteLookupRequest* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, grpc_lookup_v1_RouteLookupRequest_msg_init(), options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_clear_target_type(grpc_lookup_v1_RouteLookupRequest* msg) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 3);
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupRequest_target_type(const grpc_lookup_v1_RouteLookupRequest* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 3);
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_clear_key_map(grpc_lookup_v1_RouteLookupRequest* msg) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 4);
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE size_t grpc_lookup_v1_RouteLookupRequest_key_map_size(const grpc_lookup_v1_RouteLookupRequest* msg) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 4);
  const upb_Map* map = upb_Message_GetMap(msg, &field);
  return map ? _upb_Map_Size(map) : 0;
}
UPB_INLINE bool grpc_lookup_v1_RouteLookupRequest_key_map_get(const grpc_lookup_v1_RouteLookupRequest* msg, upb_StringView key, upb_StringView* val) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 4);
  const upb_Map* map = upb_Message_GetMap(msg, &field);
  if (!map) return false;
  return _upb_Map_Get(map, &key, 0, val, 0);
}
UPB_INLINE const grpc_lookup_v1_RouteLookupRequest_KeyMapEntry* grpc_lookup_v1_RouteLookupRequest_key_map_next(const grpc_lookup_v1_RouteLookupRequest* msg, size_t* iter) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 4);
  const upb_Map* map = upb_Message_GetMap(msg, &field);
  if (!map) return NULL;
  return (const grpc_lookup_v1_RouteLookupRequest_KeyMapEntry*)_upb_map_next(map, iter);
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_clear_reason(grpc_lookup_v1_RouteLookupRequest* msg) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 5);
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE int32_t grpc_lookup_v1_RouteLookupRequest_reason(const grpc_lookup_v1_RouteLookupRequest* msg) {
  int32_t default_val = 0;
  int32_t ret;
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 5);
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_clear_stale_header_data(grpc_lookup_v1_RouteLookupRequest* msg) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 6);
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupRequest_stale_header_data(const grpc_lookup_v1_RouteLookupRequest* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 6);
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}

UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_set_target_type(grpc_lookup_v1_RouteLookupRequest* msg, upb_StringView value) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 3);
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_key_map_clear(grpc_lookup_v1_RouteLookupRequest* msg) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 4);
  upb_Map* map = (upb_Map*)upb_Message_GetMap(msg, &field);
  if (!map) return;
  _upb_Map_Clear(map);
}
UPB_INLINE bool grpc_lookup_v1_RouteLookupRequest_key_map_set(grpc_lookup_v1_RouteLookupRequest* msg, upb_StringView key, upb_StringView val, upb_Arena* a) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 4);
  upb_Map* map = _upb_Message_GetOrCreateMutableMap(msg, &field, 0, 0, a);
  return _upb_Map_Insert(map, &key, 0, &val, 0, a) !=
         kUpb_MapInsertStatus_OutOfMemory;
}
UPB_INLINE bool grpc_lookup_v1_RouteLookupRequest_key_map_delete(grpc_lookup_v1_RouteLookupRequest* msg, upb_StringView key) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 4);
  upb_Map* map = (upb_Map*)upb_Message_GetMap(msg, &field);
  if (!map) return false;
  return _upb_Map_Delete(map, &key, 0, NULL);
}
UPB_INLINE grpc_lookup_v1_RouteLookupRequest_KeyMapEntry* grpc_lookup_v1_RouteLookupRequest_key_map_nextmutable(grpc_lookup_v1_RouteLookupRequest* msg, size_t* iter) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 4);
  upb_Map* map = (upb_Map*)upb_Message_GetMap(msg, &field);
  if (!map) return NULL;
  return (grpc_lookup_v1_RouteLookupRequest_KeyMapEntry*)_upb_map_next(map, iter);
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_set_reason(grpc_lookup_v1_RouteLookupRequest* msg, int32_t value) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 5);
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_set_stale_header_data(grpc_lookup_v1_RouteLookupRequest* msg, upb_StringView value) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupRequest_msg_init(), 6);
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}

/* grpc.lookup.v1.RouteLookupRequest.KeyMapEntry */

UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_key(const grpc_lookup_v1_RouteLookupRequest_KeyMapEntry* msg) {
  upb_StringView ret;
  _upb_msg_map_key(msg, &ret, 0);
  return ret;
}
UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_value(const grpc_lookup_v1_RouteLookupRequest_KeyMapEntry* msg) {
  upb_StringView ret;
  _upb_msg_map_value(msg, &ret, 0);
  return ret;
}

UPB_INLINE void grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_set_value(grpc_lookup_v1_RouteLookupRequest_KeyMapEntry* msg, upb_StringView value) {
  _upb_msg_map_set_value(msg, &value, 0);
}

/* grpc.lookup.v1.RouteLookupResponse */

UPB_INLINE grpc_lookup_v1_RouteLookupResponse* grpc_lookup_v1_RouteLookupResponse_new(upb_Arena* arena) {
  return (grpc_lookup_v1_RouteLookupResponse*)_upb_Message_New(grpc_lookup_v1_RouteLookupResponse_msg_init(), arena);
}
UPB_INLINE grpc_lookup_v1_RouteLookupResponse* grpc_lookup_v1_RouteLookupResponse_parse(const char* buf, size_t size, upb_Arena* arena) {
  grpc_lookup_v1_RouteLookupResponse* ret = grpc_lookup_v1_RouteLookupResponse_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, grpc_lookup_v1_RouteLookupResponse_msg_init(), NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE grpc_lookup_v1_RouteLookupResponse* grpc_lookup_v1_RouteLookupResponse_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  grpc_lookup_v1_RouteLookupResponse* ret = grpc_lookup_v1_RouteLookupResponse_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, grpc_lookup_v1_RouteLookupResponse_msg_init(), extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* grpc_lookup_v1_RouteLookupResponse_serialize(const grpc_lookup_v1_RouteLookupResponse* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, grpc_lookup_v1_RouteLookupResponse_msg_init(), 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* grpc_lookup_v1_RouteLookupResponse_serialize_ex(const grpc_lookup_v1_RouteLookupResponse* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, grpc_lookup_v1_RouteLookupResponse_msg_init(), options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void grpc_lookup_v1_RouteLookupResponse_clear_header_data(grpc_lookup_v1_RouteLookupResponse* msg) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 2);
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView grpc_lookup_v1_RouteLookupResponse_header_data(const grpc_lookup_v1_RouteLookupResponse* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 2);
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void grpc_lookup_v1_RouteLookupResponse_clear_targets(grpc_lookup_v1_RouteLookupResponse* msg) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 3);
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView const* grpc_lookup_v1_RouteLookupResponse_targets(const grpc_lookup_v1_RouteLookupResponse* msg, size_t* size) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 3);
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (upb_StringView const*)_upb_array_constptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE const upb_Array* _grpc_lookup_v1_RouteLookupResponse_targets_upb_array(const grpc_lookup_v1_RouteLookupResponse* msg, size_t* size) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 3);
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (size) {
    *size = arr ? arr->size : 0;
  }
  return arr;
}
UPB_INLINE upb_Array* _grpc_lookup_v1_RouteLookupResponse_targets_mutable_upb_array(const grpc_lookup_v1_RouteLookupResponse* msg, size_t* size, upb_Arena* arena) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 3);
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(
      (upb_Message*)msg, &field, arena);
  if (size) {
    *size = arr ? arr->size : 0;
  }
  return arr;
}
UPB_INLINE bool grpc_lookup_v1_RouteLookupResponse_has_targets(const grpc_lookup_v1_RouteLookupResponse* msg) {
  size_t size;
  grpc_lookup_v1_RouteLookupResponse_targets(msg, &size);
  return size != 0;
}

UPB_INLINE void grpc_lookup_v1_RouteLookupResponse_set_header_data(grpc_lookup_v1_RouteLookupResponse* msg, upb_StringView value) {
  const upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 2);
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE upb_StringView* grpc_lookup_v1_RouteLookupResponse_mutable_targets(grpc_lookup_v1_RouteLookupResponse* msg, size_t* size) {
  upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 3);
  upb_Array* arr = upb_Message_GetMutableArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (upb_StringView*)_upb_array_ptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE upb_StringView* grpc_lookup_v1_RouteLookupResponse_resize_targets(grpc_lookup_v1_RouteLookupResponse* msg, size_t size, upb_Arena* arena) {
  upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 3);
  return (upb_StringView*)upb_Message_ResizeArrayUninitialized(msg, &field, size, arena);
}
UPB_INLINE bool grpc_lookup_v1_RouteLookupResponse_add_targets(grpc_lookup_v1_RouteLookupResponse* msg, upb_StringView val, upb_Arena* arena) {
  upb_MiniTableField field = *upb_MiniTable_FindFieldByNumber(grpc_lookup_v1_RouteLookupResponse_msg_init(), 3);
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(msg, &field, arena);
  if (!arr || !_upb_Array_ResizeUninitialized(arr, arr->size + 1, arena)) {
    return false;
  }
  _upb_Array_Set(arr, arr->size - 1, &val, sizeof(val));
  return true;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/upb/port/undef.inc"

#endif  /* GRPC_LOOKUP_V1_RLS_PROTO_UPB_H_ */
