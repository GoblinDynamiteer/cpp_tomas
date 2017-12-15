/* namespace test */

#include <iostream>
using namespace std;

namespace space_one
{
    int add(int a, int b)
    {
        return a + b;
    }
}

namespace space_two
{
    int sub(int a, int b)
    {
        return a - b;
    }
}


using namespace space_two;

int main()
{
    int x = 2, y = 1;

    cout << x << "+" << y << "=" << space_one::add(x, y) << endl;
    cout << x << "-" << y << "=" << sub(x, y) << endl;

    return 0;
}
