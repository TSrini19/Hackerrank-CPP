#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    string a, b;
    char temp;
    std::cin >> a >> b;
    std::cout << a.size() << ' ' << b.size() << std::endl; 
    std::cout << a + b << std::endl; 
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    std::cout << a << ' ' << b <<std::endl;
    return 0;
}
