#include <iostream>
using namespace std;
int main ()
{
    int n,ans=0;
    cout << "Enter the size of array= ";
    cin >> n;

    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> array[i];

    }
    ans= array[0];
    for (int i =0; i<n;i++)
    {
        if (array[i]>ans)
       {
         ans=array[i];
       }

    }
    cout<<"Value is = " << ans<<" ";
    
}