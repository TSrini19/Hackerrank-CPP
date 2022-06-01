#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

void update(int *a,int *b) {
    int sum, diff;
    sum = *a + *b;
    diff = abs(*a - *b); 
    
    *a = sum;
    *b = diff; 
}

int main() {
    int a, b; //declare variables
    int *pa = &a, *pb = &b; // datatype *pointer_name = &variable name
    
    std::cin >> a >> b;
    update(pa, pb);
    std::cout << a << '\n' << b;

    return 0;
}
