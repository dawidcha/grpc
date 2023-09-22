#include <stddef.h>
#include "upb/upb/generated_code_support.h"
#include "grpc/lookup/v1/rls_config.upb.h"

#include "google/protobuf/duration.upb.h"
static upb_Arena* upb_BootstrapArena() {
  static upb_Arena* arena = NULL;
  if (!arena) arena = upb_Arena_New();
  return arena;
}

const upb_MiniTable* grpc_lookup_v1_NameMatcher_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N1XET/P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_GrpcKeyBuilder_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$NGG3G";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 1), grpc_lookup_v1_GrpcKeyBuilder_Name_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 3), grpc_lookup_v1_GrpcKeyBuilder_ExtraKeys_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), grpc_lookup_v1_NameMatcher_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 4), grpc_lookup_v1_GrpcKeyBuilder_ConstantKeysEntry_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_GrpcKeyBuilder_Name_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$O1P1P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_GrpcKeyBuilder_ExtraKeys_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$O1P1P1P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_GrpcKeyBuilder_ConstantKeysEntry_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "%1X1X";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_HttpKeyBuilder_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$NETETGGG";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 3), grpc_lookup_v1_NameMatcher_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 4), grpc_lookup_v1_NameMatcher_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 5), grpc_lookup_v1_HttpKeyBuilder_ConstantKeysEntry_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_HttpKeyBuilder_ConstantKeysEntry_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "%1X1X";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_RouteLookupConfig_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$NGG1X333+PET1X";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 1), grpc_lookup_v1_HttpKeyBuilder_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), grpc_lookup_v1_GrpcKeyBuilder_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 4), google_protobuf_Duration_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 5), google_protobuf_Duration_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 6), google_protobuf_Duration_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_RouteLookupClusterSpecifier_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N3";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 1), grpc_lookup_v1_RouteLookupConfig_msg_init());
  return mini_table;
}

