// This is an unfinished project that I didn't get working


#include <iostream>
using namespace std;


int main()
{

    string isMale;
    string isTall;

    cout << "Answer yes or no. Are you male?";
    getline(cin, isMale);
    cout << "Are you tall?";
    getline(cin, isTall);

    if (isMale = "yes"){                    // This is where I can't continue
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
