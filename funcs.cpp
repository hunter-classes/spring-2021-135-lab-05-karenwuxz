#include <iostream>
#include "funcs.h"

// add functions here

// Task A

bool isDivisibleBy(int a, int b){
    if(b == 0){
        return false;
    }else if(a % b == 0){
        return true;
    }else{
        return false;
    }
}

// Task B

bool isPrime(int num){
    if(num < 2){
        return false;
    }
    // 2 is prime in this program because i starts at 2 and needs to continue only if i is less than 2
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}   

// Task C

int nextPrime(int n){
    // 1113106 is the largest know prime gap
    for(int i = n; i < n + 1113106; i++){
        if(isPrime(i) == 1){
            return i;
        }
    }
    // This isnt suppose to ever return 
    return -1;
}

// Task D

int countPrimes(int a, int b){
    int amountOfPrimes = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            amountOfPrimes += 1;
        }
    }
    return amountOfPrimes;
}  

//Task E

bool isTwinPrime(int nums){
    if(isPrime(nums)){
        if(isPrime(nums - 2) || isPrime(nums + 2)){
            return true;
        }
    }
    return false;
}

//Task F

int nextTwinPrime(int n){
    for(int i = n + 2; i < n + 1113106; i += 2){
        if(isTwinPrime(i)){
            return i;
        }
    }
    // This isnt suppose to ever return 
    return -1;
}

int largestTwinPrime(int a, int b){
    int largest = -1;
    for(int i = a; i <= b; i++){
        if(isTwinPrime(i)){
            if(largest < i){
                largest = i;
            }
        }
    }
    return largest;
}