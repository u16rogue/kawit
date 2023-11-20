#pragma once

#define kawit_is_failure(f) (f & 0x80)
#define kawit_is_success(f) (f == 0)

enum kawit_HookMethod {
  KAWIT_HM_INVALID = 0,
  KAWIT_HM_ALL,
  KAWIT_HM_TRAMPOLINE,
};

struct kawit_HookOpts {
  enum kawit_HookMethod method;
};

/*
 *  Handle to a kawit context.
 */
typedef struct kawit__opaque_Context* kawit_HandleContext;

enum kawit_ContextResponse {
  KAWIT_CTXRES_OK  = 0,
  KAWIT_CTXRES_WRN = 1,
  KAWIT_CTXRES_ERR = 0x80,
};

enum kawit_ContextResponse kawit_context_init(kawit_HandleContext ctx);
enum kawit_ContextResponse kawit_context_create(void);

enum kawit_ContextResponse kawit_context_uninit(kawit_HandleContext ctx);
enum kawit_ContextResponse kawit_context_destroy(kawit_HandleContext ctx);

enum kawit_HookResponse {
  KAWIT_HK_OK  = 0,
  KAWIT_HK_WRN = 1,
  KAWIT_HK_ERR = 0x80,
};

enum kawit_HookResponse kawit_hook_init();
