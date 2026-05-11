//week12-2c.cpp SOIT106 ADVANCE 001
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans = 0;
	int N2 = n;
	while(n>0){
		ans=ans*10+n%10;
		n=n/10;
	}
	printf("%d+%d=%d\n",N2,ans,N2+ans);
}
