#include <stdio.h>
#include <ctype.h>

int main()
{
	char lw,upp;
	printf("enter upp=");
	scanf("%c",&upp);

	lw = tolower(upp);
	printf("lowerCase is : %c",lw);
	return 0;
}
