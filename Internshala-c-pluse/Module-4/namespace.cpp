#include <iostream>

using namespace std;
namespace ForgetCode
{
    class A
    {
    public:
        A()
        {
            cout << "Welcome To ForgetCode!!" << endl;
        }
        void disp()
        {
            cout << "Its for you!!" << endl;
        }
    }; // just tell the compiler to expect a class def
}
namespace ForgetCode1
{
    class A
    {
    public:
        A()
        {
            cout << "Syntax Warehouse." << endl;
        }
        void disp()
        {
            cout << "Coding Made Simple!!!" << endl;
        }
    };

}

int main()
{
    using namespace ForgetCode;
    ForgetCode::A a;
    a.disp();
    using namespace ForgetCode1;
    ForgetCode1::A a1;
    a1.disp();
};
