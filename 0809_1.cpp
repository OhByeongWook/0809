#include <iostream>

using namespace std;

class ctest
{
    int m_ndata;

    public:
        ctest(int nparam1, int nparam2)
        {
            cout << "nparam1 = " << nparam1 << endl;
            cout << "nparam2 = " << nparam2 << endl;
        }
        ~ctest()
        {
            cout << "~ctest::ctest()" << m_ndata << endl;
        }
};

int main()
{
   
    ctest a(1,2);
    ctest b(3,4);
    ctest c(5,6);
 

    return 0;
}