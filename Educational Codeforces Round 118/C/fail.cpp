
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        
        // unsigned 

        // 2 3 4 
        // 4-2 = 2
        // 1 1 1 => 2
        long long n,h;
        cin>>n>>h;
        int A[n];
        int dif[n+1];
        dif[0]=0;
        cin>>A[0];
        long long min_dif = LONG_MAX;
        long long max_dif = LONG_MIN;
        long long sum_dif = 0;

        long long ans = h/n;
        // long long ans;
        if(h%n==0){
            ans = h/n;
        }
        else {
            ans = h/n + 1 ;
        }

        for(int i=1;i<n;i++){
            cin>>A[i];
            dif[i]=A[i]-A[i-1]; 
            if(dif[i]<min_dif) {
                min_dif=dif[i];
            }
            if(dif[i]>max_dif) {
                max_dif=dif[i];
            }
            sum_dif+=dif[i];
        }
        long long maxi_dif = sum_dif+max_dif;


        
        // 4 
        long long mini_dif = n*min_dif;
        if(h== mini_dif){
            cout<<min_dif<<endl;
        }
        else if(h>mini_dif){

        }
        // if(h==maxi_dif){
        //     cout<<max_dif<<" no \n";
        // }
        // else if(h>maxi_dif){
        //     cout<<max_dif+(h-maxi_dif)<<" yes \n";
        // }
        // else{
        //     cout<<"idk"<<"\n";
        // }
        /*
        if(ans<max_dif)
            cout<<ans<<"\n";
        else{
            // sum_dif ho sakta hai max agar max_dif rakhe to
            int rem = h-sum_dif;
            // if(rem>0){
                // cout<<m(max_dif,rem);
            // }
        }
        */
        



    }
	return 0;
}

