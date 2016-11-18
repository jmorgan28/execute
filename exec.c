#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc,char * argy[]){
  printf("Enter the program name:\n");
  char a[50];
  fgets(a,sizeof(a),stdin);
  printf("%s\n", a); 
  return 0;
}
