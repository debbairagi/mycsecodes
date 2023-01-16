// a program that sort elements of an array in any order
// using selection sort algorithm.
#include <iostream>
using namespace std;

class sorting
{
public:
    int A[100], n, k, loc, min, minimum, j;
    void input();
    void selection();
    int select_min(int[], int, int, int);
};

void sorting ::input(void)
{
    cout << "Enter array limit: ";
    cin >> n;
    cout << "Enter array elements: " << endl;
    for (k = 1; k <= n; k++)
    {
        cin >> A[k];
    }
}

void sorting ::selection(void)
{
    for (k = 1; k <= n - 1; k++)
    {
        minimum = select_min(A, n, k, loc);
        int temp = A[k];
        A[k] = A[minimum];
        A[minimum] = temp;
    }

    cout << "\n After Sorting: \n";
    for (k = 1; k <= n; k++)
    {
        cout << A[k] << ", ";
    }
}

int sorting ::select_min(int A[], int n, int k, int loc)
{
    min = A[k];
    loc = k;

    for (j = k + 1; j <= n; j++)
    {
        if (min > A[j])
        {
            min = A[j];
            loc = j;
        }
    }
    return loc;
}

int main()
{
    sorting obj;
    obj.input();
    obj.selection();

    return 0;
}
