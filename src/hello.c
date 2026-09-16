
#include <stdio.h>

int main(int argc, char *argv[]) {
  
  printf("Hello, RTU World from C Lab in 2026!\n");

  char name[50];

  printf("Please enter your first name: ");
  scanf("%49s", name);
  printf("%d", i);
  printf("\nHello %s! Nice to meet you!\n", name);

  printf("You passed %d argument(s).\n", argc - 1);

  for (int i = 1; i < argc; ++i) {
    printf("  arg[%d] = %s\n", i, argv[i]);
  }
  return 0;
}
