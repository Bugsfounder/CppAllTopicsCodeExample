#include <iostream>
using namespace std;

int myFunction(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}

// int main(int argc, char const *argv[])
// {
//     int sum = myFunction(-102);
//     cout << sum << endl;
//     return 0;
// }
