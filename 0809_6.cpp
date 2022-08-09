#include <iostream>

using namespace std;

class menu
{
    int choice;
    int sum;
    int num;
    int price;

    public:
        menu()
        { 
            choice = sum =  num = price = 0;
        }
        void input_cal_data()
        {
        cout << "choice of menu===========" << endl;
		cout << "1. Americano(3,000)" << endl;
		cout << "2. Ice Americano(3,500)" << endl;
		cout << "3. Cafe Latte(3,000)" << endl;
		cout << "4. Dezawa(700)" << endl;;
		cout << "5. Caramel Macchiato (4,300)" << endl;
		cout << "6. Blue Lemonade (3,500)" << endl;
		cout << "0. End" << endl;
        cin >> choice;
        cout << "input glasses" << endl;
        cin >> num;
        }

        void input_cal()
        {
            switch(choice){
			case 1:
				price = 3000;
				break;
			case 2:			
				price = 3500;
				break;
			case 3:
				price = 3800;
				break;
			case 4:
				price = 700;
				break;
			case 5:
				price = 4300;
				break;
			case 6:
				price = 3500;
				break;
			default:
				break;
		}
		
		sum = (price * num);
        }
    void result()
    {
        cout << endl << "==========Bill==========" << endl;
        cout << price << " * " << num << " = " << sum << endl;
    }
};

int main()
{
    menu ex1;
    ex1.input_cal_data();
    ex1.input_cal();
    ex1.result();
}