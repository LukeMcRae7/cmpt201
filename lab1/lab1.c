#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *line = NULL;
  size_t len = 0;
  size_t nread;

  printf("Please enter some text: ");
  nread = getline(&line, &len, stdin);

  char *token, *saveptr;
  char *str = line;

  printf("Tokens: \n");
  while (1) {
    token = strtok_r(str, " ", &saveptr);
    if (token == NULL) {
      break;
    }
    printf("  %s\n", token);
    str = NULL;
  }

  free(line);
  return 0;
}
