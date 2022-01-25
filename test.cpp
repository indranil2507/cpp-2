// C++ program to find maximum array sum
// after at most k negations.
#include <bits/stdc++.h>

using namespace std;

int sol(int arr[], int n, int k)
{
	int sum = 0;
	int i = 0;

	// Sorting given array using in-built
	// sort function
	sort(arr, arr + n);
	while (k > 0)
	{
		// If we find a 0 in our
		// sorted array, we stop
		if (arr[i] >= 0)
			k = 0;
		else
		{
			arr[i] = (-1) * arr[i];
			k = k - 1;
		}
		i++;
		
	}

	// Calculating sum
	for(int j = 0; j < n; j++)
	{
		sum += arr[j];
	}
	return sum;
}

// Driver code
int main()
{
	int arr[] = { -2, 0, 5, -1, 2 };

	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << sol(arr, n, 4) << endl;

	return 0;
}

// This code is contributed by pratham76
