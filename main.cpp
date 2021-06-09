#include "SortingAlgorithms.cpp"
#include <iostream>
#include <ctime>

int randomic(int a){
    return rand()%a;
}


int main(){
    int dim = 10;
    srand(time(NULL));
    int arr[dim]= {0};

    std::cout << "ARRAY PRIMA SELECTIONSORT \n";
    
    for(int i =0; i<dim; i++){
        arr[i] = randomic(100);
        std::cout << arr[i] << " ";
    }

    quickSort<int,10>(arr);
    
    std::cout << std::endl << "ARRAY DOPO SELECTIONSORT \n";
    for(int i =0; i<dim; i++){
        std::cout << arr[i] << " ";
    }
}