// You are using GCC
#include <iostream>
using namespace std;


int main(){
    int array[10]={1,2,3,4,5};
    int newElement = 9;
    int newElement1 = 8;
    int size=0;
    
    while(size<10 && array[size]!=0)
    {
        size++;
    }
    //Insetion of the new Element
    if(size<10)
    {
        array[size]=newElement;
    }
    if(size++<10)
    {
        array[size++]=newElement1;
    }

    //print the new element
    for(int i=0; i<=size ; i++)
    {
        cout<<array[i]<<" ";
    }
}
