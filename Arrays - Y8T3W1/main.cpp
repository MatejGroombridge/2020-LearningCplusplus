#include <iostream>

using namespace std;

int main()
{
    int arrayNums[] = {4, 8, 15, 16, 23, 42};   //[] signifies its an array and each number is an element of the array
    cout << arrayNums[2] << endl;   //prints 15
    arrayNums[2] = 18;
    cout << arrayNums[2] << endl;   //prints the new 3rd number

    int moreNums[20];
    moreNums[9] = 27;
    cout << moreNums[9];





    return 0;
}
