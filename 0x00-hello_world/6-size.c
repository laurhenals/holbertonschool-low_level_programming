#include <stdio.h>
int main(void)
{
  printf("sizeof char is %lu byte(s)\n", sizeof(char));
  printf("sizeof int is %lu byte(s)\n", sizeof(int));
  printf("sizeof long int is %lu byte(s)\n", sizeof(long int));
  printf("size of long long int is %lu byte(s)\n", sizeof(long long int));
  printf("size of float is %lu byte(s)\n", sizeof(float));
  return (0);
}
