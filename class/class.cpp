/* class test */

#include <iostream>
using namespace std;

class myobj
{
    private:
        int data;

    public:
        void set_data(int d)
        {
            data = d;
        }

        int get_data(void)
        {
            return data;
        }
};

int main()
{
    myobj ob1, ob2;

    ob1.set_data(123);
    ob2.set_data(321);

    cout << "Data in obj1: " << ob1.get_data() << endl;
    cout << "Data in obj2: " << ob2.get_data() << endl;

    return 0;
}
