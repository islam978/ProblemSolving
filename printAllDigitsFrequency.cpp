

#include <iostream>
#include <string>
#include <array> 
#include <algorithm>

using namespace std;

int readPositiveNumber(string message){
    int num ;
    do{
    cout<<message<<endl;
    cin>>num;
    }while(num<0);
    
    return num;
}

int countDigitFrequency(int num,short digit){
    
    int reminder = 0;
    int freqCount  =0;
   
    
    while(num>0){
        
        reminder = num % 10;
        num = num /10;
        if(reminder == digit)
          freqCount++;
      
    }
    
   return freqCount;

   
    
}
void prinAllDigitsFrequency(int num){
    short digitFrequency = 0;
    for(int i=0;i<10;i++){
        digitFrequency = countDigitFrequency(num,i);
        
        if(digitFrequency>0){
           cout<<"\nDigit  " << i << " Frequency is "<< digitFrequency<<"  Times"<<"\n";
  
        }
    }
}

int main()
{
    int num = readPositiveNumber("Please Enter a Positive Number ?");
    prinAllDigitsFrequency(num);
    return 0;
}
