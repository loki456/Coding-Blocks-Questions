#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n>1)
    {
        int flag=0;
        for(int i=2; i<=n-1; i++)
        {
            if(n%i == 0)
            {
                flag++;
                break;
            }

        }
        if(flag==0)
            cout<<n<<" is prime."<<endl;
        n--;
    }


    return 0;
}