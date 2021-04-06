#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Selection(int n, int a[100])
{
  for(int i=0; i<n-1; i++)
    for(int j=i; j<n; j++)
      if(a[i] > a[j])
	swap(a[i], a[j]);
cout<<endl<<"Sorted array is: ";
for(int i=0; i<n; i++)
  cout<<a[i]<<" ";
}


int main(){
  int n, a[100];
  cout<<endl<<"Enter the size: ";
  cin>>n;
  cout<<endl<<"Enter the array: ";
  for(int i=0; i<n; i++)
    cin>>a[i];

  Selection(n, a);
  return 0;}

