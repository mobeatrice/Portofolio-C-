/******************************************************************************

Given 2 vectors, merge and then sort them.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
 
void print(auto const &vector)
{
    for (auto i: vector) 
     {
        std::cout << i << ' ';
     }
    std::cout << std::endl;
}
 
int main()
{
    std::vector<int> x = { 9, 7, 3 };
    std::vector<int> y = { 4, 5 };
 
    std::vector<int> v(x);
    v.insert(v.end(), y.begin(), y.end());
    sort(v.begin(), v.end());
    print(v);
    
    //v.clear();  
 
    return 0;
}
