# include <bits/stdc++.h>
using namespace std;

bool desc (int X, int Y)
{
    return X > Y; // descending order
}

bool asc (int X, int Y)
{
    return X < Y; // ascending order
}

int main ()
{
    //index  0  1  2  3  4   5  6
    int A[]={1, 4, 2, 0, 5, 10, 9};

    //sort(first position,last position+1,comparison function(optional))
    sort (A+0, A+7, desc);
    sort (A+0, A+7, asc);

    //printing the array
    for (int i=0; i<=6; ++i)
        cout<<A[i]<<" ";
    cout << "\n";

    return 0;
}
