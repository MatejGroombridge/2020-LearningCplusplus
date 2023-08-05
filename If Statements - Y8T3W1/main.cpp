#include <iostream>
using namespace std;


int main()
{
    bool isMale = false;
    bool isTall = true;

    if (isMale && isTall){
        cout << "You are a tall male";
    }
    else if (isMale && !isTall){
        cout << "You are a male but not tall";
    }
    else if (!isMale && isTall){
        cout << "You are tall but not male";
    }
    else {
        cout << "You are a short female";
    }


    return 0;
}
