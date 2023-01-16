

#include <iostream>
#include <string>

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
        if(reminder == digit)
          freqCount++;
        num = num /10;
    
      
    }
    
   return freqCount;

   
    
}

int main()
{
    int num = readPositiveNumber("Please Enter a Positive Number ?");
    short digit = readPositiveNumber("Please Enter one digit  to check");
    cout<<"\nDigit  " << digit  << " Frequency is "<<countDigitFrequency(num,digit)<<"  Times"<<"\n";

    return 0;
}
