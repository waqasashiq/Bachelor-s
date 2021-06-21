#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<sys/stat.h>
#include<fcntl.h>
#define size 1024
int main(int argc, char *argv[]){
	int bytes;
	int fromfd;
	int tofd;
	char str[100];
	char dstr[100];
	
	strcpy(str,"/home/waqasashiq/Desktop/Source/");
	strcat(str,argv[1]);
	
	strcpy(dstr,"/home/waqasashiq/Desktop/Destination/");
	strcat(dstr,argv[1]);
	
	if(argc!=3){
	
		fprintf(stderr,"usage: %s from file to file\n",argv[0]);
		return 1;

	}
	if((fromfd=open(str,O_RDONLY))== -1){
		perror("Failed to open input files:");
		return 1;
	} 
	if((tofd=open(dstr,O_WRONLY | O_CREAT | O_EXCL,S_IRUSR | S_IWUSR))== -1){
		perror("Failed to creat the file");
		return 1;	
	}
   bytes = copyfile(fromfd,tofd);
   return 0;
}
