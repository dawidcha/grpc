#include <stddef.h>
#include "upb/upb/generated_code_support.h"
#include "grpc/lookup/v1/rls.upb.h"

static upb_Arena* upb_BootstrapArena() {
  static upb_Arena* arena = NULL;
  if (!arena) arena = upb_Arena_New();
  return arena;
}

const upb_MiniTable* grpc_lookup_v1_RouteLookupRequest_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$Nb1XG.P1X";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 4), grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "%1X1X";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_lookup_v1_RouteLookupResponse_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$Oa1PE";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTableEnum* grpc_lookup_v1_RouteLookupRequest_Reason_enum_init() {
  static const upb_MiniTableEnum* mini_table = NULL;
  static const char* mini_descriptor = "!)";
  if (mini_table) return mini_table;
  mini_table = upb_MiniTableEnum_Build(mini_descriptor,
                                       strlen(mini_descriptor),
                                       upb_BootstrapArena(), NULL);
  return mini_table;
}

