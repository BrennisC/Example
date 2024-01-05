#include <iostream>
#include <string>
#include <map>

using namespace std;
void codigoMorse()
{
    map<char, string> morse_code = {
        {'A', ".-"},
        {'B', "-..."},
        {'C', "-.-."},
        {'D', "-.."},
        {'E', "."},
        {'F', "..-."},
        {'G', "--."},
        {'H', "...."},
        {'I', ".."},
        {'J', ".---"},
        {'K', "-.-"},
        {'L', ".-.."},
        {'M', "--"},
        {'N', "-."},
        {'O', "---"},
        {'P', ".--."},
        {'Q', "--.-"},
        {'R', ".-."},
        {'S', "..."},
        {'T', "-"},
        {'U', "..-"},
        {'V', "...-"},
        {'W', ".--"},
        {'X', "-..-"},
        {'Y', "-.--"},
        {'Z', "--.."},
        {'1', ".----"},
        {'2', "..---"},
        {'3', "...--"},
        {'4', "....-"},
        {'5', "....."},
        {'6', "-...."},
        {'7', "--..."},
        {'8', "---.."},
        {'9', "----."},
        {'0', "-----"},
        {'.', ".-.-.-"},
        {',', "--..--"},
        {'?', "..--.."},
        {'!', "-.-.--"},
        {'-', "-....-"},
        {'/', "-..-."},
        {'(', "-.--."},
        {')', "-.--.-"},
        {'"', ".-..-."},
        {'$', "..."},
        {'@', ".--.-."},
    };
    string txt;
    cout << "Ingrese el texto: ";
    getline(cin, txt);
    string morse_text;
    for (char c : txt)
    {
        if (morse_code.find(toupper(c)) != morse_code.end())
        {
            morse_text += morse_code[toupper(c)] + " ";
        }
        else if (c == ' ')
        {
            morse_text += " / ";
        }
    }
    cout << "Texto en Morse: " << morse_text << endl;
}
int main()
{
    codigoMorse();

    return 0;
}