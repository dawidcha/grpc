#include <stddef.h>
#include "upb/upb/generated_code_support.h"
#include "grpc/gcp/transport_security_common.upb.h"

static upb_Arena* upb_BootstrapArena() {
  static upb_Arena* arena = NULL;
  if (!arena) arena = upb_Arena_New();
  return arena;
}

const upb_MiniTable* grpc_gcp_RpcProtocolVersions_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N33";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 1), grpc_gcp_RpcProtocolVersions_Version_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), grpc_gcp_RpcProtocolVersions_Version_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_gcp_RpcProtocolVersions_Version_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N)P)P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTableEnum* grpc_gcp_SecurityLevel_enum_init() {
  static const upb_MiniTableEnum* mini_table = NULL;
  static const char* mini_descriptor = "!)";
  if (mini_table) return mini_table;
  mini_table = upb_MiniTableEnum_Build(mini_descriptor,
                                       strlen(mini_descriptor),
                                       upb_BootstrapArena(), NULL);
  return mini_table;
}

