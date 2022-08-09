#include <iostream>

using namespace std;

class ctest
{
    public:
        ctest(void);
        int m_ndata = 5;
};

ctest::ctest(void){};

int main()
{
    ctest a;
    cout << a.m_ndata << endl;

    return 0;
}