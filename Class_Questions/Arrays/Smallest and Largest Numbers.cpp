#include<iostream>
using namespace std;

int main()
{
    int n, a[100], max, min;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    max = a[0];
    min = a[0];
    for(int i=0; i<n; i++)
    {
        if (max<a[i])
            max = a[i];
        if (min>a[i])
            min = a[i];
    }
    cout<<endl;
    cout<<"Min and Max are: "<<min<<" and "<<max;
    return 0;
}