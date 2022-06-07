#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int queries, type, val;
    
    std::cin >> queries;
    
    set<int>s;
    
    for(int i=0;i < queries;++i)
    {
        std::cin >> type >> val;
        
        if (type == 1)
        {
            // std::cin >> val;
            s.insert(val);
        }
        else if (type ==2) 
        {
            s.erase(val);
        }
        else if (type == 3)
        {
            // std::cin >> val;
            auto itr = s.find(val);
            
            if(itr != s.end())
            {
                cout << "Yes" << '\n';
            }
            else 
            {
                std::cout << "No" << '\n';
            }
            
        }
        
    }
     
    return 0;
}



