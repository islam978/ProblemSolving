

#include <iostream>
using namespace std;

int readPositiveNumber(string message){
    int num ;
    do{
    cout<<message<<endl;
    cin>>num;
    }while(num<0);
    
    return num;
}


int reverseNumber(int num){
    
    int reminder = 0;
    int sum =0;
    int revNumber=0;
    while(num>0){
        reminder = num % 10;
        num = num /10;
        revNumber = revNumber*10+reminder;
      
    }
    
   return revNumber;

   
    
}


bool isPalindromeNumber(int num ){
    return num == reverseNumber(num);
    
}

int main()
{
    int num = readPositiveNumber("Please Enter a Positive Number ?");
    
    if(isPalindromeNumber(num))
    cout << "\nYes , it is a Palindrome number.\n";
    else    
    cout << "\nNo , it is NOT a Palindrome number.\n"; 
    return 0;
}
