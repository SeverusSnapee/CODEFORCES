#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int d;
    for(int i=n+1;;++i){
        int flag=0;
        for(int j=2;j<i;++j){
            if(i%j==0){
                flag=1;
            }
        
        }
        if(flag==0){
            
                d=i;
                break;
            
        }
    }
    if(d==m)
		{		
			cout<<"YES"<<endl;
		}		
		else	
		{		
		    cout<<"NO"<<endl;	
		}
        return 0;
}