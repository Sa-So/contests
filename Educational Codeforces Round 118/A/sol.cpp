// x1*10^p1
// x2*10^p2

// count no. of digits in x1 + p1 = num1
// num2 = x2 + p2

// x1/10^c * 10^p
// x2

// p1 = p2 


#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;

    while(t--){
        long long x1,p1;
        cin>>x1>>p1;
        long long x2,p2;
        cin>>x2>>p2;

        int count1=0;
            int temp1=x1,temp2=x2;
            while(temp1){
                temp1/=10;
                count1++;
            }
            int count2=0;
            while(temp2){
                temp2/=10;
                count2++;
            }
            // cout<<"ct2:"<<count2<<endl;

        if(p1==p2){
            if(x1>x2){
                cout<<">\n";
            }
            else if(x1<x2){
                cout<<"<\n";
            }
            else{
                cout<<"=\n";
            }
        }
        else {
            // cout<<"f";
            // int dif = p2 - p1;
            // int count1=0;
            // int temp1=p1,temp2=p2;
            // while(temp1){
            //     temp1/=10;
            //     count1++;
            // }
            // int count2=0;
            // while(temp2){
            //     temp2/=10;
            //     count2++;
            // }
            if(count1+p1>count2+p2){
                cout<<">\n";
                // cout<<"f";
            }
            else if(count1+p1<count2+p2){
                cout<<"<\n";
                // cout<<"f";
            }
            else{
                // digits are same 
                // digits in x
                if(count2>count1){
                    int diffy = count2-count1;
                    x1=x1*(pow(10,diffy));
                    // cout<<"x1 : "<<x1<<" "<<x2;
                    if(x1>x2){
                        cout<<">\n";
                    }
                    else if(x1<x2){
                        cout<<"<\n";
                    }
                    else{
                        cout<<"=\n";
                    }
                }
                else if(count2<count1){
                    // swap(count1,count2);
                    // swap(x1,x2)
                    // cout<<"sx1 : "<<x1<<" "<<x2;
                    int diffy = count1-count2;
                    x2=x2*(pow(10,diffy));
                    if(x1>x2){
                        cout<<">\n";
                    }
                    else if(x1<x2){
                        cout<<"<\n";
                    }
                    else{
                        cout<<"=\n";
                    }
                }
                else{
                    // int diffy = count2-count1;
                    // x1=x1*(pow(10,diffy));
                    if(x1>x2){
                        cout<<">\n";
                    }
                    else if(x1<x2){
                        cout<<"<\n";
                    }
                    else{
                        cout<<"=\n";
                    }
                }
                
            }
        }
        /*
        else if(p1>p2){
            // cout<<"f";
            // swap(p1,p2);
            // swap(count1,count2);
            // cout<<count1<<" "<<p1<<endl;
            // cout<<count2<<" "<<p2<<endl;

            // swap(p1,p2);
            // swap(x1,x2);
            // swap(count1,count2);

            if(count1+p1>count2+p2){
                // cout<<"f";
                cout<<">\n";
            }
            else if(count1+p1<count2+p2){
                // cout<<"g";
                cout<<"<\n";
            }
            else{
                if(count2>count1){
                    int diffy = count2-count1;
                    x2=x2/(pow(10,diffy));
                    if(x1>x2){
                        cout<<">\n";
                    }
                    else if(x1<x2){
                        cout<<"<\n";
                    }
                    else{
                        cout<<"=\n";
                    }
                }
                else if(count2<count1){
                    // swap(count1,count2);
                    // swap(x1,x2)
                    int diffy = count1-count2;
                    x1=x1/(pow(10,diffy));
                    if(x1>x2){
                        cout<<">\n";
                    }
                    else if(x1<x2){
                        cout<<"<\n";
                    }
                    else{
                        cout<<"=\n";
                    }
                }
                else{
                    // int diffy = count2-count1;
                    // x1=x1*(pow(10,diffy));
                    if(x1>x2){
                        cout<<">\n";
                    }
                    else if(x1<x2){
                        cout<<"<\n";
                    }
                    else{
                        cout<<"=\n";
                    }
                }
                
            }
        }
        */
        
        // if(x1==x2 && p1==p2){
        //     cout<<"=\n";
        // }
        // else if(x1>x2 && p1==p2){
        //     cout<<">\n";
        // }
        // else if(x1<x2 && p1 ==p2){
        //     cout<<"<\n";
        // }
        /*
        else if(p1<p2){
            int dif = p2 - p1;
            int count1=0;
            int temp1=p1,temp2=p2;
            while(temp1){
                temp1/=10;
                count1++;
            }
            int count2=0;
            while(temp2){
                temp2/=10;
                count2++;
            }
            int difx = abs(count2-count1);

            if(count2>=count1){
                cout<<"<\n";
            }
            else{
                int difx = count1-count2;
                if(difx==dif){
                    if(x1<x2){
                        cout<<"<\n";
                    }
                    else if(x1>x2){
                        cout<<">\n";
                    }
                    else{
                        cout<<"=\n";
                    }
                }
                if(difx>dif){
                    cout<<">\n";
                }
                else{
                    cout<<"<\n";
                }
            }

        }
        else if(p1>p2){
            swap(p1,p2);
            int temp1=p1,temp2=p2;
            int dif = abs(p2 - p1);
            int count1=0;
            while(temp1){
                temp1/=10;
                count1++;
            }
            int count2=0;
            while(temp2){
                temp2/=10;
                count2++;
            }
            int difx = abs(count2-count1);

            if(count2>=count1){
                cout<<"<\n";
            }
            else{
                int difx = count1-count2;
                if(difx==dif){
                    if(x1<x2){
                        cout<<"<\n";
                    }
                    else if(x1>x2){
                        cout<<">\n";
                    }
                    else{
                        cout<<"=\n";
                    }
                }
                if(difx>dif){
                    cout<<">\n";
                }
                else{
                    cout<<"<\n";
                }
            }
        }
        /*
        else if(p1<p2 ){
            int dif = p2-p1;
            int temp1 = x1;
            int temp2 = x2;

            while(temp2 && temp1){
                temp1/=10;
                temp2/=10;
            }
            if(temp1 == 0){
                if(temp2 == 0){
                    if(x1<x2)
                    cout<<"<\n";
                    else if(x1>x2){
                        cout<<">\n";
                    }
                }
                else{
                    cout<<"<\n";
                }
            }
            else if(temp2==0){
                cout<<">\n";
            }
            
        }
        else if(p2>p1){
            swap(p1,p2);
            int dif = p2-p1;
            int temp1 = x1;
            int temp2 = x2;

            while(temp2 && temp1){
                temp1/=10;
                temp2/=10;
            }
            if(temp1 == 0){
                if(temp2 == 0){
                    if(x1<x2)
                    cout<<"<\n";
                    else if(x1>x2){
                        cout<<">\n";
                    }
                }
                else{
                    cout<<"<\n";
                }
            }
            else if(temp2==0){
                cout<<">\n";
            }
        }
        */

    }
	return 0;
}

