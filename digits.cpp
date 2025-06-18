#include<iostream>
using namespace std;

int main()
{
    int n,i,a,sum=0,prod=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=n;i!=0;i=i/10)
    {
        a=i%10;
        sum=sum+a;
        prod=prod*a;
    }
    cout<<(prod-sum);
}