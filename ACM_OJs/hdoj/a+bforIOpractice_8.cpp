//a+b problem
#include <cstdio>

using namespace std;

int main()
{
	int a,sum,n,m;
	scanf("%d", &m);
	for(int i=0; i<m; i++)
	{
		sum=0;
		scanf("%d", &n);
		for(int i=0; i<n; i++)
		{
			scanf("%d", &a);
			sum+=a;
		}
		printf("%d\n\n", sum);
	}
	return 0;
}
