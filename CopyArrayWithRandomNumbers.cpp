
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

void copyArray(int arrSource[],int arrDistention[],int lengthArray){
      for(int i=0;i<lengthArray;i++){
          arrDistention[i]=arrSource[i];
     
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
     copyArray(arr, arr2, arrLength);   
     cout << "\nArray 1 elements:\n";   
     printArray(arr, arrLength);     
     cout << "\nArray 2 elements after copy:\n";    
     printArray(arr2, arrLength); 
     
     
  
        return 0;
    }