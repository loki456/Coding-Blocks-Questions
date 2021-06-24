#include<iostream>

using namespace std;

int binary(int start, int end, int n, int a[]){
 
  if (start <= end){
  int mid = (start + end) /2;
  // base case
  
  if (a[mid] == 4)
    return 1;

  // recur case
  if (4 < a[mid])
    return binary(start, mid -1, n, a);
  if (4 > a[mid]) 
    return binary(mid +1, end, n, a);
  }
  return -1;
}
int main(){

  int n=10, a[10] = {1, 2, 3, 14, 5 ,6, 7 ,8 ,9 ,10};
  int start = 0, end = n-1;
  cout << binary(start, end, n, a);
  return 0;}
