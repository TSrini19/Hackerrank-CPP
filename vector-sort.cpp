#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    vector <int> vec;
    int len, num;
    
    std::cin >> len;
    
    for(int i=0; i<len;i++)
    {
        std::cin >> num;
        vec.push_back(num);
    }  
    
    sort(vec.begin(), vec.end());
    
    for (auto j = vec.begin(); j != vec.end();j++)
    {
        std::cout << *j << ' ';
    }
    return 0;
}
