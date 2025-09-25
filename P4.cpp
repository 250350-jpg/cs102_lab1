#include <iostream>
using namespace std;
int main() {
int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    if (a%b==0) {
        cout<<a<<" is divisable to "<< b <<endl;
    }else {
        cout<<a<<" is not divisable to "<< b <<endl;
    }
}