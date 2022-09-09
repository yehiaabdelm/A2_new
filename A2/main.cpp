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


int main(int argc, const char * argv[]) {
    
    cout<<"Find maximum element"<<endl;
    
    int arr[5] = {12,2,1,2,34};
    cout <<findMaxElement(arr,5)<<endl;
    
    cout<<"Compute factorial"<<endl;
    cout<<computeFactorial(3)<<"\n";
    return 0;
}
