#pragma once
#include <iostream>

template <class T>
const int BinarySearch(T* a,T x,int left, int right){
    if(left==right){
        if(a[left]==x) return left;
        else return -1;
    }
    int centro = (left+right)/2;
    if(x <= a[centro]) return BinarySearch(a,x,left,centro);
    else return BinarySearch(a,x,centro+1,right); 
}


template <class T>
const int BinarySearch(T* a,int DIM,T x){
   return BinarySearch(a,x,0,DIM-1);
}