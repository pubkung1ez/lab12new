#include<iostream>
using namespace std;

int fibonacci(int a);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int a){
    if (a == 1) return 1;
    if (a == 0) return 0;
    return fibonacci(a-1) + fibonacci(a-2);
}