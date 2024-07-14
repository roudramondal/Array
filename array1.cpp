#include <iostream>
using namespace std;
int main ()
{
    // int n;
    // cout << "Enter your number =  ";
    // cin >> n;
    int array []= {10,20,30,45};
    // int n =sizeof(array) /sizeof (array[0]);
    // //cout << n;
    // for ( int i =0; i < n;i++)
    // {
    //     cout << array[i]<<"  ";
    // }
    for(int x:array)
    cout << x << "  ";
    return 0;
    
}