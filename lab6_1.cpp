#include<iostream>
using namespace std;

int main(){

    int i;
    int a=0;
    int b=0;
    i = 1;
    while(i != 0){
        cout << "Enter an integer: ";
        cin >> i;
        if(i%2 == 0 && i != 0){
            a = a+1;
        }else if(i%2 == 1){
            b = b+1;
        }
    }    
    cout << "#Even numbers = "<<a<<endl;
    cout << "#Odd numbers = "<<b;
    
    return 0;
}
