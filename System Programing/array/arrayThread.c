#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>

#define ROW 3
#define COL 3

pthread_mutex_t lock=PTHREAD_MUTEX_INITIALIZER;

int array[ROW][COL]={1,1,1,1,1,1,1,1,1};
int mult[ROW][COL]={0};

void *multiplyarray(void *number)
{

 pthread_mutex_lock(&lock);
 
 int i,j;
 int *row=(int *)number;

 for(i=0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   mult[*row][i] += array[*row][j]*array[j][i];
  }
 }

 pthread_mutex_unlock(&lock);

}

int main(void)
{
 pthread_mutex_init(&lock,NULL);

 int row;
 int i,j,k;
 pthread_t tid;

 printf("Enter numbers in array:\n");
 for(i=0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   printf("%d",array[i][j]);
  }
  printf("\n");
 }

 printf("\n");

 for(row=0;row<ROW;row++)
 {
 pthread_create( &tid , NULL , multiplyarray , (void*) &row );
 pthread_join(tid,NULL);
 }

 printf("After multiplication array is:\n");
 for(i-0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   printf("%d",mult[i][j]);
  }
 printf("\n");
 }
 printf("\n");
 
 pthread_mutex_destroy(&lock);

 return 0;
 
}
