//Exemple for problem
// input: 5
// output: 55555
// 4444
// 333
// 22
// 11

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

 void PrintInvertedNumberPattern(int num){
     do{
     int count = num;
     while(count !=0){
         cout<<num;
         count--;
     }
     cout<<endl;
     num--;
     }while(num !=0);
     
 }

int main()
{
    int num = readPositiveNumber("Please Enter a Positive Number ?");
    PrintInvertedNumberPattern(num);
    return 0;
}
