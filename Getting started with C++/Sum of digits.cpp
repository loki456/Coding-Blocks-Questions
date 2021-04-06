#include<iostream>

using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter the number: ";cin>>n;

    while(n)
    {
        sum += n%10;
        n/=10;
    }
    cout<<"\nSum of digits are: "<<sum;
    return 0;
}