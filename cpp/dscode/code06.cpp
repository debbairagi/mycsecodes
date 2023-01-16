/// a program that sort the elements of an array in any order 
/// using insertion sort algorithm.

#include <iostream>
using namespace std;
class insertion
{
    public:
       int A[100], n, k, ptr;
       void input();
       void inserting();

};

void insertion :: input(void)
{
    cout << "Give array limit: ";
    cin >> n;
    cout << "Give array elements: \n";
    for(k=1; k<=n ; k++)
    {
        cin >> A[k];
    }
}
void insertion :: inserting(void)
{
    for( k=2; k<=n ; k++)
    {
        int temp = A[k];
        ptr = k -1;

        while(ptr > 0 && temp < A[ptr])
        {
            A[ptr+1] = A[ptr];
            ptr = ptr - 1;
        }
        A[ptr + 1] = temp;
    }
    cout << "\n After sorting : " << endl;
    for(k=1; k<=n ; k++)
    {
        cout << A[k] << ", " ;
    }
}

int main()
{
    insertion obj;
    obj.input();
    obj.inserting();
    return 0;
}
