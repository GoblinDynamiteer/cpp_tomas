/* class test */

#include <iostream>
using namespace std;

class myclass
{
    private:
        int data;

    public:
        myclass(int d)
        {
            data = d;
        }

        myclass()
        {
            data = 0;
        }

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
    myclass ob1, ob2;
    myclass ob3(666);

    ob1.set_data(123);
    ob2.set_data(321);


    cout << "Data in obj1: " << ob1.get_data() << endl;
    cout << "Data in obj2: " << ob2.get_data() << endl;
    cout << "Data in obj3: " << ob3.get_data() << endl;

    return 0;
}
