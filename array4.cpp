#include <iostream>
using namespace std;
int main ()
{
    int n,ans=0;
    cout << "Enter array size= ";
    cin >> n;
    int array[n];
    for (int i=0;i < n; i++)
    {
        cin >> array[i];
    }


    for (int i=0;i<n;i++)
    {
        ans+=array[i];

    }
    int average_array=ans/n;
    cout << ans <<"\n"<<average_array;

    return 0;
}
