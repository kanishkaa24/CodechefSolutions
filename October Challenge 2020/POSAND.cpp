#include <stdio.h>
#include <math.h>
#include <stdlib.h>

bool check(int n, int carry)
{
    if(carry != 0)
        return false;
    if(n == 1)
        return true;
    carry = n % 2;
    
    return check(n/2, carry);
    
}

int main(void) 
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d", &n);
	    int count = 0;
	    if(n == 1)
	    {
	        printf("1\n");
	    }
	    else if(check(n,0))
	    {
            printf("-1\n");
            count++;
	    }
	    else if(n == 3)
	    {
	        printf("2 3 1\n");
	    }
	    else if(n == 5)
	    {
	        printf("2 3 1 5 4\n");
	    }
	    else if( count == 0 && n > 5)
	    {
	        printf("2 3 1 5 4 ");
	        int i = 6;
	        while( i  <= n )
	        {
	            if(check(i,0))
	            {
	                printf("%d %d ",i+1,i);
                    i++;
                }
	            else 
	                printf("%d ",i);
	            i++;
	        }
	        printf("\n");
	    }
	}
	return 0;
}
