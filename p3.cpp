#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Please enter first number: ";
    cin >> a;
    cout << "Please enter second number: ";
    cin >> b;
    cout << "Please enter third number: ";
    cin >> c;

    if (a>=b && a>=c){
        cout << a << " is the maximum";
    }else if (b>=a && b>=c) {
        cout << b << " is the maximum" << endl;
    }else {
        cout << c << " is the maximum" << endl;
    }
}