#include <iostream>

using namespace std;

int main() {

    char textForEncryption[100], ch;
    int i;
    int key;

    cout << "Enter your text to be encrypted: ";
    cin >> textForEncryption, 100;

    cout << "Enter the key: ";
    cin >> key;

    for(i = 0; textForEncryption[i] != '\0'; i++) {
        ch = textForEncryption[i];

        if(ch >= 'a' && ch <= 'z') {
            ch = ch + key;
            if(ch > 'z') {
                ch = ch - 'z' + 'a' -1;
            }

            textForEncryption[i] = ch;
        } else if(ch >= 'A' && 'Z') {
            ch = ch + key;
            if(ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }

            textForEncryption[i] = ch;
        }
    }

    cout << "Encrypted text is: " << textForEncryption;

    return 0;
}