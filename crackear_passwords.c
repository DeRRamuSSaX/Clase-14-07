#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 200

int main(int argc, char const *argv[]) {
  char *hash = argv[1];
  char *wordlist = argv[2];
  FILE *fp;
  char buffer[MAXLINE];
  fp = fopen(wordlist, "r");
  FILE *temp;
  while (fgets(buffer, MAXLINE, fp) != NULL) {
    temp = fopen("temp", "w");
    // fprintf(temp, "%s", buffer);
    for (int i = 0; i < 200; i++) {
      if (buffer[i] == '\n') buffer[i] = 0;
    char commad[100] = "md5sum <<< \""; //armando el comando md5sum <<< ???
    strcat(command, buffer);
    strcat(command, "\"");
    strcat(command, " > temp");
    system(command);
    fclose(temp);
    //tenemos el hash en temp y veamos si coincide
    char hash_to_compare[100];
    temp = fopen("temp", "r");
    fgets(line_read, MAXLINE, temp);
    strncopy(hash_to_compare, line_read, 32)
    hash_to_compare[32] = 0;
    if (strcmp(hash, hash_to_compare) == 0) {
      printf("Contraseña encontrada! Es: %s\n", line_read);
    } else {
      printf("Contraseña no encontrada...\n");
    }
    fclose(temp);
    }
    fclose(fp);
  }
  return 0;
}
