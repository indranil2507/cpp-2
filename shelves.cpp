// C++ program to find minimum space and units
// of two shelves to fill a wall.
#include <bits/stdc++.h>
using namespace std;

void minSpacePreferLarge(int wall, int m, int n)
{
	// for simplicity, Assuming m is always smaller than n
	// initializing output variables
    
    int m_num=0,n_num=0,space=wall;
    int p=wall/m;
    int waste=wall%m;
    int q=0;

    
    m_num=p;
    n_num=q;
    space=waste;

    while(wall>=n){
        q++;
        wall=wall-n;
        p=wall/m;
        waste=wall%m;
        if(waste<=space){
            m_num=p;
            n_num=q;
            space=waste;
        }
    }

    cout<<" "<<m_num<<" "<<n_num<<" "<<space<<endl;


}

// Driver code
int main()
{
	int wall = 29, m = 3, n = 9;
	minSpacePreferLarge(wall, m, n);

	wall = 76, m = 1, n = 10;
	minSpacePreferLarge(wall, m, n);
	return 0;
}
