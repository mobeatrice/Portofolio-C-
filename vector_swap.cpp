/******************************************************************************

Swap two vectors using two methods.
 

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 void print (vector <int> v)
 {
      for (int i = 0; i < 3; i++) 
    {
        cout << v[i] << " ";
    }
 }
int main()
{
    vector<int> v1 = { 1, 2, 3 };
    vector<int> v2 = { 4, 5, 6 };
 
    // swapping the above two vectors
    // by traversing and swapping each element
    for (int i = 0; i < 3; i++) {
        swap(v1[i], v2[i]);
    }
    cout<<"First Method: "<<'\n';
    // print vector v1
    cout << "Vector v1 = ";
    print(v1);
 
    // print vector v2
    cout << "\nVector v2 = ";
    print(v2);
    
    //second method: by using swap() function directly on the vectors.
    v1.swap(v2);
    cout<<"\nSecond Method: "<<'\n';
    cout << "Vector v1 = ";
    print(v1);
    cout << "\nVector v2 = ";
    print(v2);
    return 0;
}
