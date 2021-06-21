#include"myheader.h"
void view(){
	while (header->next!=NULL)
	{
		printf("%d-\t",header->val);
		header=header->next;
	}
	printf("%d->",header->val);
}
