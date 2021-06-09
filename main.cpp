#include "SortingAlgorithms.cpp"
#include <iostream>
#include <ctime>

int randomic(int a){
    return rand()%a;
}


int main(){
    srand(time(NULL));
    int arr[10] = {0};

    std::cout << "ARRAY PRIMA SELECTIONSORT \n";
    for(int i =0; i<5; i++){
        arr[i] = randomic(5);
        std::cout << arr[i] << " ";
    }
    for(int i =5; i<10; i++){
        arr[i] = i;
        std::cout << arr[i] << " ";
    }

    BubbleSortOPT<int,10>(arr);
    std::cout << std::endl << "ARRAY DOPO SELECTIONSORT \n";
    for(int i =0; i<10; i++){
        std::cout << arr[i] << " ";
    }
}