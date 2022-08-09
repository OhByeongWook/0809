#include <iostream>

using namespace std;

class cmydata
{
    private:
        int m_ndata;
    public:
        cmydata(int nparam) : m_ndata(nparam){};
        cmydata(int x, int y) : m_ndata(x + y){};

        int getdata()
        {
            return m_ndata;
        }
};

int main()
{
    cmydata a(10);
    cmydata b(3,4);

    cout << a.getdata() << endl;
    cout << b.getdata() << endl;

    return 0;
}