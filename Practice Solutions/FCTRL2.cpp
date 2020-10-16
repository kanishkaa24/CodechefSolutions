#include<iostream>
using namespace std;

//Writng multiply() to multiply a number with another number where 1st number is stroed in form of array 
void multiply(int *arr , int a, int &n)
{
    //Here arr has number in reverse digit fashion
    int carry = 0;
    int temp[200] = {0};
    int i=0;
    for(i = 0 ; i < n; i++)
    {
        int b = a*arr[i] + carry;
        int k = b%10;
        temp[i] = k;
        carry = b/10;
    }
    while(carry > 0)
    {
        temp[i] = carry%10;
        n++;
        i++;
        carry = carry/10;
    }

    //Coping temp to arr;
    for(i = 0 ; i<n ; i++) arr[i] = temp[i]; 
    
}

void printArr(int *arr , int n)
{
    for(int i = 0 ; i<n ; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;

        // Given n
        //To find n!
        // f=1 for(i-> 1 to n): f =f*i print(f)
        //f->overflow. 
        //f-> stire in Array
        //every element of f is represented by 1 digit.

        int f[200] = {1};
        int len = 1;

        for(int i = 2 ; i<=n ; i++)
        {
            multiply(f,i,len); //multiply() is a function that takes f(Array) and i. Multiply them. Make changes in f.
            //cout<<"i: "<<i<<endl;
            //printArr(f , len);
        }
        //cout<<"ANS: "<<endl;
        for(int i = len-1 ; i>=0 ; i--) cout<<f[i];
        cout<<endl;

    }
}
