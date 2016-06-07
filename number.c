#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n>0){
	long long int t;
	scanf("%lld",&t);
	if(t>0)
	{
		printf("Positive\n");
	}
	else if(t<0)
	{
		printf("Negative\n");
	}
	else
	{
		printf("Zero\n");
	}
	n--;
	}
	return 0;
}
