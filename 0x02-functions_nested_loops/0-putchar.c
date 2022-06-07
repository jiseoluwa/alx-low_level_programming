#include <unistd.h>
#include "main.h"

/**
 *main -Entry point
 *
 *return: Always 0 (success)
 */
int main(void)
{
  write(1,"_putcher",'\n');
  return (0);
}
