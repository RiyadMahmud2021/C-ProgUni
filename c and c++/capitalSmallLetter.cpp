#include <stdio.h>
int main()
{
	char ch;
	printf("enter a charecter:");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("capital");
	}
	else if(ch>='a' && ch <='z')
	{
		printf("small");
	}
	else
	{
		printf("not a charecter");	
	}
	return 0;
}
