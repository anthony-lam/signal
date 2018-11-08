#include <stdio.h>
#include <signal.h>
#include <unistd.h>


static void sighandler(int signo){
  if (signo == SIGINT){
    printf("keyboard interrupt\n");
  }
}

int main(){
  signal(SIGINT, sighandler);
  signal(SIG
  while(1){
    printf("The pid is: %d\n", getpid());
    sleep(1);
  }
}
