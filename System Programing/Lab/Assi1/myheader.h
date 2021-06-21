#include<stdio.h>
#include<stdlib.h>
struct stack{
	int val;
	struct stack *next;
};
struct stack *header;
