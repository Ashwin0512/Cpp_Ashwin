#include<iostream>
using namespace std;

int main()  {
    int n;
    cin>>n;
    cin.ignore();
    
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen=0, maxLen=0, st=0, maxSt=0;

    while(i<n)  {
        if(arr[i]==' ' || arr[i]=='\0') {
            if(currLen > maxLen)    {
                maxSt = st;
                maxLen = currLen;
            }
            st = i+1;
            currLen=0;
        } else  {
            currLen++;
        }

        if(arr[i] == '\0')  {
            break;
        }
        i++;
    }

    cout<< maxLen<<"\n";
    for(int i=0 ; i<maxLen; i++)    {
        cout<<arr[maxSt + i];
    }
}