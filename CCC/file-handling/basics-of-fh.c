#include <stdio.h>

int main(int argc, char* argv[]) {
  FILE* fptr;

  // Create a file on your computer ()
  fptr = fopen("testing.txt", "w");  //read

  // w - write to file (ver write)
  // r - read from file
  // a - append to a file (write at the end)

  fprintf(fptr, "I am fine.\nhow are you?");

  // Close the file
  fclose(fptr);

  char data[100];

  fptr = fopen("testing.txt", "r");

  while(fgets(data, 100, fptr) != NULL) {
    printf("%s", data);
  }

  fclose(fptr);

  return 0;
}

