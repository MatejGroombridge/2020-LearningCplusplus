#include <iostream>
using namespace std;

double cube(double num){
    return num * num * num;
}


int main()
{
    double num;
    cout << "Enter a number to be cubed: ";
    cin >> num;
    double answer = cube(num);
    cout << num << " cubed is " << answer << endl;

    return 0;
}
