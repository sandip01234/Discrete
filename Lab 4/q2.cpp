/*Write a program to calculate b^n mod  m.*/
#include <iostream>
#include<cmath>
using namespace std;
int recursion(int b, int n, int a){
    if (n == 0){
        return 1;
    } else if (n % 2 == 0){
        return (recursion(b, n/2, a) * recursion(b, n/2, a)) % a;
    } else {
        return (recursion(b, n/2, a) * recursion(b, n/2, a) * (b % a)) % a;
    }
}


int main(){
    int b,m,n;
    cout<<"Enter the integer for base:";
    cin>>b;
    cout<<"Enter the integer exponential:";
    cin>>n;
    cout<<"Enter the integer for modulus:";
    cin>>m;
    cout<<"The required recursive algorithm of modular exponential is:"<<recursion(b,n,m);  // Corrected order of arguments
    return 0;
}
