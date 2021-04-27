#include<iostream>
#include<string>
using namespace std;

class sample
{
    char *s=new char[100];
    //taking the maximum value of the string
    
public:
    void get_val()
    {
        cin.getline(s,100);
        
    }
    void put_val()
    {
        cout<<s;
    }
    void encr()
    {
        int sum=0;
        for(int i=0;;i++)
        {
            if(s[i]!=' ' && s[i]!='\0')
            sum+=(int)s[i];
            
            if(s[i]==' ')
            {
                int t=sum,n=0;
                while(t)
                {n++;t=t/10;}
                int *arr=new int[n];
                for(int i=n-1;i>=0;i--)
                {
                    arr[i]=sum%10;
                    sum=sum/10;
                }
                for(int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++)
                    {
                        if(arr[i]>arr[j])
                            cout<<(char)(arr[i]*10+arr[j])<<" ";
                        else
                            cout<<(char)(arr[j]*10+arr[i])<<" ";
                    }
                }
            }
            if(s[i]=='\0')
            {
                int t=sum,n=0;
                while(t)
                {n++;t=t/10;}
                int *arr=new int[n];
                for(int i=n-1;i>=0;i--)
                {
                    arr[i]=sum%10;
                    sum=sum/10;
                }
                for(int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++)
                    {
                        if(arr[i]>arr[j])
                            cout<<(char)(arr[i]*10+arr[j])<<" ";
                        else
                            cout<<(char)(arr[j]*10+arr[i])<<" ";
                    }
                }
                break;
            }
            
        }
        
        
    }
    
};
int main()
{
    sample obj;
    obj.get_val();
    obj.encr();
}

