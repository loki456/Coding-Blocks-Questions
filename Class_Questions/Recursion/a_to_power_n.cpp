#include <iostream>
using namespace std;

int power(int a, int n){

  // base case
  if (n == 0)
    return 1;

  // recur case

  return a * power(a, n-1);
}

int fast_power(int a, int n){
  
  if (n == 0)
    return 1;

  if ((n/2)%2 == 0)
    return fast_power(a, n/2) * fast_power(a, n/2);
  
  return a*(fast_power(a, n/2) * fast_power(a, n/2));

}
int main(){

  int a=2, n=5;
  cout << power(a, n) << endl;
  cout << fast_power(a, n);
  return 0;
}
