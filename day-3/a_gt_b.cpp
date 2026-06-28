#include<iostream>
using namespace std;

int main(){
    cout << "Welcome to day-3" << endl;
    int a, b;
    cout << "Please enter your first number: ";
    cin >> a;
    cout << "Please enter your second number: ";
    cin >> b;
    

    if (a > b){
        cout << "A is greater" << endl;
    }
    else{
        if (b > a){
            cout << "B is greater" << endl;
        }
        else {
            cout << "they are equal" << endl;
        }
    }
    cout << endl;

}