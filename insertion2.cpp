// You are using GCC
#include <iostream>
using namespace std;


int main(){
    int array[10]={1, 2, 3, 4, 5};
    int newElement = 9;
   int  insertPosition = 2;
    int size = 5;
    
    for(int i=6; i>insertPosition; i--){
        array[i] = array[i-1];
    }
    array[insertPosition]=newElement;
    size++;
    
    for(int i=0; i<size; i++)
    {
        cout << array[i]<<" ";
    }

    return 0;
}