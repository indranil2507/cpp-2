#include<bits/stdc++.h>
using namespace std;
struct Job{
    char id;
    int dead;
    int profit;
 };
 bool activityCompare(Job s1,Job s2){
     return(s1.profit>s2.profit);
 }
void activityselection(Job arr[], int n)
{
    sort(arr,arr+n,activityCompare);
    int slot[n];
    int result[n];
    for(int i=0;i<n;i++){
        slot[i]=0; 
    }
    for(int i=0;i<n;i++){
        for(int j=min(n,arr[i].dead)-1;j>=0;j--){
            if(slot[j]==0){
                result[j]=i;
                slot[j]=1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(slot[i]){
            cout<<arr[result[i]].id<<" "; 
        }
        
    }
}
int main()
{
    cout<<"enter no of tasks";
    int n;
    cin>>n;
    Job arr[n];
    cout<<"enter tasks";
    for(int i=0;i<n;i++){
        cin>>arr[i].id;
        cin>>arr[i].dead;
        cin>>arr[i].profit;
    }
    activityselection(arr,n);
}