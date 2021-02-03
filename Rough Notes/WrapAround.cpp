#include<iostream>
#include<climits>

using namespace std;

int main()
{
    system("clear");
    cout<<INT_MAX+1<<endl;
    cout<<INT_MIN<<endl;
    return 0;
}
//Wrap Around:- If value of datatype is increased after the range its get wrap around to the lowest 
//              value possible which in this case is INT_MIN