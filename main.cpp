#include "SortingAlgorithms.cpp"
#include "BinarySearch.cpp"
#include <iostream>
#include <ctime>

int randomic(int a){
    return rand()%a;
}


int main(){
    int DIM = 10;
    srand(time(NULL));
    int arr[DIM]= {0};

    std::cout << "ARRAY PRIMA SELECTIONSORT \n";
    
    for(int i =0; i<DIM; i++){
        arr[i] = randomic(100);
        std::cout << arr[i] << " ";
    }

    mergeSort(arr,DIM);
    
    std::cout << std::endl << "ARRAY DOPO SELECTIONSORT \n";
    for(int i =0; i<dim; i++){
        std::cout << arr[i] << " ";
    }

    int i = BinarySearch(arr,DIM, 10);

    std::cout << std::endl << "----> " <<arr[i];
}