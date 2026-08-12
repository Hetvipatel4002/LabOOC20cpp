#include<iostream>
#include<string>
using namespace std;
class product
{
    private:
        int id,price,quantity,total;
        string name;
    public:
        void inputdetails()
        {
            cout<<"enter product name="<<endl;
            cin>>name;
            cout<<"enter product id="<<endl;
            cin>>id;
            cout<<"enter product price="<<endl;
            cin>>price;
            cout<<"enter quantity="<<endl;
            cin>>quantity;
        }
        void displaydetails()
        {
            total=quantity*price;
            cout<<"total="<<total<<endl;
        }
        void bill()
        {
            cout<<".....PRODUCT BILL......"<<endl;
            cout<<"NAME="<<name<<endl;
            cout<<"ID="<<id<<endl;
            cout<<"QUANTITY="<<quantity<<endl;
            cout<<"PRICE="<<price<<endl;
            cout<<"TOTAL="<<total<<endl;
        }
};
int main()
{
    product p1;
    p1.inputdetails();
    p1.displaydetails();
    p1.bill();
}