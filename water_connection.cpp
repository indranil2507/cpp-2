#include<bits/stdc++.h>
using namespace std;

int n,p;
int ip[1100];
int op[1100];
int dia[1000];

vector<int> a;
vector<int> b;
vector<int> c;

int ans;


int dfs(int w){
    cout<<w;
    if(ip[w]==0)
        return w;
    if(dia[w]<ans){
        ans=dia[w];
    }

    return(dfs(ip[w]));
}

void solve(int arr[][3]){
    int i=0;
    while (i<p){
        int x=arr[i][0];
        int y=arr[i][1];
        int z=arr[i][2];

        ip[x]=y;
        op[y]=x;
        dia[x]=z;
        
        cout<<x<<endl;
        
        cout<<y<<endl;
        cout<<z<<endl;
        i++;

    }
    for (int i=0;i<n;i++){
        cout<<ip[i]<<" ";
    }
    cout<<endl;
      for (int i=0;i<n;i++){
        cout<<op[i]<<" ";
    }
    cout<<endl;
      for (int i=0;i<n;i++){
        cout<<dia[i]<<" ";
    }
    cout<<endl;

     



    a.clear();
    b.clear();
    c.clear();


for (int j = 1; j <= n; ++j)
	
		/*If a pipe has no ending vertex
		but has starting vertex i.e is
		an outgoing pipe then we need
		to start DFS with this vertex.*/
		if (op[j] == 0 && ip[j]) {
			ans = 1000000000;
			int w = dfs(j);
			
			// We put the details of component
			// in final output array
			a.push_back(j);
			b.push_back(w);
			c.push_back(ans);
		}

       
    


    cout<<"no of pairs are:"<<a.size()<<endl;
    for(int j=0;j<a.size();++j){
        cout<<a[j]<<" "<<b[j]<<" "<<c[j]<<endl;
    }

    

}

int main()
{
    n = 9, p = 6;
 
    memset(ip, 0, sizeof(ip));
    memset(op, 0, sizeof(op));
    memset(dia, 0, sizeof(dia));
 
    int arr[][3] = { { 7, 4, 98 },
                    { 5, 9, 72 },
                    { 4, 6, 10 },
                    { 2, 8, 22 },
                    { 9, 7, 17 },
                    { 3, 1, 66 } };
 
    solve(arr);
    return 0;
}