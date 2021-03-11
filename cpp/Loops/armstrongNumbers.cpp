#include<iostream> 
#include<cmath>
using namespace std;

int main()  {
    cout<<"Enter a number \n";
    int n;
    cin>>n;
    int temp=n;
    int sum=0;

    while(temp>0)   {
        int lastDigit=temp%10;
        sum += pow(lastDigit,3);
        temp/=10;
    }
    cout<<sum<<endl;
    if(sum==n)  {
        cout<<n<<" is an Armstrong number";
    }   else    {
        cout<<n<<" is NOT an Armstrong number";
    }
    return 0;
}