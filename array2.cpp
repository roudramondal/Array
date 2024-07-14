#include <iostream>
using namespace std;
bool sorted(int array [],int n)
{
    for (int i =1;i<n;i++)
    {
        if(array[i]<array[i-1])
        {
            return false;
        }
    }
    return true;
}



int main  ()
{
    int n;
    cout << "Enter any number = ";
    cin >> n;
    int array [n];
    for (int i =1; i<n;i++)
    {
        cout << array[i];
    }
    if (sorted(array,n))
    {
        cout << " sorted \n";
    }
    else
    {
        cout << " Not sorted \n";
    }

    return 0;

}