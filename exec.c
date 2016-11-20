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
  int w = 0;
  while(w < k + 1){
    commands[w] = strsep(&s, " ");
    w ++;
  }
  w = 0;
  while(commands[k][w]){
    w ++;
  }
  char bet[w];
  w = 0;
  while(commands[k][w] != '\n'){
    bet[w] = commands[k][w];
    w ++;
  }
  commands[k] = bet;
  printf("%s\n", commands[0]);
  //printf("%s\n", commands[1]);
  execvp(commands[0],commands);
  printf("work");
  return 0;
}
