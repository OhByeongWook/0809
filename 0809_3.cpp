#include <iostream>

using namespace std;

class creftest
{
    private:
        int& m_ndata;
    public:
        creftest(int& rparam):m_ndata(rparam){}; //m_ndata = rparam
        int getdata(void)
        {
            return m_ndata;  
        }
};

int main()
{
    int a = 10;
    creftest t(a);

    cout << t.getdata() << endl;

    a = 20;
    cout << t.getdata() << endl;

}