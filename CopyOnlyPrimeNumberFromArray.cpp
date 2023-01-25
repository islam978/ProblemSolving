
#include<iostream>
#include<cstdlib>
using namespace std;

enum enPrimeOrNot{
    Prime = 1,
    NotPrime = 2
};

 
int ReadNumber(string message){
    int num;
    cout<<message<<endl;
    cin>>num;
    return num;
}


enPrimeOrNot checkPrime(int num){
 
 int m = num/2;
 for(int counter =2;counter<=m;counter++){
 if(num % counter ==0)
 return enPrimeOrNot::NotPrime;
}
return enPrimeOrNot::Prime;
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

void copyOnlyPrimeNumbers(int arrSource[],int arrDistention[],int lengthArray,int &lengthArray2){
    lengthArray2 = 0;
      for(int i=0;i<lengthArray;i++){
          if(checkPrime(arrSource[i])== enPrimeOrNot::Prime){
            arrDistention[lengthArray2]=arrSource[i];
            lengthArray2++;
          }
     
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
     int arr[100];
     int arrLength = ReadNumber("Enter number of elements:");   
     fillArrayWithRandomNumbers(arr, arrLength);
     int arr2[100]; 
     int arrLength2;
     copyOnlyPrimeNumbers(arr, arr2, arrLength,arrLength2);   
     cout << "\nArray 1 elements:\n";   
     printArray(arr, arrLength);     
     cout << "\nArray 2 elements after copy:\n";    
     printArray(arr2, arrLength2); 
     
     
     
  
        return 0;
    }