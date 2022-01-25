#include<bits/stdc++.h>
using namespace std;

void sum(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int i=0;
    int sum=0;
    while(k>0){
        if(arr[i]==0){
            break;
        }
        else
            arr[i]=-arr[i];
        i++;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
int main()
{
    int arr[] = { -2, 0, 5, -1, 2 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    sum(arr, n, k);
    return 0;
}