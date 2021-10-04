#include<iostream>
using namespace std;
int main() {
    int n,temp=0;
    cin>>n;
    const int size=n;
    int arr[size];
    cin>>arr[0];
    int max=arr[0];
    for(int i=1;i<n;i++){
    
    cin>>arr[i];}
    for(int i=0;i<n;i++)
    {
    
         if(max<arr[i])
           {
               temp=arr[i];
               max=arr[i];
               max=temp;
           } 
        
    }
    cout<<max<<endl;    
	return 0;
}