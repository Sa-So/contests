
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int find_no = n/2;
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]>maxi){
                maxi = A[i];
            }
            if(A[i]<mini){
                mini=A[i];
            }
        }
        sort(A,A+n,greater<int>());
        
        for(int i=0;i<find_no;i++){
            cout<<A[i]<<" "<<mini<<"\n";
        }

        a % min = 0 to min-1 < min
        
        // int B[maxi];
        // for(int i=0;i<maxi;i++){
        //     B[i]=0;
        // }

        /*
        vector<int> B(maxi,0);
        for(int i=0;i<n;i++){
            B[A[i]]++;
        }
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(count>=find_no){
                    break;
                }
                if(B[A[i]%A[j]]==0){
                    cout<<A[i]<<" "<<A[j]<<endl;
                    count++;
                }
                if(count>=find_no){
                    break;
                }
                if(B[A[j]%A[i]]==0){
                    cout<<A[j]<<" "<<A[i]<<endl;
                    count++;
                }
            }
            if(count>=find_no){
                break;
            }
        }
        */
        
        // for(int i=0;i<n;i++){
        //     if(A[])
        // }

    }

	return 0;
}

