#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dirent.h>
#include<errno.h>

int main(int argc,char *argv[]){
	struct dirent *direntp;
	pid_t childpid;
	DIR *dirp;

	if((dirp = opendir(argv[1])) == NULL){
		perror("Directory can not be opened");
		return 1;
	}
	
	while((direntp=readdir(dirp))!=NULL){
		if((childpid=fork())<=0)
		break;
			if(childpid=0){
			execl("/home/waqasashiq/Desktop/mycopyfile.c","mycopyfile.c",direntp->d_name,argv[2],NULL);
			}
	}

	while((closedir(dirp)== -1) && (errno == EINTR))
	return 0;

}
