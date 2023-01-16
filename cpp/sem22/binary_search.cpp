/// A program that can search any specific
///  element in an array using binary search.

#include <iostream>
using namespace std;

class bindu
{
public:
    int data[100], item, mid, min, max, i, n, k, ptr;

    void input();
    void sorting();
    void search();
};

void bindu ::input()
{
    cout << "Enter array limit: ";
    cin >> n;
    cout << "Enter the sorted / Unsorted array item: ";
    for (i = 1; i <= n; i++)
    {
        cin >> data[i];
    }
    cout << "Enter the search item: ";
    cin >> item;
}
void bindu::sorting()
{
    for (k = 1; k <= n - 1; k++)
    {
        for (ptr = 1; ptr <= n - k; ptr++)
        {
            if (data[ptr] > data[ptr + 1])
            {
                int temp = data[ptr];
                data[ptr] = data[ptr + 1];
                data[ptr + 1] = temp;
            }
        }
    }
    cout << endl
         << "After sorting : ";
    for (ptr = 1; ptr <= n; ptr++)
    {
        cout << data[ptr] << ", ";
    }
    cout << endl;
}

void bindu ::search()
{
    min = 1;
    max = n;
    while (min <= max)
    {
        mid = (min + max) / 2;
        if (data[mid] == item)
        {
            cout << "item found at location: " << mid;
            break;
        }
        if (data[mid] > item)
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
    obj.sorting();
    obj.search();

    return 0;
}
