#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void fibo(int n)
{
  int first=0 , last=1, i=first+last;
  cout<<first+last;
  while(i<n)
  {
    i = first + last;
    first = last;
    last = i;
    cout<<" "<<i;
  }
}

int main(){
  int n;
  cout<<"Enter the fibo: ";
  cin>>n;
  fibo(n);


  return 0;}

