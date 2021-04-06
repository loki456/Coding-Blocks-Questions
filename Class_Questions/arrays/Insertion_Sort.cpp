#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Insertion(int n, int a[100])
{
  for(int i=0; i<n; i++)
  {
    int current = a[i];
    while(j>=0 and a[j]>current)
    {
    }
    a[j] = current;
  }
}

int main(){
  int n, a[100];
  cout<<endl<<"Enter the size: ";
  cin>>n;
  cout<<endl<<"Enter the array: ";
  for(int i=0; i<n; i++)
    cin>>a[i];
  Insertion(n, a);
  return 0;}

