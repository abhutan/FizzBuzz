#include<stdio.h>

int main()
{
	int ctr;
	for(ctr=1;ctr<=100;ctr++){
		if(ctr%15==0)
			printf("FizzBuzz\n"); //Number is divisible by both 3 and 5
		else if(ctr%3==0)
			printf("Fizz\n"); // Number is divisible by only 3
		else if(ctr%5==0)
			printf("Buzz\n"); // number is divisible by only 5
		else
			printf("%d\n",ctr);
	}
	return 0;
}

