#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int P, T, R;
  cout<<"Enter the value of Principle, Rate and Time:- ";
  cin>>P>>R>>T;
  float si =(float) (P*R*T)/100;
  cout<<"\nSimple rate calculated is:- ";
  cout<<si;


  return 0;}

