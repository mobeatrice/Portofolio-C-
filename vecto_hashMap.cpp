/******************************************************************************

Merging two vectors using HashMap and eliminating duplicats

*******************************************************************************/
#include "iostream"
#include "unordered_map"
using namespace std;
 
void removeDups(int a[],int b[], int n)
{
    unordered_map<int, bool> mp; //hash map for storing elements
 
    for (int i = 0; i < n; ++i) {
 
        
        if (mp.find(a[i]) == mp.end()) 
        {
            cout << a[i] << " "; //print the element that's not in the hash map
        }
        
        else
        {
            for (int j=0; j<n; j++)
            {
                if (a[i]!=b[j] && mp.find(b[j]) == mp.end()) //verify if the element from b is diferent than de element from a and 
                                                            //if it's already in the map or not
                {
                    cout<<b[j]<<" ";
                    mp[b[j]]=true; //insert element in the map
                    break;
                }
                
            }
        }
 
        // Insert the element in the hash map
        mp[a[i]] = true;
        
    }
}
 
int main()
{
    int a[] = { 1, 2, 5, 1, 7, 2, 4, 2 };
    int b[] = {1, 24, 5, 12, 23, 2, 50,4};
    int n = sizeof(a) / sizeof(a[0]);
    
    removeDups(a,b, n);
 
    return 0;
}


