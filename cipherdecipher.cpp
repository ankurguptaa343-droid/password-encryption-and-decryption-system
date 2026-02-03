#include <iostream>
using namespace std;
// password encryption function 
string encrypt(string text, int shift) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = char(text[i] + shift);
    }
    return text;
}
// password decryption function
string decrypt(string text, int shift) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = char(text[i] - shift);
    }
    return text;
}

int main() {
    string password;
    int shift = 3;
// user input password here
    cout << "Enter password: ";
    cin >> password;
// calling password encryption function
    string encrypted = encrypt(password, shift);
    cout << "Encrypted Password: " << encrypted << endl;
// calling password decryption function
    string decrypted = decrypt(encrypted, shift);
    cout << "Decrypted Password: " << decrypted << endl;

    return 0;
}