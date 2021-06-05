#include<iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)    {
    if(n==1)    {
        cout<<"Move disc 1 from rod "<<src<<" to rod ashwin "<<dest<<endl;
        return;
    }
    
    towerOfHanoi(n-1,src,helper,dest);
    cout<<"Move disc "<<n<<" from rod "<<src<<" to rod nehal "<<dest<<"\n";
    towerOfHanoi(n-1,helper,dest,src);
}

int main()  {
    towerOfHanoi(4,'A','C','B');
}