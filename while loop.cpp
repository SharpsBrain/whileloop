#include <iostream>

using namespace std;

int main()
{
   /* while (condition){
        statements
    }*/
    /*int k=5;
    while(k!=0){
        cout<<k<<endl;
        k=k-1;
    }*/
   /* int t=5;
    cout<<"I am going to print the value of variable t in descendinig order"<<endl;
    while(t!=0){
        cout<<t<<endl;
        t=t-1;
    }*/
    //to print the table of 10 using while loop :
    /*int t=1,k=10;
    cout<<"Table of 10 "<<endl;
    while(t!=11){
        cout<<"10 X "<<t<<"="<<k*t<<endl;
        t=t+1;*/
        //infinite while loop:
       /* int i=1;
        while(i<=6){
            cout<<"Value of variable i is:"<<i<<endl;
            i--;

        }
*/
//nested while loop:

//using while loop find the perfect numbers between 1-500:
int i=1,u=1,sum=1;
cout<<"\nThe perfect numbers between 1 and 500 are\n";
while(i<=500){
    while(u<=500){
        if(u<i){
            if(i%u==0)
                sum=sum+u;
        }
        u++;
    }
    if(sum==i){
    cout<<i<<"  "<<"\n";
    }
    i++;
    u=1;
    sum=0;

}


    return 0;
}
