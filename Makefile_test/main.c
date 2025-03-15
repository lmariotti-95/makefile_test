#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

#include "user/lib/my_lib.h"

uint32_t u32_timer = 0;

int main(void)
{
  char buff[128];
  _memset(buff, '\0', sizeof(buff));

  printf("Hello world\n");

  while(1)
  {
    sprintf(buff, "Test %d\n", u32_timer);
    printf("%s", buff);

    u32_timer++;
    sleep(1);
  }
}