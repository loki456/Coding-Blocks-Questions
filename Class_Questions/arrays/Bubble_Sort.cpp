#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Bubble(int n, int a[100])
{
  for(int i=0; i<n; i++)
    for(int j=0; j<n-1; j++)
      if(a[j] > a[j+1])
	swap(a[j], a[j+1]);
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

  Bubble(n , a);
  return 0;}

