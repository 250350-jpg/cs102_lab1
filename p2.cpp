#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Please enter a number: ";
    cin >> x;
    if (x>0 && x%2==0){
        cout << "Positive and even";
    }else if (x<0 && x%2!=0) {
        cout << x << " Negative and odd" << endl;
    }else if (x>0 && x%2!=0) {
        cout << x << " Positive and odd" << endl;
    }else {
        cout << x << " Negative and even" << endl;
    }
}




