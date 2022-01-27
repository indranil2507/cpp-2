#include <iostream>
using namespace std;
int maxComposite(int n)
{
    if(n<4 || n==5 || n==7 || n==9 || n==11)
    {
        return 0;
    }
    int count =0;
    while(n>0){
        cout<<n<<" "<<count;
        if(n%4==0){
            count=count+(n/4);
            n=0;
        }
        else if(n%4==1){
            count++;
            n=n-9;
        }
        else if(n%4==2){
            count++;
            n=n-6;
        }
        else{
            count=count+2;
            n=n-15;
        }
    }
    return count;
}
int main() {
	 int n = 90;
    cout << maxComposite(n) << endl;
 
    n = 143;
    cout << maxComposite(n) << endl;
    return 0;
}