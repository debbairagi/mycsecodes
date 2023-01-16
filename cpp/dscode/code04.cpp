///A program that can count the characters in a string.

#include<iostream>
using namespace std;

class bindu
{
    public:
    string deb;
    int i, count = 0;
    void input();
    void debbi(); //Count Character
};

void bindu::input(void)
{
    cout << "Enter your desired string: ";
    getline(cin, deb);
}

void bindu::debbi(void)
{
    for(i=0; i < deb.length() ; i++)
    {
        if(deb[i] != ' ')
        {
            count++;
        }
    }
    cout << "The total number of characters are : " << count << endl;
    
}

int main()
{
    bindu obj;
    obj.input();
    obj.debbi();

    return 0;
}