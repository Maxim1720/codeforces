#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    bool r[t];
    
    for(int i=0;i<t;i++)
    {
        r[i] = false;
        
        int n;
        cin>>n;
        int w[n];
        int sum = 0;
        
        for(int j=0;j<n;j++)
        {
            cin>>w[j];
            sum+=w[j];
        }
        
        if(sum%2==0 && n%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

