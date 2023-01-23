///Ex:
//Input :3
//OutPut:
// Key [1] :NVZS-RQPO-ERKM-HCDG
// Key [2] :SQTE-GSOD-LTGK-ALCP
// Key [3] :JCIA-SZQZ-QCLY-EPGY

#include<iostream>
#include<cstdlib>
using namespace std;

enum enTypechar{
    SmallLetter =1,CapitalLetter = 2,
    SpecialCharacter = 3,Digit =4};

int RandomNumber(int From, int To) { 
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From; 
    return randNum; 
    
} 
int ReadNumber(){
    int num;
    cout<<"Please Enter Number ?"<<endl;
    cin>>num;
    return num;
}
char getRandomCharcter(enTypechar charType){
    switch(charType){
        case enTypechar::SmallLetter:
        {
        return char(RandomNumber(97, 122));
        break;
            
        }
        case enTypechar::CapitalLetter:
        {
        return char(RandomNumber(65, 90));
        break;
        }
        case enTypechar::SpecialCharacter:
        {
        return char(RandomNumber(33, 47));
        break;
        }
        case enTypechar::Digit:
        {
        return char(RandomNumber(48, 57));
        break;
        }
        
    }
    return '0';
    
}

string generateWord(enTypechar charType,short length){
    string word = "";
    for(int i=0;i<length;i++){
        word = word+getRandomCharcter(charType);
    }
    return word;
}

string generateKey(){
    string key ="";
    key = key+generateWord(enTypechar::CapitalLetter,4)+'-';
    key = key+generateWord(enTypechar::CapitalLetter,4)+'-';
    key = key+generateWord(enTypechar::CapitalLetter,4)+'-';
    key = key+generateWord(enTypechar::CapitalLetter,4);
    return key;
}

void generateKeys( short numbersOfKeys){
  for(int i=1;i<=numbersOfKeys;i++){
      cout<<"Key ["<<i<<"] :";
      cout<<generateKey()<<endl;
}
}


    int main() { 
        int numbersOfKeys =ReadNumber();
      
        //Seeds the random number generator in C++, called only once   
        srand((unsigned)time(NULL));   
        generateKeys(numbersOfKeys);

        return 0;
    }