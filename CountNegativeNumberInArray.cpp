#include<iostream>
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
          arr[i] = RandomNumber(-100,100);
          
       
    }
}
    
    void PrintArray(int arr[100], int arrLength) { 
        for (int i = 0; i < arrLength; i++) 
        cout << arr[i] << " ";    
        cout << "\n"; 
        
     } 
    
    int CountPositiveNumberInArray(int arr[100],int arrLength){
        int count =0;
        for (int i = 0; i < arrLength; i++) {
         if(!(arr[i]>=0))
          count++;
        }
        return count;
    }

    
int main() {
        
 int arr[100];
 int Length = ReadNumber("Please Enter Array Length ?");   
 fillArrayWithRandomNumbers(arr,Length);
 cout << "\nArray Elements:\n";   
 PrintArray(arr, Length); 
 cout<<"\nNegative Numbers count is:" ;
 cout<< CountPositiveNumberInArray (arr,Length);

 return 0;
  } 

