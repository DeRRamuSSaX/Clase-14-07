//bloq de notas

#include <stdio.h>

int main(void) {
  int elegir;
  FILE *fp;
  int c;
  char nota[100] = "";
  printf("Hola, soy el bloq de notas\n");
  printf("(1)Ver Notas\n");
  printf("(2)Agregar Notas\n");
  printf("(3)Borrar todas las notas\n");
  printf("(4)Salir de la app\n");
  printf("Elegi una opcion: ");
  scanf("%s\n", &elegir);
  switch (elegir) {
    case 1:
    fp = fopen("notitas.txt", "r");
    printf("----- NOTAS -----\n");
    while ((c = fgetc(fp)) != EOF) {
      printf("%c", c);
    }
    printf("----- FIN -----\n");
    fclose(fp);
    break;
    case 2:
    // fp = fopen("notitas.txt", "a");
    printf("Anota las nuevas Notas: \n");
    // char nota[100];
    // int i = 0;
    // c = getchar();
    // while ((c = getchar()) != '\n') {
    //   nota[i++] = c;
    //   nota[i++] = '\n';
    //   nota[i] = 0;
    // }
    // int caracter = getchar();
    fgets(nota, 100, stdin);
    fprintf(fp, "%s\n", nota);
    fclose(fp);
    break;
    case 3:
    fp = fopen("notitas.txt", "w");
    fclose(fp);
    break;
    case 4:
    return 0;
    default:
    printf("Opcion Desconocida\n");
  }
}
