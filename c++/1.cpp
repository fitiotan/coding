#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter num: ";
    cin >> a;
    cout << "Enter num: ";
    cin >> b;

    int sum=a+b;
    int multi=a*b;

    cout << a << "+" << b << " is " << sum << endl;
    cout << a << "x" << b << " is " << multi << endl;
    return 0;
}