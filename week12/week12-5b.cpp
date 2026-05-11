//week12-5b.cpp SOIT106 ADVANCE 006
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=1;i<n;i++){
	a+=i*(i+1);
	}
	printf("%d\n",a);

}
