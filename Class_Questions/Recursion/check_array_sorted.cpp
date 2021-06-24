#include<iostream>

using namespace std;

bool sorted_(int n, int *a){
  //base case
  if (n == 0 or n == 1){
    return true;
  }
  //recur case
  if (a[0]<a[1] and sorted_(n-1, a+1))
    return true;
  return false;
}

int main()
{
  int n=5, a[10] = {1, 2, 3 ,4 ,5};
  cout <<  sorted_(n, a);
  return 0;
}
