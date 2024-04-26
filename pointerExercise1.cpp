#include <iostream>

using namespace std;

int main(){
    int* charger = new int();

    cout << "enter the value of int: " << endl;
    cin >> *charger;

    string* pointer = new string();
    cout << "Enter the string characters :" << endl;
    cin >> *pointer;

    cout << "The value of the int value is : "<< *charger <<endl;
    cout << "The value of the string value is : "<< *pointer;
    delete charger;
    delete pointer;
    
  

    return 0;
}