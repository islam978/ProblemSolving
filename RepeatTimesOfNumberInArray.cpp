
#include<iostream>
#include<cstdlib>
using namespace std;

 
int ReadNumber(string message){
    int num;
    cout<<message<<endl;
    cin>>num;
    return num;
}
void readArray(int element[],int length){
    cout<<"Enter array elements"<<endl;
    for(int i=1;i<=length;i++){
        cout<<"Element ["<<i<<"]:";
        cin>>element[i];
       
    }
}

void printArray(int element[],int length){
    
       for(int i=1;i<=length;i++){
        cout<<element[i]<<"  ";
    }
    cout<<endl;
    
}
 int TimesRepeated(int number, int arr[], int arrLength) { 
     int count = 0; 
     for (int i = 0; i <= arrLength - 1; i++)  
     { 
         if (number == arr[i])  
         {
             count++; 
             
         }   
         
     }
     return count; 
     
 } 



    int main() { 
        int lengthArray =ReadNumber("Enter number of elements:");
        int arr[lengthArray];
        readArray(arr,lengthArray);
        int numberToCheck = ReadNumber("Enter the Number you want to check");
        cout<<"Orignal array :";
        printArray(arr,lengthArray);
        cout<< numberToCheck<<" is repeated "<<TimesRepeated(numberToCheck,arr,lengthArray)<<" Times";
  

        return 0;
    }