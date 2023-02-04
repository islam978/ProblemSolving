
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
void fillArrayWithRandomNumbers(int arr[],int lengthArray){
       for(int i=0;i<lengthArray;i++){
          arr[i] = RandomNumber(1,100);
          
       
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
void copyArrayInReverseOrder(int arrSource[],int arrDestination[],int lengthArray){
      for(int i=0;i<lengthArray;i++){
        arrDestination[i]=arrSource[lengthArray-1-i];
    
    }
}



int main()
{
    //Seeds the random number generator in C++, called only once 
    srand((unsigned)time(NULL));
    int arr1[100],arr2[100];
    int arrLength = ReadPositiveNumber("\nEnter number of elements : \n"); 
    fillArrayWithRandomNumbers(arr1,arrLength);
    copyArrayInReverseOrder(arr1,arr2,10);
    
    cout << "\nArray 1 elements:\n"; 
    printArray(arr1,arrLength);
    
    
    cout << "\nArray 2 elements after copy:\n";
    printArray(arr2,arrLength);
    
    
    

    return 0;
}
