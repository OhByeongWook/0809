#include <iostream>

using namespace std;

class ctest
{
    int m_ndata = 0;
    public:
        ctest(int nparam) : m_ndata(nparam){};
        ~ctest(){}

        int getdata() const
        {
            return m_ndata;
        }
        int setdata(int nparam)
        {
            m_ndata = nparam;
            return 0;
        }

};

int main()
{
    ctest a(10);
    cout << a.getdata() << endl;

    return 0;
}