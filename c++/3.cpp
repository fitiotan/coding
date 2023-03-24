#include <iostream>
using namespace std;

int main(){
    int a,b(1);
    cout<<"enter num: ";
    cin>>a;

    for (int i=0; a>b; i+=2){
        cout<<i<<" ";
        b++;
    }

    return 0;
}