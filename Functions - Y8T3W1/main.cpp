#include <iostream>

using namespace std;


void sayHi(string name, int age);

int main()
{
    sayHi("Matej", 14);    //calls the sayHi function
    sayHi("Mark", 48);
    sayHi("Rochelle", 45);
    return 0;
}


void sayHi(string name, int age){    //a function that says hi to 'name'
    cout << "Hello " << name << ". You are " << age << " years old." << endl;
}
