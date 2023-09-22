#include <stddef.h>
#include "upb/upb/generated_code_support.h"
#include "grpc/gcp/handshaker.upb.h"

#include "src/proto/grpc/gcp/transport_security_common.upb.h"
static upb_Arena* upb_BootstrapArena() {
  static upb_Arena* arena = NULL;
  if (!arena) arena = upb_Arena_New();
  return arena;
}

const upb_MiniTable* grpc_gcp_Endpoint_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N1X(P.P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_gcp_Identity_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N1T1TG^!|#";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 3), grpc_gcp_Identity_AttributesEntry_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_gcp_Identity_AttributesEntry_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "%1X1X";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_gcp_StartClientHandshakeReq_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N.PETETG3331X3)P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 4), grpc_gcp_Identity_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 5), grpc_gcp_Identity_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 6), grpc_gcp_Endpoint_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 7), grpc_gcp_Endpoint_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 9), grpc_gcp_RpcProtocolVersions_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_gcp_ServerHandshakeParameters_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$NETG";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), grpc_gcp_Identity_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_gcp_StartServerHandshakeReq_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$NETG0P333)P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 4), grpc_gcp_Endpoint_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 5), grpc_gcp_Endpoint_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 6), grpc_gcp_RpcProtocolVersions_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "%(P3";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), grpc_gcp_ServerHandshakeParameters_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_gcp_NextHandshakeMessageReq_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N0P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_gcp_HandshakerReq_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N333^!|#|$";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 1), grpc_gcp_StartClientHandshakeReq_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), grpc_gcp_StartServerHandshakeReq_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 3), grpc_gcp_NextHandshakeMessageReq_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_gcp_HandshakerResult_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N1X1X0P33/P3)P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 4), grpc_gcp_Identity_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 5), grpc_gcp_Identity_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 7), grpc_gcp_RpcProtocolVersions_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_gcp_HandshakerStatus_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N)P1X";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_gcp_HandshakerResp_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N0P)P33";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 3), grpc_gcp_HandshakerResult_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 4), grpc_gcp_HandshakerStatus_msg_init());
  return mini_table;
}

const upb_MiniTableEnum* grpc_gcp_HandshakeProtocol_enum_init() {
  static const upb_MiniTableEnum* mini_table = NULL;
  static const char* mini_descriptor = "!)";
  if (mini_table) return mini_table;
  mini_table = upb_MiniTableEnum_Build(mini_descriptor,
                                       strlen(mini_descriptor),
                                       upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTableEnum* grpc_gcp_NetworkProtocol_enum_init() {
  static const upb_MiniTableEnum* mini_table = NULL;
  static const char* mini_descriptor = "!)";
  if (mini_table) return mini_table;
  mini_table = upb_MiniTableEnum_Build(mini_descriptor,
                                       strlen(mini_descriptor),
                                       upb_BootstrapArena(), NULL);
  return mini_table;
}

