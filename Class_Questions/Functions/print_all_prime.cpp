#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void prime(int n)
{
  for(int i=2; i<n-1; i++)
  {
    if(n%i == 0)
    {}
    else
    {
      cout<<i<<" ";
    }
  }
}

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  prime(n);
  return 0;}

