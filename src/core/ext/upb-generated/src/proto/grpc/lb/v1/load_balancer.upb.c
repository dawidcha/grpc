#include <stddef.h>
#include "upb/upb/generated_code_support.h"
#include "grpc/lb/v1/load_balancer.upb.h"

#include "google/protobuf/duration.upb.h"
#include "google/protobuf/timestamp.upb.h"
static upb_Arena* upb_BootstrapArena() {
  static upb_Arena* arena = NULL;
  if (!arena) arena = upb_Arena_New();
  return arena;
}

const upb_MiniTable* grpc_lb_v1_LoadBalanceRequest_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N33^!|#";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 1), grpc_lb_v1_InitialLoadBalanceRequest_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), grpc_lb_v1_ClientStats_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_lb_v1_InitialLoadBalanceRequest_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$O1P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_lb_v1_ClientStatsPerToken_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N1X+P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_lb_v1_ClientStats_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N3+P+Pb+P+PG";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 1), google_protobuf_Timestamp_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 8), grpc_lb_v1_ClientStatsPerToken_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_lb_v1_LoadBalanceResponse_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N333^!|#|$";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 1), grpc_lb_v1_InitialLoadBalanceResponse_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), grpc_lb_v1_ServerList_msg_init());
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 3), grpc_lb_v1_FallbackResponse_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_lb_v1_FallbackResponse_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_lb_v1_InitialLoadBalanceResponse_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$Na3";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 2), google_protobuf_Duration_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_lb_v1_ServerList_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$NG";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  upb_MiniTable_SetSubMessage(mini_table, (upb_MiniTableField*)upb_MiniTable_FindFieldByNumber(mini_table, 1), grpc_lb_v1_Server_msg_init());
  return mini_table;
}

const upb_MiniTable* grpc_lb_v1_Server_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N0P(P1X/P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

