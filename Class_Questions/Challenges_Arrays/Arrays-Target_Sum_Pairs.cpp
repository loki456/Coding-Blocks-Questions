#include<iostream>
using namespace std;
int main(){
	int n,m,a[1000],l,r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<n;i++){
		l=i;
		r=n-1;
		while(l<r){
			if(a[l]+a[r]==m){
				if(a[l]>a[r]){
				cout<<a[r]<<" and "<<a[l]<<endl;
				}
				else if(a[l]<a[r]){
				cout<<a[l]<<" and "<<a[r]<<endl;
				}
			}	
			r--;
		}
		
	}
	return 0;
}
