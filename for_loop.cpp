#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    std::cin >> a;
    std::cin >> b;
    
    string num[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "odd", "even"};
    
    for(a;  a <=b ; a++)
    {
         if(a <=9)
         {
             std::cout << num[a] << std::endl;
         }
         else if(a > 9 && a%2 == 0)
         {
             std::cout << num[11] << std::endl;
         }
         else if (a > 9 && a%2 != 0)
         {
             std::cout << num[10] << std::endl;
         }
        
    }
    
    
    return 0;
}
