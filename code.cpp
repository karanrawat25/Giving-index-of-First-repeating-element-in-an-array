#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=-1;
    }
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(b[a[i]]!=-1)
        {
            mn=min(mn,b[a[i]]);
        }
        else
        {
            b[a[i]]=i;
        }

    }
    if(mn==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<mn+1<<endl;
    }
}

