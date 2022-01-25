// C++ program to find maximum number of thieves
// caught
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Returns maximum number of thieves that can
// be caught.
int policeThief(char arr[], int n, int k)
{
    
    int res=0;
    vector<int> pol;
    vector<int> thi;
     for(int i=0;i<n;i++){
         if(arr[i]=='P')
            pol.push_back(i);
        else
            thi.push_back(i);
     }

     int l=0,r=0;

     while(l<pol.size() && r<thi.size()){
         if(abs(pol[l]-thi[l])<=k){
             res++;
             l++;
             r++;
         }
         else if(pol[l]<thi[r]){
             l++;

         }
         else
            r++;
     }

     return res;

}

// Driver program
int main()
{
	int k, n;

	char arr1[] = { 'P', 'T', 'T', 'P', 'T' };
	k = 2;
	n = sizeof(arr1) / sizeof(arr1[0]);
	cout << "Maximum thieves caught: "
		<< policeThief(arr1, n, k) << endl;

	char arr2[] = { 'T', 'T', 'P', 'P', 'T', 'P' };
	k = 2;
	n = sizeof(arr2) / sizeof(arr2[0]);
	cout << "Maximum thieves caught: "
		<< policeThief(arr2, n, k) << endl;

	char arr3[] = { 'P', 'T', 'P', 'T', 'T', 'P' };
	k = 3;
	n = sizeof(arr3) / sizeof(arr3[0]);
	cout << "Maximum thieves caught: "
		<< policeThief(arr3, n, k) << endl;

	return 0;
}
