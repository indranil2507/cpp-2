#include<bits/stdc++.h>
using namespace std;
struct Job{
    int num;
    int loss;
    int time;
 };
 bool activityCompare(Job s1,Job s2){
     return(s1.loss*s2.time>s2.loss*s1.time);
 }

void activityselection(Job arr[], int n)
{
    stable_sort(arr,arr+n,activityCompare);

    cout<<"the order of doing the tasks are:";
  
    for(int i=0;i<n;i++){
        cout<<arr[i].num<<" ->";
        
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
        arr[i].num=i+1;
        cin>>arr[i].loss;
        cin>>arr[i].time;
    }
    activityselection(arr,n);
}