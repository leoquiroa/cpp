# include <bits/stdc++.h>
using namespace std;
int i,n,j;
int A[1005];

int main ()
{
    cout<<"The total number of elements" << "\n";
    cin>>n;
    for (i=0; i<n; ++i){
        cout << i << " Element: ";
        cin>>A[i];
    }

    for (i=0; i<n; ++i)
        for (j=i+1; j<n; ++j)
            if (A[i] > A[j]) 
                swap(A[i], A[j]);

    cout << "Sorted" << "\n";
    for (i=0; i<n; ++i)
        cout<<A[i]<<" ";
    cout << "\n";

    return 0;
}
