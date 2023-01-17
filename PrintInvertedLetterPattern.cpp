//Exemple for problem
// input:5
// outPut: EEEEE
// DDDD
// CCC
// BB
// A


#include <iostream>
#include<string>
using namespace std;

int readPositiveNumber(string message){
    int num ;
    do{
    cout<<message<<endl;
    cin>>num;
    }while(num<0);
    
    return num;
}

void PrintInvertedLetterPattern(int num){
   for(int i =num;i>=1;i--){
       for(int j =1;j<=i;j++ ){
           cout<<char(i+64);
         
       }
       cout<<"\n";
   }
     
 }

int main()
{
    int num = readPositiveNumber("Please Enter a Positive Number ?");
    PrintInvertedLetterPattern(num);
    return 0;
}
