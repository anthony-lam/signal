#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

static void sighandler(int signo){
  if (signo == SIGINT){
  	int file = open("write.txt", O_WRONLY | O_CREAT , 0666);
  	write(file, "Exited due to keyboard interrupt\n",33);
    printf("keyboard interrupt\n");
    close(file);
    exit(0);
  }
  else if (signo == SIGUSR1){
  	printf("The parent pid is %d\n", getppid());
  }
}

int main(){
  signal(SIGINT, sighandler);
  signal(SIGUSR1, sighandler);
  while(1){
    printf("The pid is: %d\n", getpid());
    sleep(1);
  }
}
