#include<stdio.h>

void func(int n)
{
	for(int i=0;i<n;i++)printf("i = %d\n",i);
}
int main()
{
	printf("Hello world\n");
	func(100);
}
