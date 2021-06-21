#include"myheader.h"
int main(){
	int ter;
	int ch;
	printf("To continue operations press1 to terminate -1: ");
	scanf("%d",&ter);
	struct stack *header=NULL;
	while(ter!=-1){
		printf("\nTo pust values in the stack press 1 to pop press 2 to view stack press 3: ");
		scanf("%d",&ch);
		switch (ch)
		{
		case 1:
			push();
			printf("\nTo continue operations press1 to terminate -1: ");
			scanf("%d",&ter);
			break;
		case 2:
			pop();
			printf("\nTo continue operations press1 to terminate -1: ");
			scanf("%d",&ter);
			break;
		case 3:
			view();
			printf("\nTo continue operations press1 to terminate -1: ");
			scanf("%d",&ter);
			break;
		default:
			break;
		}
	}
}
