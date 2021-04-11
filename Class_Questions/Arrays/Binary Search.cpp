#include<iostream>
using namespace std;

int main()
{
    int n, a[10],search;
    cin>>n;
    cin>>search;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int first=0, last=n-1 ,mid;
    while(first<=last){
        mid=(first + last)/2;
        if (a[mid] == search)
            break;
        else if (a[mid] <= search)
            first = mid + 1;
        else if (a[mid] >= search)
            last = mid - 1;
    }
    cout<<endl<<"Index is "<<mid;
    return 0;
}