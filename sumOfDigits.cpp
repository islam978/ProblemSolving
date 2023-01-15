

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



int sumOfDigits(int num){
    
    int reminder = 0;
    int sum =0;
    while(num>0){
        reminder = num % 10;
        num = num /10;
        sum = sum + reminder;
    }
    
   return sum;

   
    
}

int main()
{
    int sum = sumOfDigits(readPositiveNumber());
  cout<<"\nSum Of Digits = " <<sum<<"\n";

    return 0;
}
