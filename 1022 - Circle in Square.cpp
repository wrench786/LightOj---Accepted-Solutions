#include <stdio.h>
#include<math.h>

int main()
{
	int n,i;
	double r,rec,cir;;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&r);
		rec = (r+r)*(r+r);
		cir = 2*acos(0.0)*r*r;
		printf("Case %d: %.2lf\n",i+1,rec-cir);
	}
}
