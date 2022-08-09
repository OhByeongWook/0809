#include <iostream>

using namespace std;

class cmydata
{
    int m_ndata;

    public:
        cmydata(int nparam): m_ndata(nparam){};

        void printdata()
        {
            cout << m_ndata << endl;
            cout << cmydata:: m_ndata << endl;
            cout << this -> m_ndata << endl;
            cout << this -> cmydata:: m_ndata << endl;
        }

};

int main()
{
    cmydata a(5);
    a.printdata();
}