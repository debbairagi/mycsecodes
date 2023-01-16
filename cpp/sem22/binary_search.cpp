/// A program that can search any specific
///  element in an array using binary search.

#include <iostream>
using namespace std;

class bindu
{
public:
    int arr[100], item, mid, min, max, i, n;

    void input();
    void search();
};

void bindu ::input()
{
    cout << "Enter array limit: ";
    cin >> n;
    cout << "Enter the sorted array item: ";
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the search item: ";
    cin >> item;
}

void bindu ::search()
{
    min = 1;
    max = n;
    while (min <= max)
    {

        mid = (min + max) / 2;
        if (arr[mid] == item)
        {
            cout << "item found at location: " << mid;
            break;
        }
        if (arr[mid] > item)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    if (min > max)
    {
        cout << "item is not found";
    }
}
int main()
{
    bindu obj;
    obj.input();
    obj.search();

    return 0;
}
