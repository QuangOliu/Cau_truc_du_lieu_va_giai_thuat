#include<iostream>
using namespace std;
bool OK = false;
int C[50],b[50], n, k,dem=0;
void in(){
    for(int i=1;i<=k;i++) if(b[C[i]]==0)dem++;
//    cout<<dem;
}
void sinhketiep(){
    int i = k;
    while(C[i] == n-k+i) i--;
    if(i == 0) OK = true;
    else{
        C[i]++;
        if(b[C[i]]==0)dem++;
        for(int j = i+1; j <= k; j++) {
        C[j] = C[j-1] + 1;
		 if(b[C[j]]==0)dem++;	
		}
    }
}
main(){
	int t;
	cin>>t;
	while(t--)
	{
		cin >> n >> k;
    for(int i = 1; i <= k; i++) {
    	cin>>C[i] ;
    	b[C[i]]++;
	}
    
    
//    	if(dem%n==0)cout<<"1"<<endl;
//        dem++;
        
        sinhketiep();
		//in();
		if(dem==0)cout<<k;
		else cout<<dem;
    
    OK=false;
    cout<<endl;
    dem=0;
    for(int i=0;i<50;i++)b[i]=0;
	}
    
    return 0;
}
