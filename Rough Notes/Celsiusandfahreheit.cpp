#include<iostream>

using namespace std;

int main()
{
    int c;
    int f=0;
    while(f<300)
    {   
        cin>>f;
        c = (5*(f-32)/9);
        cout<<f<<" "<<c<<endl;

    }
    return 0;
}