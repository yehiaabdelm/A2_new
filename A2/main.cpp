#include <iostream>
#include <string>

using namespace std;

// Question 1
int findMaxElement(const int arr[],int size){
    int max = arr[0];
    
    for(int i=1;i<size;i++){
        if (max<arr[i])
            max = arr[i];
    }
    return max;
}

// Question 2
int computeFactorial(int x){
    if(x < 0){
        return 0;
    }
    else if(x == 0){
        return 1;
    }
    else
        return x*computeFactorial(x-1);
}

// Question 3
bool stringPattern(const string& s, const string& p){
    unsigned int pLen = p.length();
    unsigned int sLen = s.length();

    if(pLen > sLen)
        return false;
    else{
        for(int i=0; i<= sLen - pLen; i++){
            if(s.substr(i,pLen) == p)
                return true;
        }
        return false;
    }
}

// Utility function for main
template <typename T> void printArray(T arr[], int size)
{
    for(int i = 0; i<size; i++)
      cout<<arr[i]<<" ";

    cout<<endl;
}


int main() {

    // Question 1
    int arr[5] = {12,2,1,2,34};
    cout<<"Array: ";
    printArray(arr,5);
    cout<<"Maximum element: "<<findMaxElement(arr,5)<<endl<<endl;

    // Question 2
    int x=3;
    cout<<"Factorial of x="<<x<<" is "<<computeFactorial(3)<<"."<<endl<<endl;

    // Question 3
    string s1 = "twenty seventy";
    string s2 = "seven";
    
    if(stringPattern(s1,s2))
        cout << "The string \"" << s1 << "\" contains the pattern \"" << s2 << "\"." << endl << endl;
    else
        cout << "The string \"" << s1 << "\" does not contain the pattern \"" << s2 << "\"." << endl << endl;
    
    return 0;
}
