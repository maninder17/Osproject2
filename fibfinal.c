#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

void *fib(void *len);
int main()
{
	pthread_t t;
	printf("\nEnter a no: ");
	int n;
	scanf("%d",&n);
	pthread_create(&t,NULL,fib,(void*)(intptr_t)n);
	pthread_join(t,NULL);
	
}

void *fib(void *len)
{	
	int n=(intptr_t)len;
	int i=0;
	int j=1;
	int temp;
	printf("\nFibbonacci Series:\n ");
	printf("%d	",i);
	printf("%d	",j);
	for(int k=2;k<n;k++)
	{
		temp=j+i;
		i=j;
		j=temp;
		printf("%d	",temp);
	}
}
