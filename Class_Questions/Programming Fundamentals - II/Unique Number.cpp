#include<iostream>
using namespace std;

// Bitwise operator

int main()
{
    int n, no, ans=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>no;
        ans = ans ^ no;
    }
    cout<<endl<<ans;
    return 0;
}