#include <iostream>

using namespace std;

class ctest
{
    int m_ndata;
    public:
        ctest()
        {
            cout << "ctest::ctest()" << endl;
        }
        ~ctest()
        {
            cout << "~ctest::ctest()" << endl;
        }
};

int main()
{
    cout << "Begin" << endl;
    ctest *pdata = new ctest[3];
    cout << "test" << endl;

    delete[] pdata;
    cout << "end";
}