#include<iostream>
using namespace std;

int main()
{
    int n, a[100];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int cs = 0, ms = 0;
    for(int i=0; i<n; i++)
    {
        cs += a[i];
        if (cs<0)
            cs = 0;
        ms = max(cs, ms);
    }
    cout<<"Max is :"<<ms;
    return 0;
}