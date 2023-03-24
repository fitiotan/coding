#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout<<"Enter num1: ";
    cin>>a;
    cout<<"Enter num2: ";
    cin>>b;

    int sum=a+b;
    int diff=a-b;
    int prod=a*b;
    int quot=a/b;

    cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
    cout<<"The difference of "<<a<<" and "<<b<<" is "<<diff<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is "<<prod<<endl;
    cout<<"The quotient  of "<<a<<" and "<<b<<" is "<<quot<<endl;

    return 0;

}