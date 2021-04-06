#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void pattern(int n)
{
  for(int i=0; i<n; i++)
  {
    for(int j=65; j<65+n-i; j++)
    {
      cout<<char(j)<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int n, a[100];
  cout<<"Enter the size: ";
  cin>>n;
  pattern(n);

  return 0;}

