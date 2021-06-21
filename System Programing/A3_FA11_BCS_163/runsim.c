#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_CANON 900

int makeargv(const char *source, const char *delimiters, char ***argvp);

int main(int argc , char * argv[]){

	pid_t child_pid;
	char **myargv;
	char file_terminate[] = " \t\n";
	char read[MAX_CANON];
	int pr_limit = atoi(argv[1]);
	int pr_count = 0;
	int program_counter  = 0;

	
	if(argc != 3){
		fprintf(stderr,"Usage : %s digits",argv[0]);
		return 1;
	}


	if(pr_limit < 0){
		perror("Invalid Limit is enter.Please enter the positive number!");
		return 1;
	}

	FILE * bil;
	bil = fopen(argv[2],"r");

	if(bil == NULL){
		fprintf(stderr,"\nFile could not be opened.\n");
		return 1;
	}
	else{
		while(fgets(read , MAX_CANON - 1 , bil) != NULL){
			fprintf(stderr,"File command : %s",read);
			if(pr_limit == pr_count){
				wait(NULL);
				pr_count--;
			}
			pr_count++;
			program_counter++;

			child_pid = fork();
			if(child_pid < 0 ){
				fprintf(stderr,"\nFailed to create the fork process\n");
				return 1;
			}

			if(child_pid == 0){
				  if(makeargv(read , file_terminate , &myargv) == -1){	
				 perror("\nInvalid arguments!\nChild failed to construct argument array.\n");
  				}
                                else{
					execvp(myargv[0], &myargv[0]);
                                }	
       			        return 1;	
			}
                    
                       if (waitpid(-1, NULL, WNOHANG) != 0){
			pr_count--;
        	        }
		}

	}


	while (1)
	{
		child_pid = wait(NULL);

		if ((child_pid == -1) && (errno != EINTR))
		{
			break;
		}
	}
       
        printf("Program Counter : %d\n", program_counter);
	return 0;


}

int makeargv(const char *source, const char *delimiters, char ***argvp)
{
	int i;
	int error;
	int num_tokens;
	char *buf;
	const char *snew;

	if ((source == NULL) || (delimiters == NULL) || (argvp == NULL)){
		errno = EINVAL;
		return -1;
	}

	snew = source + strspn(source, delimiters);
	if ((buf = malloc(strlen(snew) + 1)) == NULL){
		return -1;	
	}
	strcpy(buf, snew);

	num_tokens = 0;
	if (strtok(buf, delimiters) != NULL){
	for (num_tokens = 1; strtok(NULL, delimiters) != NULL; num_tokens++);
	}

	if ((*argvp = malloc((num_tokens + 1) * sizeof(char *))) == NULL){
	error = errno;
	free(buf);
	errno = error;
	return -1;
	}

	if (num_tokens == 0){
	free(buf);
	}
	else{
		strcpy(buf, snew);
		**argvp = strtok(buf, delimiters);
		for (i = 1; i < num_tokens; i++){
			*((*argvp) + i) = strtok(NULL, delimiters);
			}
	}
	*((*argvp) + num_tokens) = NULL;
	return num_tokens;
}
