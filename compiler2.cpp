#include<bits/stdc++.h>
using namespace std;
string ir[1000];
string ma[1000];
string logi [1000];
string nem [1000];
string ot[1000];
vector<char>v;
string s[1000];
map<string,int>mp;
int r=1,irr=1,math=1,logic=1,nu=1,oth=1;

int main()
{
    //freopen("in.txt","r",stdin);
    string  keyword[7]= {"int","float","double","char","for","if","else"};
    string  identifiers[6]= {"+","-","*","%","/","="};
    string math_operation[26]= {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    string lo[6]= {">","<",">=","<=","==","!="};
    string others[6]={";",",","{","}","(",")"};
    string p;
    int f=0;
    char a[1000];
    while(gets(a))
    {
        f=0;
        v.clear();
        for(int i=0; i<strlen(a); i++)
        {
            if(a[i]!=' ')
            {
                //cout<<a[i];
                v.push_back(a[i]);
            }
            else if(v.size()!=0)
            {
//                cout<<endl;
//                for(int pp=0; pp<v.size(); pp++)cout<<v[pp];
//                cout<<endl;
                if(v.size()!=1)
                    for(int j=0; j<7; j++)
                    {
                        f=0;
                        p=keyword[j];
                        for(int k=0; k<p.size(); k++)
                        {
                            if(p[k]==v[k])f=1;
                            else
                            {
                                f=0;
                                break;
                            }
                        }
                        if(f==1)
                        {
                            s[r++]=p;
                            // cout<<1<<p<<endl;
                            p.clear();
                            v.clear();
                            break;
                        }
                    }
                if(f==0)
                    for(int j=0; j<6; j++)
                    {
                        f=0;
                        p=lo[j];
                        for(int k=0; k<p.size(); k++)
                        {
                            if(p[k]==v[k])f=1;
                            else
                            {
                                f=0;
                                break;
                            }
                        }
                        if(f==1)
                        {
                            logi[logic++]=p;
                            // cout<<1<<p<<endl;
                            p.clear();
                            v.clear();
                            break;
                        }
                    }
                if(f==0&&v.size()==1)
                    for(int j=0; j<6; j++)
                    {
                        f=0;
                        p=identifiers[j];
                        for(int k=0; k<p.size(); k++)
                        {
                            if(p[k]==v[k])f=1;
                            else
                            {
                                f=0;
                                break;
                            }
                        }
                        if(f==1)
                        {
                            ir[irr++]=p;
                            // cout<<2<<p<<endl;
                            p.clear();
                            v.clear();
                            break;
                        }
                    }
                if(f==0&&v.size()==1)
                    for(int j=0; j<6; j++)
                    {
                        f=0;
                        p=others[j];
                        for(int k=0; k<p.size(); k++)
                        {
                            if(p[k]==v[k])f=1;
                            else
                            {
                                f=0;
                                break;
                            }
                        }
                        if(f==1)
                        {
                            ot[oth++]=p;
                            // cout<<2<<p<<endl;
                            p.clear();
                            v.clear();
                            break;
                        }
                    }
                if(f==0&&v.size()==1)
                    for(int j=0; j<26; j++)
                    {
                        f=0;
                        p=math_operation[j];
                        for(int k=0; k<p.size(); k++)
                        {
                            if(p[k]==v[k])f=1;
                            else
                            {
                                f=0;
                                break;
                            }
                        }
                        if(f==1)
                        {
                            ma[math++]=p;
                            //cout<<3<<p<<endl;
                            p.clear();
                            v.clear();
                            break;
                        }
                    }
                if(f==0)
                {
                //for(int pp=0; pp<v.size(); pp++)cout<<v[pp];
                    for(int j=0; j<v.size(); j++)
                    {
                        if((v[j]>='0'&&v[j]<='9'))f=1;
                        else if(v[j]=='.')f=1;
                        else
                        {
                            f=0;
                            break;
                        }
                    }
                    if(f==1)
                    {
                        p.clear();
                        p = string(v.begin(), v.end());
                        nem[nu++]=p;
                        p.clear();
                        v.clear();
                    }
                }
                v.clear();
                f=0;
            }

        }
//        for(int pp=0; pp<v.size(); pp++)cout<<v[pp];
//        cout<<endl;
        if(f==0)
            for(int j=0; j<7; j++)
            {
                f=0;
                p=keyword[j];
                for(int k=0; k<p.size(); k++)
                {
                    if(p[k]==v[k])f=1;
                    else
                    {
                        f=0;
                        break;
                    }
                }
                if(f==1)
                {
                    s[r++]=p;
                    // cout<<4<<p<<endl;
                    v.clear();
                    p.clear();
                    break;
                }
            }
        if(f==0)
            for(int j=0; j<6; j++)
            {
                f=0;
                p=lo[j];
                for(int k=0; k<p.size(); k++)
                {
                    if(p[k]==v[k])f=1;
                    else
                    {
                        f=0;
                        break;
                    }
                }
                if(f==1)
                {
                    logi[logic++]=p;
                    // cout<<1<<p<<endl;
                    p.clear();
                    v.clear();
                    break;
                }
            }
        if(f==0&&v.size()==1)
            for(int j=0; j<6; j++)
            {
                f=0;
                p=identifiers[j];
                for(int k=0; k<p.size(); k++)
                {
                    if(p[k]==v[k])f=1;
                    else
                    {
                        f=0;
                        break;
                    }
                }
                if(f==1)
                {
                    ir[irr++]=p;
                    // cout<<5<<p<<endl;
                    p.clear();
                    v.clear();
                    break;
                }
            }
        if(f==0&&v.size()==1)
                    for(int j=0; j<6; j++)
                    {
                        f=0;
                        p=others[j];
                        for(int k=0; k<p.size(); k++)
                        {
                            if(p[k]==v[k])f=1;
                            else
                            {
                                f=0;
                                break;
                            }
                        }
                        if(f==1)
                        {
                            ot[oth++]=p;
                            // cout<<2<<p<<endl;
                            p.clear();
                            v.clear();
                            break;
                        }
                    }
        if(f==0&&v.size()==1)
            for(int j=0; j<26; j++)
            {
                f=0;
                p=math_operation[j];
                for(int k=0; k<p.size(); k++)
                {
                    if(p[k]==v[k])f=1;
                    else
                    {
                        f=0;
                        break;
                    }
                }
                if(f==1)
                {
                    ma[math++]=p;
                    //cout<<6<<p<<endl;
                    p.clear();
                    v.clear();
                    break;
                }
            }

        if(f==0)
        {
            for(int j=0; j<v.size(); j++)
            {
                f=0;
                if((v[j]>='0'&&v[j]<='9'))f=1;
                else if(v[j]=='.')f=1;
                else
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
                    {
                        p.clear();
                        p = string(v.begin(), v.end());
                        nem[nu++]=p;
                        p.clear();
                        v.clear();
                    }
        }
        p.clear();
        v.clear();
        f=0;
        memset(a,0,sizeof a);
    }
    cout<<"Keywords:";
    mp.clear();
    for(int i=1; i<r; i++)
    {
        if(mp[s[i]]==0)
        {
             cout<<" "<<s[i];
             mp[s[i]]=1;
        }
    }
    cout<<endl;
    mp.clear();
    cout<<"Math Operators:";
    for(int i=1; i<math; i++)
    {
        if(mp[ma[i]]==0)
        {
            cout<<" "<<ma[i];
            mp[ma[i]]=1;
        }

    }
    cout<<endl;
    mp.clear();
    cout<<"Identifiers:";
    for(int i=1; i<irr; i++)
    {
        if(mp[ir[i]]==0)
        {
            cout<<" "<<ir[i];
            mp[ir[i]]=1;
        }

    }
    cout<<endl;
    mp.clear();
    cout<<"Logical Operators:";
    for(int i=1; i<logic; i++)
    {
        if(mp[logi[i]]==0)
        {
            cout<<" "<<logi[i];
            mp[logi[i]]=1;
        }

    }
    cout<<endl;
    mp.clear();
    cout<<"Numerical Values:";
    for(int i=1; i<nu; i++)
    {
        if(mp[nem[i]]==0)
        {
            cout<<" "<<nem[i];
            mp[nem[i]]=1;
        }

    }
    cout<<endl;
    mp.clear();
    cout<<"Numerical Values:";
    for(int i=1; i<oth; i++)
    {
        if(mp[ot[i]]==0)
        {
            cout<<" "<<ot[i];
            mp[ot[i]]=1;
        }

    }
    cout<<endl;
    return 0;
}
