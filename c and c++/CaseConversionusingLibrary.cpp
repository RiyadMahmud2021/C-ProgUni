#include <stdio.h>
#include <ctype.h>

int main()
{
	char lw,upp;
	printf("enter lw=");
	scanf("%c",&lw);
	
	upp = toupper(lw);
	printf("upperCase is : %c",upp);
	return 0;
}
