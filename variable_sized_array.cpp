#include <iostream>
#include <vector>
#include <bits/stdc++.h>

/*
  problem statement
  1) Define total number of arrays inside array. (get input from user)
  2) Define total number of queries (q)
  3) Define the array.
   3.1) every sub array must be of the form len(sub array) elements of subarray 
   3.2) 3 1 5 4
       where,
       3 - represents the total length of the subarray
       1 5 4 - are the elements inside the subarray
  4) Queries (q) must be of the form i j.
   4.1) i represents the index of the sub array located inside the main array
   4.2) j represents the index of the element inside the sub array. 
*/

int main()
{
    int total_sub_array, total_queries;
    int len_sa,a1,a2;
    
    std::cin >> total_sub_array >> total_queries;
    
    std::vector<std::vector<int>> arr(total_sub_array);
    
    // std::cout << total_sub_array << ' ' << total_queries << std::endl;
    
    for (int i=0; i <total_sub_array; i++)
    {   
        std::cin >> len_sa;
        
        arr[i].resize(len_sa);
        
        for (int j=0; j<len_sa;++j)
        {
            std::cin >> arr[i][j];    
        }
        
    }
    
    for (int k=0; k<total_queries; k++)
    {
        std::cin >> a1 >> a2;
        std::cout << arr[a1][a2] << std::endl;
    }
    
    return 0;
}
