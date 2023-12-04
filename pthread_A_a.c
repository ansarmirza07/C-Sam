#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int fun1(void)
{
	for(int i=65;i<70;i++)
	{
		printf("%c\n",i);
		sleep(2);
	}
}

int fun2(void)
{
	for(int i=97;i<102;i++)
	{
		printf("%c\n",i);
		sleep(2);
	}
}

int main()
	{
		pthread_t t1,t2;
		pthread_create(&t1,NULL,&fun1,NULL);
		pthread_create(&t2,NULL,&fun2,NULL);

		pthread_join(t1,NULL);
		pthread_join(t2,NULL);

	}
