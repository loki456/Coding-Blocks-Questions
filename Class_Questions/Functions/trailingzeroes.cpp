#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int zeroes(int n)
{
  int ans=0, i=5;
  while(n/i>=1)
  {
    ans = n/i +ans;
    i *=i;
  }
  return ans;
}

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  cout<<endl<<"No of zeroes are: "<<zeroes(n);


  return 0;}

