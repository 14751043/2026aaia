// week08-3b.cpp SOIT107_Base_012
#include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if (c>='A' && c<='X') printf("U");
	else if(c>='a' && c<='z') printf("L");
	else if(c>='0' && c<='9') printf("D");
	else printf("O");
	}
