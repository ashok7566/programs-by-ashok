#include<iostream>
using namespace std;

int lcm(int, int, int);
int hcf(int, int, int);
int main()
{
        int a,b,c;
        int LCM, HCF;
        cout<<"Enter 1st number: ";
        cin>>a;
        cout<<"Enter 2nd number: ";
        cin>>b;
        cout<<"Enter 3rd number: ";
        cin>>c;

        LCM = lcm(a,b,c);
        HCF = hcf(a,b,c);
        cout<<"LCM of "<<a<<","<<b<<","<<c<<" is = "<<LCM<<endl;
        cout<<"HCF of "<<a<<","<<b<<","<<c<<" is = "<<HCF<<endl;
        return 0;
}

int lcm(int x,int y, int z)
{
        int max,lcm, count, flag=0;
        if(x>=y&&x>=z)
                max=x;
        else if(y>=x&&y>=z)
                max=y;
        else if(z>=x&&z>=y)
                max=z;
        for(count=1;flag==0;count++)
        {
                lcm=max*count;
                if(lcm%x==0 && lcm%y==0 && lcm%z==0)
                {
                        flag=1;
                }
        }
        return lcm;
}

int hcf(int p, int q, int r)
{
        int gcf=1,flag=0, count;
        for(count=1; flag==0;count++)
        {
                if(p%count==0&&q%count==0&&r%count==0)
                        gcf=count;
                if(count>p&&count>q&&count>r)
                {
                        flag=1;
                }
        }
        return gcf;
}
