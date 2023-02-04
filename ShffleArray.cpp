
#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message) { 
    int Number = 0; 
    do  
    {     
        cout << Message << endl;    
        cin >> Number;  
    } 
    while (Number <= 0);
     return Number; 
    
} 

int RandomNumber(int From, int To) { 
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From; 
    return randNum; 
    
} 

void swap(int &num1,int &num2){
    int temp = num1;
    num1 =num2;
    num2 = temp;

}
void fillArray1ToN(int arr[],int lengthArray){
       for(int i=0;i<lengthArray;i++){
          arr[i] =i+1;
          
       
    }
}

void shffleArray(int arr[] ,int lengthArray){
    for(int i=0;i<lengthArray;i++){
        swap(arr[RandomNumber(1, lengthArray) - 1], arr[RandomNumber(1, lengthArray) - 1]);
    }
}
void printArray(int element[],int length){
    
       for(int i=0;i<length;i++){
        cout<<element[i]<<"  ";
    }
    cout<<endl;
    
    
}



int main()
{
    //Seeds the random number generator in C++, called only once 
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength = ReadPositiveNumber("\nEnter number of elements : \n"); 

    fillArray1ToN(arr,arrLength);
    cout << "\nArray elements before shuffle:\n";
    printArray(arr,arrLength);
    
  
    shffleArray(arr,arrLength);
    cout << "\nArray elements after shuffle:\n";
    printArray(arr,10);
    

    return 0;
}
