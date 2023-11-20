#pragma once

#include "defs.h"

enum kawit_MemProt {
  READ    = 0x1,
  WRITE   = 0x2,
  EXECUTE = 0x3,
};

enum kawit_MemResponse {
  KAWIT_MR_OK  = 0,
  KAWIT_MR_WRN = 1,
  KAWIT_MR_ERR = 0x80,
};

extern enum kawit_MemResponse kawit__mem_alloc(void ** ppalloc, kawit_u64 size);
