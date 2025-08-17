#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int sign;
    cout << "Simple Calculator" << endl;

    cout << "\n----Ooperational Sign----\n";
        cout << "1. +"<<endl;
        cout << "2. -"<<endl;
        cout << "3. *"<<endl;
        cout << "4. /"<<endl;
    cout << "Enter first Number: ";
     cin >> num1;
    cout << "Enter second number: ";
     cin >> num2;
    cout << "Enter operational number: ";
     cin >> sign;

    switch(sign){
        case 1:
            cout << num1 << " + "<< num2 <<" = "<< num1 + num2 <<endl;
            break;
        case 2:
            cout << num1 <<" - "<< num2 <<" = "<< num1 - num2 <<endl;
            break;
        case 3:
            cout << num1 <<" x "<< num2 <<" = "<< num1 * num2 <<endl;
            break;
        case 4:
            if (num2 != 0){
            cout << num1 <<" / "<< num2 <<" = "<< num1 / num2 <<endl;
            }else{
            cout << "Math Error!" <<endl;
            }
            break;
        default:
            cout << "invalid operational number!";
    }
    return 0;
}
