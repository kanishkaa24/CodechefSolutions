#include <stdio.h>

int main(void) {
	// your code goes here'
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k,x,y;
	    scanf("%d %d %d %d",&n,&k,&x,&y);
	    int count = 0;
	    if(x == y)
	    {
	        count++;
	    }
	    for(int i=0;i<99999;i++)
	    {
	        x = (x + k)%n ;
	        if(x == y)
	        {
	            count++;
	            break;
	        }
	    }
	    if(count == 0)
	    {
	        printf("NO\n");
	    }
	    else printf("YES\n");
	}
	return 0;
}

