#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int len, n;
    
    cin >> len;
    
    int arr[len];
    
    for (int i=0; i <len; i++)
    {
        cin >> arr[i];
        // std::cout << arr[i] << std::endl;
    }  
    
    n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, arr+n);
    
    for (int j=0; j<len;j++)
    {
        cout << arr[j] <<' ';
    }
    
    

    
    
    
    return 0;
}
