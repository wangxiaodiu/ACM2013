
//a+b problem
#include <cstdio>

using namespace std;

int main()
{
	int a,b;
	while(scanf("%d %d", &a, &b)!=EOF && (a!=0 || b!=0))
	{
		printf("%d\n", a+b);
	}
	return 0;
}
