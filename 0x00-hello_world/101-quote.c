#include <unistd.h>
/**
  *main-prints a phrase,and that piece of
  * art is useful
  *Return:1 if exited properly
  */

int main(void)
{
write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n", 52);
return (1);
}
