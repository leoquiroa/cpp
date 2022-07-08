# include <bits/stdc++.h>
using namespace std;
#include <iostream>

ifstream f("data.in");
ofstream g("data.out");

int A[1000], numberElements, searchVal;

int BinarySearch (int X) {
    int Left=1, Right=numberElements, mid;

    while (Left <= Right) {
        mid=(Left + Right) / 2;

        if (X==A[mid]){
            cout << "Found it: " << "\n";
            cout << mid;   // we have found X
            cout << "\n";
            return 1;
        }
        else if (X<A[mid]) 
            Right = mid-1; // we discard the second half of the array and the middle element
        else 
            Left = mid+1; // we discard the first half of the array and the middle element
    }
    return -1;
}

int main ()
{

    cout << "Type a number: "; // Type a number and press enter
    cin >> numberElements; // Get user input from the keyboard

    // array A is in ascending order
    cout << "Type all the new members in ascending order" << "\n";
    for (int ix=1; ix<=numberElements; ++ix){
        cout << "The " << ix << " member: ";
        cin >> A[ix];
    }
        
    cout << "Type the member to search: " << "\n";
    cin >> searchVal;
    BinarySearch(searchVal);

    return 0;
}
