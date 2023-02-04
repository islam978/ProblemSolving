
#include<iostream>
#include<cstdlib>
using namespace std;

  

int RandomNumber(int From, int To) { 
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From; 
    return randNum; 
    
} 
int ReadNumber(string message){
    int num;
    cout<<message<<endl;
    cin>>num;
    return num;
}

void fillArrayWithRandomNumbers(int arr[],int lengthArray){
       for(int i=0;i<lengthArray;i++){
          arr[i] = RandomNumber(1,100);
          
       
    }
}


short FindNumberPositionInArray(int Number, int arr[100], int arrLength) { 
    /*This function will search for a number in array and return its index, or return -1 if it does not exists*/
    for (int i = 0; i < arrLength; i++)   
    { 
        if (arr[i] == Number) 
        return i;// and return the index  
    } 
    //if you reached here, this means the number is not found
    return -1; 
    
} 
bool IsNumberInArray(int number,int arr[],int arrLength){
    return FindNumberPositionInArray(number,arr,arrLength) != -1;
}


void printArray(int element[],int length){
    
       for(int i=0;i<length;i++){
        cout<<element[i]<<"  ";
    }
    cout<<endl;
    
}







    int main() { 
        int arr[100];
        int arrLength =ReadNumber("Please Enter Array Length");
        
      
        //Seeds the random number generator in C++, called only once   
        srand((unsigned)time(NULL)); 
        fillArrayWithRandomNumbers(arr,arrLength);
        cout<<"Array 1 Element"<<endl;
        printArray(arr,arrLength);
        int number = ReadNumber("\nPlease enter a number to search for?\n");
      
        cout<<"Number You are looking for is : "<<number;
        
       // short numberPosition = FindNumberPositionInArray(number, arr, arrLength);
        if(IsNumberInArray(number,arr,arrLength))
            cout<<"\nYes,The Number Is Found :)-";
        else 
        cout<<"\nNo,The Number Is Not Found :-(";
        
        
        

        return 0;
    }