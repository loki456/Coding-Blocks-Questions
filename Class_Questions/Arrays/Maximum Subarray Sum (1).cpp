#include<iostream>
using namespace std;

int main()
{
    int n, a[100], maxsum=0;
    cin>>n;
    for(int i=0;i <n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = 0;
            for(int k=i; k<=j; k++)
                sum+=a[k];
            if (maxsum<=sum)
                maxsum = sum;
        }
    }
    cout<<maxsum;
    return 0;
}