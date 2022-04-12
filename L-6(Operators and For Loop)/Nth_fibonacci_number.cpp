#include <iostream>
using namespace std;

int main()
{
    // Write your code here.
    int n;
    cin >> n;

    int t1 = 1;
    int t2 = 1;
    int t3 = 0;

    for (int i = 2; i <= n; i++)
    {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
cout << t1 << endl;
    }

    return 0;
}