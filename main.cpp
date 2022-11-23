#include <iostream>
using namespace std;

int main(){
    int n;
    int p=1,s=1;
    cin>>n;
    if(n>=2)
    {
        cout<<p<<endl<<s<<endl;
        int i=3;
        while(i++,i<=n)
        {
            cout<<p+s<<endl;
            if(p<s)
            {
                p+=s;
            }
            else
            {
               s+=p;
            }
        }
    }
    else
    {
        cout<<"ERRORE";
    }
    return 0;
}
