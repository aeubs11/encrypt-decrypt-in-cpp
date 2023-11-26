#include <iostream>

using namespace std;

int main() {

    char textForDncryption[100], ch;
    int i;
    int key;

    cout << "Enter encrypted text to be decrypt: ";
    cin >> textForDncryption, 100;

    cout << "Enter the key: ";
    cin >> key;

    for(i = 0; textForDncryption[i] != '\0'; i++) {
        ch = textForDncryption[i];
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            
            if(ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }

            textForDncryption[i] = ch;
        } else if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 'Z' - 'A' + 1;
        }

        textForDncryption[i] = ch;
    }
    
    cout << "Decrypted message is: " << textForDncryption;

    return 0;
}