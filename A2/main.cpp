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

void printArray(int a[],int size){
    for(int i = 0;i<size; i++)
      cout<<a[i]<<" ";
      cout<<endl;
}
int compareStrings(string compare, string compareTo){
    return (compareTo<compare) ? 1: (compareTo==compare) ? 0: 2; // 0: theyre the same string, 1: compareTo comes before compare, 2: compare comes before compareTo
}

int main(int argc, const char * argv[]) {
    

    int arr[5] = {12,2,1,2,34};
    cout <<"Find maximum element: "<<findMaxElement(arr,5)<<endl;
    
    cout<<"Compute factorial: "<<computeFactorial(3)<<endl;
    
    string s[2] = {"xyz","abc"};
    cout<<"Compare strings: "<<compareStrings(s[0],s[1])<<endl;
    
    return 0;
}
