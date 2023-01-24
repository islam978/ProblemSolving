
#include<iostream>
#include<cstdlib>
using namespace std;

 
int ReadNumber(string message){
    int num;
    cout<<message<<endl;
    cin>>num;
    return num;
}


void printArray(int element[],int length){
    
       for(int i=0;i<length;i++){
        cout<<element[i]<<"  ";
    }
    cout<<endl;
    
}
int RandomNumber(int From, int To) { 
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From; 
    return randNum; 
    
} 
void fillArrayWithRandomNumbers(int arr[],int lengthArray){
       for(int i=0;i<lengthArray;i++){
          arr[i] = RandomNumber(1,100);
          
       
    }
}
int minNumberInArray(int arr[], int arreyLength){
    int min ;
    for(int i=0;i<arreyLength;i++){
        if(arr[i]<min){
          min= arr[i];
        }
    }
    return min;
}


    int main() { 
        //Seeds the random number generator in C++, called only once   
        srand((unsigned)time(NULL)); 
     int arr[100];
     int lengthArray= ReadNumber("please Enter length array");
     fillArrayWithRandomNumbers(arr,lengthArray);
     cout<<"Array Elements :";
     printArray(arr,lengthArray);
     cout<<"Min Number Is :";
     cout<<minNumberInArray(arr,lengthArray);
  
        return 0;
    }
