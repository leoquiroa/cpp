# include <bits/stdc++.h>
using namespace std;

struct Student
{
    int ID; 
    int year;
    char name[20];

    Student ()
    {
        ID=6; 
        year=2017;
        // memset (array_name, 0, sizeof(array_name));
        memset (name, 0, sizeof(name));
    }
}student1;

int main ()
{
    cout<<"student1"<<"\n";
    cout<<student1.ID<<"-"<<student1.year<<"-"<<student1.name<<"\n";

    cout<<"student2"<<"\n";
    Student stu22;
    cout<<stu22.ID<<"-"<<stu22.year<<"-"<<stu22.name<<"\n";

    return 0;
}
