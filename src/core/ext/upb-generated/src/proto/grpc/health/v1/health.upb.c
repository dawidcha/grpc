#include <stddef.h>
#include "upb/upb/generated_code_support.h"
#include "grpc/health/v1/health.upb.h"

static upb_Arena* upb_BootstrapArena() {
  static upb_Arena* arena = NULL;
  if (!arena) arena = upb_Arena_New();
  return arena;
}

const upb_MiniTable* grpc_health_v1_HealthCheckRequest_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$O1P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTable* grpc_health_v1_HealthCheckResponse_msg_init() {
  static upb_MiniTable* mini_table = NULL;
  static const char* mini_descriptor = "$N.P";
  if (mini_table) return mini_table;
  mini_table =
      upb_MiniTable_Build(mini_descriptor, strlen(mini_descriptor),
                          upb_BootstrapArena(), NULL);
  return mini_table;
}

const upb_MiniTableEnum* grpc_health_v1_HealthCheckResponse_ServingStatus_enum_init() {
  static const upb_MiniTableEnum* mini_table = NULL;
  static const char* mini_descriptor = "!1";
  if (mini_table) return mini_table;
  mini_table = upb_MiniTableEnum_Build(mini_descriptor,
                                       strlen(mini_descriptor),
                                       upb_BootstrapArena(), NULL);
  return mini_table;
}

