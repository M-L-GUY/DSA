/* 
the time complexity of finding power of element is T(N)=T(N/2)+O(1)---O(logN)
*/
#include<iostream>
using namespace std;
int DAC_power(int a,int n)
{
    if(n==1)
    {
        return a;
    }
    int b=DAC_power(a,n/2);
    b*=b;
    if(n&1)
    {
        return a*b;

    }
    return b;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<DAC_power(a,n);
}
