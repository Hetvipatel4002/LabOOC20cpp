#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
        string name;
        int roll;
        float marks;
    public:
        void inputdetails()
        {
            cout<<"enter student name="<<endl;
            getline(cin>>ws,name);
            cout<<"enter roll number="<<endl;
            cin>>roll;
            cout<<"enter marks="<<endl;
            cin>>marks;
        }
        void displaydetails()
        const
        {
            cout<<".........STUDENT DETAILS......."<<endl;
            cout<<"name="<<name<<endl;
            cout<<"roll no="<<roll<<endl;
            cout<<"marks="<<marks<<endl;
        }
    };
    int main()
    {
        student s,s1,s2;;
        s.inputdetails();
        s.displaydetails();
        s1.inputdetails();
        s1.displaydetails();
        s2.inputdetails();
        s2.displaydetails();
        return 0;
    }