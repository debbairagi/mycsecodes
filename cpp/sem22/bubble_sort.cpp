/// A program that can sort the element of
/// an array in any order using bubble sort.

#include <iostream>
using namespace std;

class bubble
{
public:
    int data[100], n, i, k, ptr;
    void input();
    void sorting();
};

void bubble::input(void)
{
    cout << "Enter aray limit: ";
    cin >> n;
    cout << "Enter array elements: " << endl;
    for (k = 1; k <= n; k++)
    {
        cin >> data[k];
    }
}

void bubble::sorting(void)
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
}

int main()
{
    bubble obj;
    obj.input();
    obj.sorting();

    return 0;
}