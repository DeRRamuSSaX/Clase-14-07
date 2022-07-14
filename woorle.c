#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  char *palabra[] = {
    "corte",
    "arbol",
    "perro",
    "cinco",
    "byron"
  };
  for (int i = 0; i < 5; i++) {
    printf("%s\n", palabra[i] == (rand() % 5) + 1);
  }
  // printf("Coloque una palabra de cinco letras:\n");
  // scanf("%s", &palabra);
  // printf("%s\n", palabra);
  return 0;
}
