#include <iostream>
#include <string>

using namespace std;

int main() {
// values to encrypt and decrypt message
 string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};


// variable to store secret message
  string secret_message {};
    cout << "Enter your secret message : ";
    getline(cin, secret_message); // getline= more then one word method


    string encrypted_message {}; // holds the encrypted message

    cout << "\nEncrypting message..." << endl;

    for (char c: secret message){
      size_t position = alphabet.find(c); // unsigned integer position which will find the position of the character
 if(position != string:npos) { // if string position is != no position, sucess
char new_char { key.at(position)}; // find new charatcer key at new position
encrypted_message += new_char; // add new charatcer to the encrypted message
    } else{ // doesnt find position, add character as is
 encrypted_message += c;


    }

    cout << "\nEncrypted message " << encrypted_message << endl;


return 0;

}