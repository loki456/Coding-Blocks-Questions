#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
  int n, a[100];
  cout<<"Enter the size: ";
  cin>>n;
  cout<<endl<<"Enter the array: ";
  for(int i=0; i<n; i++)
    cin>>a[i];

  int lar = INT_MIN;
  int small = INT_MAX;

  for(int i=0; i<n; i++)
  {
    lar = max(lar, a[i]);
    small = min(small, a[i]);
  }
  cout<<endl<<"The largest number is: "<<lar;

  cout<<endl<<"The smallest number is: "<<small;



  return 0;}

