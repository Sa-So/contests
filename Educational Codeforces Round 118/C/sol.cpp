
#include <iostream>
using namespace std;

long long total_damage(long long k,long long A[],int n){
    long long dmg=0;
    for(int i=1;i<n;i++){
        if(A[i]-A[i-1]>=k){
            dmg+=k;
        }
        else{
            dmg+=A[i]-A[i-1];
        }
        // 4 6 => 2
    }

    return dmg+k;
}

int main() {
	// your code goes here

    // k
    // find min/max value of something
    // montonic func
    // n => seconds at which u will shoot
    // h health of dragon
    // 4th - k = 4  6th sec 4 5 6 7 8 9
    // k
    // 0....k k+1...
    // 0 0 0 0 0 1 1 1 1 1
    int t;
    cin>>t;
    while(t--){
        int n;
        long long h;

        cin>>n>>h;
        long long A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        long long l=0,r=h,ans;
        // 2
        while(r>=l){
            // long long mid = (l+r)/2;
            long long mid = l+(r-l)/2;
            // cout<<mid<<" td :"<<total_damage(mid,A,n)<<" ";
            // if(total_damage(mid,A,n)==h){
            //     cout<<"f";
            //     ans = mid;
            //     break;
            // }
            if(total_damage(mid,A,n)>=h){
                ans = mid;
                // cout<<" satisfies "<<endl;
                r=mid-1;
            }
            else {
                // cout<<"not satisfies "<<endl;
                l=mid+1;
            }
        }
        cout<<ans<<"\n";

    }
     
    

 	return 0;
}

