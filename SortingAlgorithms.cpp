#pragma once

#include <iostream>

template<class T>
void swap(T& a, T&b){
    T aux = a;
    a = b;
    b = aux;
}

template<class T,int N>
void SelectionSort(T* arr){
    int index;
    for(int i = 0; i < N-1 ; i++){
        index = i;
        for(int j = i+1; j < N; j++)
            if(arr[j] < arr[index])
                index = j;
        
        swap(arr[index], arr[i]);
    } 
}

template<class T,int N>
void InsertionSort(T* arr){
    int j;
    for(int i = 0; i< N; i++){
        j=i;
        while(j>=0 && arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

template<class T,int N>
void BubbleSort(T* arr){
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

template<class T,int N>
void BubbleSortOPT(T* arr){
    int flag;
    for(int i=0; i<N-1; i++){
        flag = 0;
        for(int j=0; j<N-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag++;
            }  
        }
        if(flag==0){
            std::cout << "\nIl vettore è già ordinato.\n";
            return;
        } 
    }
}