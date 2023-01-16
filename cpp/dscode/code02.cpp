/// Write a program that can perform linear search( Specific element).
#include<iostream>
using namespace std;

class deb
{
public:
    int arr[100], i, n, item;
    void input();
    void search();
};

void deb :: input(void)
{
    cout << "Enter array limit: ";
    cin >> n;
    for(i=1; i<=n ; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the search item: ";
    cin >> item;
}

void deb:: search(void)
{
    for(i=1; i<=n ; i++)
    {
        if(arr[i]==item)
        {
           cout << item << " is found at Loction : " << i;
           break;
        }
    }
    if(i>n)
    {
        cout << item << " is not found in the array.";
    }
}

int main()
{
    deb obj;
    obj.input();
    obj.search();

    return 0;
}
