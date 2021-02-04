#include<iostream>
using namespace std;

int main()
{
    int n, flag = 0;
    cout<<"Enter number you want to check prime:- ";
    cin>>n;

    for(int i=2; i<=n-1; i++)
    {
        if(n%i == 0)
        {
            flag=0;
            break;
        }
        flag++;
    }
    if(flag == 0)
        cout<<endl<<"Number is not prime.";
    else
        cout<<endl<<"Number is prime";

    return 0;
}