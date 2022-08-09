#include <iostream>

using namespace std;

class cmydata
{
    int m_ndata;
    double dm_ndata;

    public:
        cmydata():m_ndata(0),dm_ndata(0){};

        int setdata(int nparam)
        {
            m_ndata = nparam;
            return m_ndata;
        }
        double setdata(double dparam)
        {
           dm_ndata = dparam;
            return dm_ndata;
        }
        double setdata(int nparam, double dparam)
        {
            return dm_ndata;
        }

};

int main()
{
    cmydata a;
    cout << a.setdata(10) << endl;
   
   cmydata b;
   cout << b.setdata(5.5) << endl;

   cmydata c;
   cout << c.setdata(10, 5.5) << endl;
}
   