// You are using GCC
#include<iostream>
using namespace std;

int main(){
    int* array;
    int size;
            
            
    cout<<"Enter the size";
    cin>> size;
            
    array =  new int [size];
            
    for(int i=0; i< size ; i++)
    {
        array[i] = i+1;
        cout<<"[" <<i <<"]="<<array[i]<<endl;
    }        
        return 0;
    }