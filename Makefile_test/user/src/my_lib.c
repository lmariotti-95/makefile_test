#include "../lib/my_lib.h"
#include "../lib/utils.h"

void _memset(void* src, int8_t ch, size_t sz)
{
  uint8_t* p8_src = (uint8_t*)src;

  while(sz--)
    *(p8_src++) = _square((int32_t)ch);
}