#include <iostream>

using namespace std;

int main()
{
    int num1, result, num2;
    char op;

    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter Second Number: ";
    cin >> num2;

    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;
    } else if(op == '/'){
        result = num1 / num2;
    } else if(op == '*'){
        result = num1 * num2;
    } else {
        cout << "Invalid Operator";
    }

    cout << "Answer: " << result << endl;

    return 0;
}
