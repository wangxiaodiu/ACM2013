//A. Dragon
#include <cstdio>
#include <algorithm>
using namespace std;
class xxyy
{
	public:
		int x,y;
};
bool cmp(xxyy n1, xxyy n2)
{
	return n1.x<n2.x;
}
int main()
{
	int s,n,i;
	scanf("%d%d", &s, &n);
	xxyy xy[1100];
	for(i=0; i<n; i++)
	  scanf("%d%d", &xy[i].x, &xy[i].y);
	sort(xy, xy+n-1, cmp);
	for(i=0; i<n; i++)
	  if(s>xy[i].x) s+=xy[i].y;
	  else break;
	if(i==n) printf("YES\n");
	else printf("NO\n");
	return 0;
}
