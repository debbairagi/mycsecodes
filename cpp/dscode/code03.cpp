/// Write a program that can perform linear search to find
/// the location of any specific element. (Maybe two elements).
#include<iostream>
using namespace std;

class deb
{
public:
    int arr[100], i, n, item[20], m;
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
    cout <<"======================================="<< endl;

    cout << "Enter search item limits: ";
    cin >> m;

    cout << endl;

    for(i=1; i<=m; i++)
    {
        cout << "Enter the search item " <<"[" << i <<"] = ";
        cin >> item[i];
    }
}

void deb:: search(void)
{

    for(int j=1; j<=m; j++)
    {
        for(i=1; i<=n ; i++)
        {
            if(arr[i]==item[j])
            {
                cout << item[j] << " is found at loction : " << i << endl;
                break;
            }
        }
        if(i>n)
        {
            cout << item[j] << " is not found in the array." << endl;
        }
    }
}

int main()
{
    deb obj;
    obj.input();
    cout << endl;
    cout << "============================" << endl;
    cout << endl;
    obj.search();

    return 0;
}

