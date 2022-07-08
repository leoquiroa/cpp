# include <bits/stdc++.h>
using namespace std;

struct Product
{
    double price;
    char name[20];

    //constructor 1
    Product ()
    {
        price=0;
        memset (name, 0, sizeof(name));
    }

    //constructor 2
    Product (double newPrice)
    {
        price=newPrice;
    }

    //constructor 3
    Product (int newPrice)
    {
        price=newPrice + 10;
    }

    //constructor 4
    Product (char newName[], double newPrice)
    {
        price=newPrice;
        memset(name, 0, sizeof(name));
        strcpy (name, newName);
    }
}Y(3.6);

int main ()
{
    //default
    cout<<"Default: "<<Y.name<<"-"<<Y.price<<"\n";
    
    //constructor 1
    Product X1;
    cout<<"C1: "<<X1.name<<"-"<<X1.price<<"\n";

    //constructor 2
    Product X2(19.87);
    cout<<"C2: "<<X2.name<<"-"<<X2.price<<"\n";

    //constructor 3
    Product X3(1987);
    cout<<"C3: "<<X3.name<<"-"<<X3.price<<"\n";

    //constructor 4
    Product X4("apple", 2.5);
    cout<<"C4: "<<X4.name<<"-"<<X4.price<<"\n";


    return 0;
}
