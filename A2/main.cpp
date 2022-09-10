#include <iostream>
#include <string>

using namespace std;

int findMaxElement(const int arr[],int size){
    int max = arr[0];
    
    for(int i=1;i<size;i++){
        if (max<arr[i])
            max = arr[i];
    }
    return max;
}

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

bool stringPattern(const string& s, const string& p){
    unsigned int pLen = p.length();
    unsigned int sLen = s.length();

    if(pLen > sLen)
        return false;
    else{
        for(int i=0; i<sLen - pLen; i++){
            if(s.substr(i,pLen) == p)
                return true;
        }
        return false;
    }
}

void swap(string *compare, string *compareTo)
{
    string temp = *compare;
    *compare = *compareTo;
    *compareTo = temp;
}
 
void selectionSort(string arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++){
            if (arr[min_idx]>arr[j]){
                min_idx = j;
            }
        }
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}

template <typename T> void printArray(T arr[], int size)
{
    for(int i = 0; i<size; i++)
      cout<<arr[i]<<" ";

    cout<<endl;
}


int main() {
    
    int arr[5] = {12,2,1,2,34};
    cout<<"Array: ";
    printArray(arr,5);
    cout<<"Maximum element: "<<findMaxElement(arr,5)<<endl<<endl;
    
    int x=3;
    cout<<"Factorial of x="<<x<<" is "<<computeFactorial(3)<<"."<<endl<<endl;
    
    string s1 = "seventy";
    string s2 = "seven";
    
    if(stringPattern(s1,s2))
        cout << "The string \"" << s1 << "\" contains the pattern \"" << s2 << "\"." << endl << endl;
    else
        cout << "The string \"" << s1 << "\" does not contain the pattern \"" << s2 << "\"." << endl << endl;
    
    string s[6] = {"xyz","abc","abc","abcd","xyz","abca"};
    cout <<"String array before sorting: ";
    printArray(s,6);
    selectionSort(s,6);
    cout <<"String array after sorting: ";
    printArray(s,6);
    
    return 0;
}
