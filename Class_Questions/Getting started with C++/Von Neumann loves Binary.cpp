#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--)
    {
        int a, sum=0, i=0;
        cin>>a;
        while(a){
            int rem = a%10;
            if (rem == 1)
            {
                sum += pow(2, i);
            }
            a/=10;
            i++;
        }
    cout<<sum<<"\n";
    }

    return 0;
}