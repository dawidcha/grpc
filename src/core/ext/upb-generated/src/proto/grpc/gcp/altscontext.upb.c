#include <stddef.h>
#include "upb/upb/generated_code_support.h"
#include "grpc/gcp/altscontext.upb.h"

#include "src/proto/grpc/gcp/transport_security_common.upb.h"
static upb_Arena* upb_BootstrapArena() {
  static upb_Arena* arena = NULL;
  if (!arena) arena = upb_Arena_New();
  return arena;
}

const upb_MiniTable* grpc_gcp_AltsContext_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N1X1X.P1X1X3G";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 6), grpc_gcp_RpcProtocolVersions_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 7), grpc_gcp_AltsContext_PeerAttributesEntry_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_gcp_AltsContext_PeerAttributesEntry_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "%1X1X";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

