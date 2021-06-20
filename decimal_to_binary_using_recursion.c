#include<stdio.h>
int dec_to_binary(int n)
{
	static k=0;
	int j=1,i;
	if(n==0)
		return 0;
	j=n%2;
	for(i=0;i<k;i++)
	{
		j=10*j;
	}
	k++;
	return (j+dec_to_binary(n/2)); 		
}
int main()
{
	int n,a;
	printf("Enter a number:");
	scanf("%d",&n);
	a=dec_to_binary(n);
	printf("binary of %d is %d",n,a);
	return 0;
}
