#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    char sign;
    cout << "Simple Calculator" << endl;

 
    cout << "Enter first Number: ";
     cin >> num1;
    cout << "Enter second number: ";
     cin >> num2;
    cout << "Enter operational sign(+,-,*,/): ";
     cin >> sign;

    switch(sign){
        case +:
            cout << num1 << " + "<< num2 <<" = "<< num1 + num2 <<endl;
            break;
        case -:
            cout << num1 <<" - "<< num2 <<" = "<< num1 - num2 <<endl;
            break;
        case *:
            cout << num1 <<" x "<< num2 <<" = "<< num1 * num2 <<endl;
            break;
        case /:
            if (num2 != 0){
            cout << num1 <<" / "<< num2 <<" = "<< num1 / num2 <<endl;
            }else{
            cout << "Math Error!" <<endl;
            }
            break;
        default:
            cout << "invalid operational sign!";
    }
    return 0;
}
