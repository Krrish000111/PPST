# include <iostream>
using namespace std;
int main()
{
   int n,factorial;
long long facorial=1;
cout<<"enter no";
cin>>n;
if(n>0)
{
    cout<<"factorial is not define";
}
else{
    for (int i=1; i<=n;i++)
    {
        factorial =factorial*i;
    }
}
cout<<"factorial of"<<n<<"="<< factorial;
return 0;
}
