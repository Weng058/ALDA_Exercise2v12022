//
//  recursion.c
//  ALDA_Exercise2v12021
//
//  Created by Michael Strommer on 10.03.21.
//  Updated 05.05.22

#include "recursion.hpp"
#include <stdio.h>

// =====================
// Exercise 1 - Harmonische Reihe
// ---------------------
float h(int n){
   if (n == 0) {
        return -1.00;
    }// (n == 1 || n ==2)??
    else if (n == 1) {
        return 1.00;
    }
    else {
        return 1.00 / n + (h(n - 1));
    }//return 0;
}

// =====================
// Exercise 2 - Palindrom Checker
// ---------------------
int isPalindrom(char *text, int left, int right){
    // https://www.growingwiththeweb.com/2014/02/determine-if-a-string-is-a-palindrome.html
    // https://www.geeksforgeeks.org/recursive-function-check-string-palindrome/ 
    if (left >= right) {
          return true;
     }
     if (text[left] != text[right]) {
          return false;
     }
     else {
          return isPalindrom(text, left + 1, right - 1);
     }
    return -1;
}

// =====================
// Exercise 3 - Root finding / Bisection Method
// ---------------------

// we use a simple quadratic function here to find its polynomial root.
// https://en.wikipedia.org/wiki/Quadratic_function
float f(float x){
    return x*x-4;
    // you may experiment with other functions for personal testing in main.cpp
    // always change to x*x-4 prior to submission!
}

float bisection(float x0, float x1, float epsilon){
    float fx0 = f(x0), fx1 = f(x1), xneu;
    while (true) {
        xenu = (x0 + x1) / 2;
        if (x0 == xneu || x1 == xneu)
            break;
        float fxneu = f(xneu);
        if (fx0 * fxneu < 0.0) {
            x1 == xneu;
            fx1 = fxneu;
        }
        else {
            x0 = xneu;
            fx0 = fxneu;

        }return xneu;
    
    return 0.0;
}
    
