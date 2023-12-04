#include<stdio.h>
#include<pthread.h>

int fun1(void)
{
	
//	printf("From t1\n");
	for(int i=1;i<=5;i++)
	{
		printf("%d\n",i);
		sleep(2);
	}
}

int fun2(void)
{
//	printf("from t2\n");
	for(int i=6;i<=10;i++) {
		printf("%d\n",i);
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
