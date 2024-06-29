#include<iostream>
using namespace std;
void Tower ( int n, char source ,char destination,char helper)
{
    if(n==1)
    {
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    }
    else if(n==0)
    {
        return;
    }
    Tower(n-1,source,helper,destination);
    cout<<"Move disk " <<n-1<<" from "<<source<<" to "<<helper<<endl;
    Tower(n-1,helper,destination,source);
}
int main()
{
    system("cls");
    int n;
    char source,destination,helper;
    cout<<"Enter the number of disks";
    cin>>n;
    cout<<endl<<"Enter the name of source ,destination and helper tower respectively";
    cin>>source>>destination>>helper;
    Tower(n,source,destination,helper);
    return 0;
}