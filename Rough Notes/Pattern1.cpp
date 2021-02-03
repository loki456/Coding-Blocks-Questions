#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=0;

    for(int i=1; i<=n; i++)
    {   
        //spaces 
        for(int space = 0; space<n-i; space++)
        {
            cout<<" ";
        }
        //increment numbers
        for(int j=i; j<=2*i-1; j++)
        {
            cout<<j;
            flag = j;
        }
        //decrement numbers
        for(int z=flag-1; z>=i; z--)
        {
            cout<<z;
        }
        cout<<endl;
    }
    return 0;
}