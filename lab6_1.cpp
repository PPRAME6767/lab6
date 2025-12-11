#include<iostream>
using namespace std;

int main(){
    int i;
    int x = 0 ;
    int y = 0 ;
    cout << "Enter an integer: ";
    cin >> i;
    while (i != 0){
        if(i%2 == 0){
        x = x+1;
        }
        else{
            y = y+1;
        }
       cout << "Enter an integer: ";
    cin >> i;
    }
    
    cout << "#Even numbers = " << x <<endl;
    
    cout << "#Odd numbers = " << y << endl;
    return 0;
}