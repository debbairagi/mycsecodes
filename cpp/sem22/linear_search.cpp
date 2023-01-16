#include <iostream>
using namespace std;

class linear_search
{
public:
    int i, n, item, arr[50];
    void input();
    void search();
};

void linear_search::input()
{
    cout << "Enter array limit: ";
    cin >> n;
    cout << "Enter array elements: " << endl;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the search item: ";
    cin >> item;
}

void linear_search::search()
{
    for (i = 1; i <= n; i++)
    {
        if (arr[i] == item)
        {
            cout << item << " is found at Loction : " << i;
            break;
        }
    }
    if (i > n)
    {
        cout << item << " is not found in the array.";
    }
}

int main()
{
    linear_search obj;
    obj.input();
    obj.search();

    return 0;
}