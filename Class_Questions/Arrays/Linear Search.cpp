#include<iostream>
using namespace std;

int main()
{
    int n, a[100];
    int search, index;
    cin>>n;
    cin>>search;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i] == search)
            index = i;
    }
    cout<<endl;
    cout<<"Element found at: "<<index+1;
    return 0;
}