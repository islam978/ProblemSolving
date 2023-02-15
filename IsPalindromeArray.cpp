#include<iostream>
using namespace std;



int ReadNumber(string message){
    int num;
    cout<<message<<endl;
    cin>>num;
    return num;
}


void FillArray(int arr[100], int& arrLength) { 
   for(int i=0;i<arrLength;i++){
       cin>>arr[i];
   }
    cout<<endl;
}
    
    void PrintArray(int arr[100], int arrLength) { 
        for (int i = 0; i < arrLength; i++) 
        cout << arr[i] << " ";    
        cout << "\n"; 
        
     } 
   bool IsPalindromeArray(int arr[100], int Length) { 
       for (int i = 0; i < Length; i++)    
       { 
           if (arr[i] != arr[Length - i - 1])    
           { return false; 
           
           }    
        }; 
        
        return true;
    } 

    
int main() {
        
 int arr[100];
 int Length = ReadNumber("Please Enter Array Length ?");   
 FillArray(arr, Length);  
 cout << "\nArray Elements:\n";   
 PrintArray(arr, Length); 
 if (IsPalindromeArray(arr, Length))  
 cout << "\nYes array is Palindrome\n"; 
 else    
 cout << "\nNO array is NOT Palindrome\n"; 
 return 0;
  } 

