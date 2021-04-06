#include<iostream>

using namespace std;

int main()
{
    int n, max=0, min;
    cin>>n;
    min = n;
    while(n--){
        int a;
        cin>>a;
        if (a>max){
            max = a;
        }
        if (a<min){
            min = a;
        }

    }
     cout<<"\nMax No: "<<max<<"\nMin No: "<<min;
    return 0;
}