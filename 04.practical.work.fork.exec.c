#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main() {
  char *cmd_ps = "ps";
  char *argv_ps[3];
  char *cmd_fr = "free";
  char *argv_fr[3];

  argv_ps[0] = "ps";
  argv_ps[1] = "-ef";
  argv_ps[2] = NULL;

  
  argv_fr[0] = "free";
  argv_fr[1] = "-h";
  argv_fr[2] = NULL;

  pid_t pid_ps = fork();
  pid_t pid_fr = fork();

  if(pid_ps == 0) {
    execvp(cmd_ps, argv_ps);
  } else if(pid_fr == 0) {
    execvp(cmd_fr, argv_fr);
  } else {
    printf("This is parent process.\n");
  }
  return 0;
}
