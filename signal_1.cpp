#include <stdio.h>
#include <signal.h>
#include <unistd.h>


int main (int argc, char **argv){
    printf("Start...\n");
    
    signal(SIGTERM,  	SIG_IGN);
    signal(SIGINT, 	SIG_IGN);
    
    pid_t pd= getpid();
    printf("PID = %i\n", pd);
    
      
    FILE *fd = fopen("pid", "w");
    fprintf(fd, "%i", pd);
    fclose(fd);
      

    
    
    pause();
    
    
    return 0;    
}