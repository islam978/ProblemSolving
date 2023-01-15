

#include <iostream>
#include <string>

using namespace std;

int readPositiveNumber(){
    int num ;
    do{
    cout<<"Please Enter a Positive Number"<<endl;
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

int main()
{
    int num = readPositiveNumber();
    cout<<"\nReverse Number is :\n " <<reverseNumber(num)<<"\n";

    return 0;
}
