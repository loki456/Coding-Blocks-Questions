#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int i=1, N, sum=0;
  cout<<"Enter the number:- ";
  cin>>N;
  while(i<=N)
  {
    sum+=i;
    i=i+1;
  }
  cout<<"\nThe sum is :- "<<sum;


  return 0;}

