#include <iostream>
using namespace std;


void summation()
{
    int no = 0;
    cin >> no;

    if (1 <= no && no <= 1000)
    {
        cout << (no * (no + 1) / 2);
    }
}