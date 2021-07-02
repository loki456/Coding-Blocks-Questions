#include<iostream>
using namespace std;

int linear_(int n, int a[], int key, int i, int find){

  if (i == n)
    return find;
  
  if (a[0] == key)
    find = i;

  return linear_(n, a+1, key, i+1, find);

}

int main(){

  int n=10, a[10] = {1, 7, 3, 4, 5, 6, 4, 8 ,7, 10};

  int key=7, i=0, find;

  cout << linear_(n, a, key, i, find);
  return 0;
}
