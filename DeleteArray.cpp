#include <iostream>

using namespace std;
int main()
{
    int array[100], n, position;

    cout << "Enter the value no of Elements: ";
    cin >> n;

    cout << "Enter no of the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Enter the position of element to delete: ";
    cin >> position;

    for(int i = position - 1; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }

    cout << "\n" << "Array after deletion is: "<< endl;
    for(int i = 0; i < n - 1; i++)
    {
        cout << array[i];
    }
    return 0;
}
