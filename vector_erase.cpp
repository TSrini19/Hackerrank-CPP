#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector <int> vec;
    int vec_len, num, vec_size;
    int fixed, begin, end;
    
    std::cin >> vec_len;
    
    for (int i=0; i<vec_len; ++i)
    {
        std::cin >> num;
        vec.push_back(num);
    } 
    
    std::cin >> fixed;
    std::cin >> begin >> end;
    
    vec.erase(vec.begin()+ fixed-1);
    // for (auto j1 = vec.begin(); j1 != vec.end(); j1++)
    // {
    //     std::cout << *j1 << ' ';
    // }
    // std::cout << '\n';
    
    vec.erase(vec.begin()+ begin-1, vec.begin()+ end-1);
    // for (auto j2 = vec.begin(); j2 != vec.end(); j2++)
    // {
    //     std::cout << *j2 << ' ';
    // }
    // std::cout << '\n';
    
    std::cout << vec.size() << std::endl;
    
    for (auto j = vec.begin(); j != vec.end(); j++)
    {
        std::cout << *j << ' ';
    }
    
    // std::cout << '\n';
    
    
    
    return 0;
}
