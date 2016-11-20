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
  printf("What would you like to do?:\n");
  char a[250];
  fgets(a,sizeof(a),stdin);
  char *s = a;
  int i = 0;
  int k = 0;
  while(s[i]){
    i ++;
    if(s[i] == ' '){
      k ++;
    }
  }
  
  char * commands[k +2];
  char * commandss[k +1];
  int w = 0;
  while(w < k + 1){
    commands[w] = strsep(&s, " ");
    w ++;
  }
  w = 0;
  while(w < k){
    commandss[w] = commands[w + 1];
    w ++;
  }
  //printf("%s\n", a);
  //printf("%d\n", k);
  execvp(commands[1],commandss);
  printf("working");
  return 0;
}
