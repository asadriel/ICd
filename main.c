#include <stdio.h>
 
int main()
{
    int N,i,j, ndiv,ndiv2, nhiper;
    while(scanf("%  d", &N)!=EOF)
    {
    	nhiper=0;
    	for(i=2; i<=N; i++)
    	{
    		ndiv=1;
    		ndiv2=1;
    		for(j=1; j<=i/2; j++)
    		{
    			if(i%j==0) ndiv++;
    		}
    		for(j=1; j<=ndiv/2; j++)
    		{
    			if(ndiv%j==0) ndiv2++;
    			//if(ndiv2>2) break;
    		}
    		if(ndiv2==2) nhiper++;
    	}
    	printf("%d\n", nhiper);
    }
}
