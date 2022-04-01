    #include<bits/stdc++.h>
    using  namespace std;
    void meger(int a)
    {
        
    }
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n;
    		cin>>n;
    		int a[n];
    		for(auto &x:a)cin>>x;
    		vector<string>v[n];
    		v[0].push_back("[");
    		for(int i=0;i<n-1;i++)	v[0].push_back(to_string(a[i])+" ");
    		v[0].push_back(to_string(a[n-1])+"]");
    		for(int i=1;i<n;i++)
    		{
    			v[i].push_back("[");
    			for(int j=0;j<n-i;j++)
    			{
    				//cout<<a[j]+a[j+1];
    				v[i].push_back(to_string(a[j]+a[j+1]));
    				a[j]+=a[j+1];
    				if(j<n-i-1)v[i].push_back(" ");
    			}
    				v[i].push_back("]");
    			
    		}
    		for(int i=n-1;i>=0;i--)
    		{
    			for(auto x:v[i])cout<<x;
    			cout<<" ";
    		}
    		cout<<endl;
    	}
    }
