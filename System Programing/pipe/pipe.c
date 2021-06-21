#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>

#define BUFSIZE 10

int main(void)
{

 char bufin[]={"Empty"};
 char bufout[]={"Hello"};

 pid_t childpid;
 int bytesin;
 int fd[2];
 
 if( pipe (fd) == -1 )
  {
  perror("Failed to create pipe.\n");
  return 0;
  }

  bytesin = strlen(bufin);
  childpid = fork();

 if(childpid == -1)
  {
  perror("Failed to fork.\n");
  return 1;
  }

 if(childpid)
  {
  write(fd[1],bufout,strlen(bufout)+1);  
  }
 else
  bytesin=read(fd[0],bufin,BUFSIZE);
  
 fprintf(stderr,"[%ld] : My Bufin is {%.*s} , My Bufout is {%s}.\n",(long)getpid(),bytesin,bufin,bufout);

return 0;

}






