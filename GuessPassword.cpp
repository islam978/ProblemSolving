
#include <iostream>
using namespace std;

string readPassword() { 
    string Password;   
    cout << "Please enter a 3-Letter Password (all capital)?\n";  
    cin >> Password;
    return Password;
    } 

bool GuessPassword(string password){
    int counter =0;
    string word ="";
   for(int i =65;i<=90;i++){
       for(int j =65;j<=90;j++ ){
           for(int k =65;k<=90;k++)
           {
               word = word + char(i);
               word = word + char(j);
               word = word + char(k);
               //cout<<word<<endl;
               counter++;
               cout << "Trial [" << counter << "] : ";      
               cout << word << endl;
               if(word == password)
               {
                   cout <<"Password is "<<word<<endl;
                   cout<<"Found after " << counter  <<" Trails";
                   return true;
               }
           //   cout<<word<<endl;
              word = "";
          
           }
           
         
       }
      
   }
   return false;
     
 }

int main()
{
   string password = readPassword();
    GuessPassword(password);
    return 0;
}
