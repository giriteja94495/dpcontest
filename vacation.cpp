#include<bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
    	
        int n;
        cin>>n;
        vector<long> a(n);
        vector<long> b(n);
        vector<long> c(n);
        for(int i=0;i<n;i++){
        	cin>>a[i]>>b[i]>>c[i];
		}
        long dp[n][3];
        dp[0][0]=a[0];
        dp[0][1]=b[0];
        dp[0][2]=c[0];
        for(int i=1;i<n;i++){	
		  dp[i][0]=max(dp[i-1][1],dp[i-1][2])+a[i];
		  dp[i][1]=max(dp[i-1][0],dp[i-1][2])+b[i];
		  dp[i][2]=max(dp[i-1][0],dp[i-1][1])+c[i];
		}
		long val=max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
		cout<<val<<endl;
		return 0;
    }
