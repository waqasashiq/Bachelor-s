#include"myheader.h"
int pop(){
	if(header=NULL){
		printf("No data is entered stack is empty: ");
	}
	else{
		printf("The value poped is %d :",header->val);
		header=header->next;
	}
}
