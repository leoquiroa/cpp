# include <bits/stdc++.h>
using namespace std;
int main ()
{
    /*  Given an array of n elements, find the majority element.
        A majority element occurs at least n/2 + 1 times.
        If it doesn't exist print -1.
    */
    
    
    //int n=11;
    //int A[]={0,1,1,4,5,1,6,6,1,1,3,1};
    // sorted 0,1,1,1,1,1,1,3,4,5,6,6

    //int n=16;
    //int A[]={0,1,1,4,5,1,6,6,1,1,3,1,6,6,6,6,6};

    int n=19;
    int A[]={0,1,1,4,5,1,6,6,1,1,3,1,6,6,6,6,6,6,6,6};

    sort (A+1, A+n+1);

    // A[n/2+1] can be the majority element
    int majorityElement=A[n/2+1];
    int nrOccurrences=0;

    for (int i=1; i<=n; ++i)
        if (A[i]==majorityElement) 
            ++nrOccurrences;

    if (nrOccurrences >= (n/2 + 1)) {
        cout<<"The majority element is "<<majorityElement;
        cout<<" and it appears "<<nrOccurrences<<" times";
        cout<<"\n";
    } else {
        cout<<"There is no majority"; 
        cout<<"-1\n";
    }

    return 0;
}
