#include"myheader.h"
void push(){
	struct stack *nptr;
	if(header=NULL){		
		header=(struct stack*)malloc(sizeof(struct stack));
		printf("Enter the data values: ");
		scanf("%d",&header->val);
		header->next=NULL;
	}
	else{
		nptr=(struct stack*)malloc(sizeof(struct stack));
		printf("Enter the data values: ");
		scanf("%d",&nptr->val);
		nptr->next=header;
		header=nptr;
	}

}
