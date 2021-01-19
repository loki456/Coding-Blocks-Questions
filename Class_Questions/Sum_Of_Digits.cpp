#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n, rem=0, sum=0;
  cout<<"Enter the number:- ";
  cin>>n;
  while(n>0)
  {
    rem = n%10;
    sum+=rem;
    n/=10;
  }
  cout<<"\nSum of number is:- "<<sum;

  return 0;}

