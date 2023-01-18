///Ex:
// //input : Mohammed
//  output :
// Encryption  : Oqjcoogf
//  Decryption:Mohammed

#include <iostream>
using namespace std;

string readText() { 
    string text;   
    cout << "Please Enter Text \n";  
    getline(cin,text);
    return text;
    } 


 string EncryptText(string text,short encryptionKey){
     string encrypt_text = "";
     for(int i=0;i<text.length();i++)
     {
        encrypt_text = encrypt_text + char(text[i]+2);
     }
     return encrypt_text;
 }
  string DecryptText(string text,short encryptionKey){
     string decrypt_text = "";
     for(int i=0;i<text.length();i++)
     {
        decrypt_text = decrypt_text + char(text[i]-2);
     }
     return decrypt_text;
 }

int main() {
    const short EncryptionKey = 2;
    //this is the key.
    string  TextAfterEncryption, TextAfterDecryption; 
    string Text = readText();   
    TextAfterEncryption = EncryptText(Text, EncryptionKey);    
    TextAfterDecryption = DecryptText(TextAfterEncryption,EncryptionKey);  
    cout << "\nText Before Encryption : ";   
    cout << Text << endl;   
    cout << "Text After Encryption  : ";   
    cout << TextAfterEncryption << endl;   
    cout << "Text After Decryption  : ";   
    cout << TextAfterDecryption << endl; 
    return 0; } 