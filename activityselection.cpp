#include<bits/stdc++.h>
using namespace std;
 struct Activity{
     int start,finish;
 };
 bool activityCompare( Activity s1, Activity s2){
     return(s1.finish<s2.finish);
 }
void activityselection(Activity arr[], int n)
{
    sort(arr,arr+n,activityCompare);
    cout<<"selected activities are";
    int i=0;
    cout<<arr[i].start<<":"<<arr[i].finish;
    for(int j=1;j<n;j++){
        if(arr[j].start>=arr[i].finish){
             cout<<arr[j].start<<":"<<arr[j].finish;
             i=j;
        }
    }
}
int main()
{
    cout<<"enter no of tasks";
    int n;
    cin>>n;
    Activity arr[n];
    cout<<"enter tasks";
    for(int i=0;i<n;i++){
        cin>>arr[i].start;
        cin>>arr[i].finish;
    }
    activityselection(arr,n);
}