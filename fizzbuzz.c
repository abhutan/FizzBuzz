#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ctr;
	for(ctr=1;ctr<=100;ctr++){
		if(ctr%15==0)
			printf("FizzBuzz\n");
		else if(ctr%3==0)
			printf("Fizz\n");
		else if(ctr%5==0)
			printf("Buzz\n");
		else
			printf("%d\n",ctr);
	}
	return 0;
}

