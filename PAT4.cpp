#include <iostream>
using namespace std;
#include<list>
#include<string.h>
int main() {
    char* c1=new char[100];
    cin.getline(c1,100);
    int len=strlen(c1);
    c1[len]=' ';
    int i;
    int sum=0;
    for(i=0;i<=len;i++)
        {
            if(c1[i]!=' ')
            {
                sum=sum+int(c1[i]);
            }
            else
            {
                list<char>list1;
                int digits[100];
                int n=sum;
                int k=0;
                while(n!=0)
                {
                    digits[k]=n%10;
                    n=n/10;
                    k++;
                }
                for(int x=0;x<k;x++)
                {
                    for(int y=x+1;y<k;y++)
                    {
                        int a=digits[x]+10*digits[y];
                        int b=digits[y]+10*digits[x];
                        int maxdig=max(a,b);
                        if(maxdig<=32)
                        {
                            list1.push_front(36);

                        }
                        else
                        {
                            list1.push_front(maxdig);

                        }
                    }
                }
                list<char>::iterator it;
                cout<<" ";
                for(it=list1.begin();it!=list1.end();it++)
                {
                    cout<<*it;
                }
                sum=0;
            }
        }
    return 0;
}
