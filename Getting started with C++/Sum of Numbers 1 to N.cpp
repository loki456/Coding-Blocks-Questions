#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(n)
    {
        sum+=n;
        n--;
    }
    cout<<"\n The sum is: "<<sum;
    return 0;
}