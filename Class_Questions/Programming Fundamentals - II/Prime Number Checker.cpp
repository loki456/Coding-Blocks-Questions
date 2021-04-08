#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENter the number to check: ";
    cin>>n;
    bool check = true;
    for(int i=2; i<n; i++){
        if (n%i == 0)
            check = false;
    }
    if (check == false){
        cout<<endl<<"It is not prime";
    }
    else{
        cout<<endl<<"It is prime";
    }
    return 0;
}