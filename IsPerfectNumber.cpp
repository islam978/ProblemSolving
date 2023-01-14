

#include <iostream>

using namespace std;

int readPositiveNumber(){
    int num ;
    cout<<"Please Enter a Positive Number"<<endl;
    cin>>num;
    return num;
}


bool isPerfectNumber(int num ){
    int sum =0;;
    for(int i =1;i<=num/2;i++){
        if(num % i == 0 )
        sum+=i;
    }
    return num == sum;
}
void printResults(int num){
    if(isPerfectNumber(num))
    cout<< "The Number " << num <<" Is Perfect";
    else
    cout<< "The Number " << num <<" Is  Not Perfect";
    
}

int main()
{
   printResults(readPositiveNumber());

    return 0;
}
