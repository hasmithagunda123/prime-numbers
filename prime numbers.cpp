#include<stdio.h>
int main()
{
	int n,p;
	printf("enter any number");
	scanf("%d",&n);
	p=prime(n,n/2);
	if(p==1)
	printf("%d is prime number");
	else
	printf("%d is a composite number");
	
}
int prime(int n,int i)
{
	if(i==1)
	return 1;
	if(n%i==0)
	return 0;
	return prime(n,i-1);
}
