//
//  main.cpp
//  A2
//
//  Created by Yehia Abdelmohsen on 09/09/2022.
//

#include <iostream>
#include<string>

using namespace std;

int findMaxElement(int arr[],int size){
    int max = arr[0];
    
    for(int i=1;i<size;i++){
        if (max<arr[i])
            max = arr[i];
    }
    return max;
}

int computeFactorial(int a){
    
    if(a==1 || a==0){
        return 1;
    }
    else if(a<0){
        return NULL;
    }

    for (int i = a; i>1; i--){
        a = a*(i-1);
    }
    return a;
}

int compareStrings(string compare, string compareTo){
    return (compareTo<compare) ? 1: 0; //  1: compareTo comes before compare, 0: otherwise
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
            if (compareStrings(arr[min_idx],arr[j])==1){
                min_idx = j;
            }
        }
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}

template <typename T> void printArray(T arr[],int size)
{
    for(int i = 0;i<size; i++)
      cout<<arr[i]<<" ";
      cout<<endl;
}



int main(int argc, const char * argv[]) {
    

    int arr[5] = {12,2,1,2,34};
    cout <<"Find maximum element: "<<findMaxElement(arr,5)<<endl;
    
    cout<<"Compute factorial: "<<computeFactorial(3)<<endl;
    
    string s[6] = {"xyz","abc","abc","abcd","xyz","abca"};
    cout<<"Compare strings: "<<compareStrings(s[0],s[1])<<endl;
    
    selectionSort(s,6);
    printArray(s,6);
    return 0;
}
