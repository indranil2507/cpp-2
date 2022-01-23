#include<bits/stdc++.h>
using namespace std;

 

void activityselection(double arr[], int n, double P)
{
    priority_queue<int,vector<int>,greater<int>> volumes;
    int j=1;
    double res[n];

    
  
    for(int i=0;i<n;i++){
        volumes.push(arr[i]);
        
    }
    while(!volumes.empty()){
        cout<<volumes.top()<<" ";
        res[j]=volumes.top();
        j++; 
        volumes.pop();


    }
    double result=0;

    for(int i=n;i>=1;i--){
        result += pow((1 - P), n - i) * res[i];   

    }

    cout<<result;
}
int main()
{
    cout<<"enter no of tasks";
    int n;
    cin>>n;
    double arr[n];
    cout<<"enter tasks";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    double p;
    cout<<"enter percentage";
    cin>>p;
     
    activityselection(arr,n,p);
}