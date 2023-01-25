
#include<iostream>
#include<cstdlib>
using namespace std;



 
int ReadNumber(string message){
    int num;
    cout<<message<<endl;
    cin>>num;
    return num;
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


void sum2RandomArrays(int arr1[],int arr2[],int arrSum[],int arrLength){
    for(int i=0;i<arrLength;i++){
        arrSum[i]=arr1[i]+arr2[i];
    }
}
void printArray(int element[],int length){
    
       for(int i=0;i<length;i++){
        cout<<element[i]<<"  ";
    }
    cout<<endl;
    
}


    int main() { 
        //Seeds the random number generator in C++, called only once   
        srand((unsigned)time(NULL)); 
     int arr[100],arr2[100],arrSum[100];
     int arrLength = ReadNumber("Enter number of elements:");   
     fillArrayWithRandomNumbers(arr, arrLength);
     fillArrayWithRandomNumbers(arr2,arrLength);
     sum2RandomArrays(arr,arr2,arrSum,arrLength);
     cout << "\nArray 1 elements:\n";  
     printArray(arr, arrLength);    
     cout << "\nArray 2 elements:\n";
     printArray(arr2, arrLength);   
     cout << "\nSum of array1 and array2 elements:\n";   
     printArray(arrSum, arrLength); 
     
     
     
  
        return 0;
    }