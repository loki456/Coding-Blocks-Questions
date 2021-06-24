#include<iostream>
using namespace std;

int linear(int n, int a[], int i, int k){

  // base case
  if (i == n)
    return -1;
  
  // recur case
  if (a[i] == k)
    return i;
  
  return linear (n, a, i+1, k);
}


int main(){

  int n=10, a[10] = {1, 2, 3, 5, 4, 6, 7, 8, 9, 0};
  int k = 4, i=0;
  cout << linear(n, a, i, k);
  return 0;
}
