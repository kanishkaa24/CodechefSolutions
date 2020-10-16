#include <iostream>
using namespace std;

int main() 
{
	
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    long long int k;
	    cin >>n >> k;
	    long long int arr[n+1], brr[n+1];
	    for(int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	        brr[i] = arr[i];
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i] > k)
	        {
	            arr[i+1] += (arr[i] - k);
	        }
	    }
	    int count = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i] < k)
	        {
	            printf("%d\n",i+1);
	            count++;
	            break;
	        }
	    }
	    if(count == 0)
	    { 
	        long long int sum = 0;
    	    for(int i=0;i<n;i++)
    	    {
    	        sum += brr[i];
    	    }
    	    cout << (sum/k) + 1 << "\n";
	   }
	}
	return 0;
}
