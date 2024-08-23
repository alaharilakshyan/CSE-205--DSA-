#include <iostream>
using namespace std;

int main() {
    int array[12] = {1, 2, 3, 4, 5};
    int newElements[] = {8, 9, 10, 11};
    int insertPosition = 2;
    int newSize = 9; 
    
    for(int i = newSize; i > insertPosition; i--) {
        array[i] = array[i - 4]; 
    }
    
    for(int i = 0; i < 4; i++) {
        array[insertPosition + i] = newElements[i];
    }
    
    for(int i = 0; i < newSize; i++) {
        cout << array[i] << " ";
    }

    return 0;
}