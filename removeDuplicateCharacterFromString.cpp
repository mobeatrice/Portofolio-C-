/******************************************************************************

Remove all the duplicate characters form a string

*******************************************************************************/
#include <iostream>

using namespace std;

char *removeCharacter (char s[], int n)
{
    int index=0, i, j;
    
    for (i=0; i<n; i++)
    {
       for (j=0; j<i; j++)
        if (s[i]==s[j])
            break;
        if (i==j )
            s[index++]=s[i];
    }
    return s;
}

int main()
{
    
    char s[] ="asdbkfbfsdkjfsfla";
    int n = sizeof(s)/sizeof(s[0]);
    cout<<"The string after the dublicates have been removed:\n";
    cout<<removeCharacter(s,n);
    return 0;
}
