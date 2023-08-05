#include <iostream>

using namespace std;

int main()
{
    string phrase = "Matej Is Cool!";
    cout << phrase << endl; //Print "phrase"
    cout << phrase.length() << endl;    //Print the number of characters
    cout << phrase[9] << endl;  //Print 10th Character
    phrase[9] = 'P';
    cout << phrase << endl;  //Print the new phrase
    cout << phrase.find("ate") << endl;  //What character "ate" starts at
    cout << phrase.find("Pool", 3) << endl;  //What character "Pool" starts at, looking after the 3rd character
    cout << phrase.substr(9, 3) << endl;  //Print the first 3 characters after the 10th character
    string phrasesub;
    phrasesub = phrase.substr(1, 3);
    cout << phrasesub;  //Print the first 3 characters after the 2nd character (phrasesub)

    return 0;
}
