#include<iostream>
using namespace std;
class Palindrome{
    public:
        string one,two,combinations[100],palindrome[100];
        int k=0;
    public: int check(string str){
        one="";
        string sorted=this->sorting(str);
        string x;
        for(int i=0;i<sorted.size();i++){
            if(sorted[i]==sorted[i+1]){
                i++;
                x=sorted[i];
                this->two.append(x);
            }
            else{
                x=sorted[i];
                this->one.append(x);
            }
        }
        if(one.size()>1){
            return 0;
        }
        else{
            return 1;
        }
        return 0;
    }
    public: void find(string str){
        this->permute(two,0);
        for(int i=0;i<combinations->length();i++){
            string x=combinations[i];
            palindrome[i].append(x);
            palindrome[i].append(one);
            string rev=x;
            int j=x.size()-1;
            for(int i=0;i<x.size();i++){
                rev[j]=x[i];
                j--;
            }
            palindrome[i].append(rev);
        }

    }
    public: string sorting(string str){
        char temp;
        for(int i=0;i<str.size();i++){
            for(int j=i;j<str.size();j++){
                if(str[i]>str[j]){
                    swap(str[i],str[j]);
                }
            }
        }
        return str;
    }
    public: void permute(string str,int cid){
        int flag=0;
        if(cid==str.size()-1){
            for(int i=0;i<combinations->length();i++){
                if(str==combinations[i]){
                    flag=1;
                }
            }
            if(flag==0){
                this->combinations[k]=str;
                k++;
            }
        }
        else{
            for(int i=cid;i<str.size();i++){
                swap(str[i],str[cid]);
                this->permute(str,cid+1);
                swap(str[i],str[cid]);
            }
        }
    }
};
int main(){
    string str;
    cout<<"Enter String:";
    cin>>str;
    Palindrome p;
    int flag=p.check(str);
    if(flag){
        cout<<"Palindromes Generated:"<<"\n";
        p.find(str);
        for(int i=0;i<p.palindrome->length();i++){
            cout<<p.palindrome[i]<<"\n";
        }
    }
    else{
        cout<<"No palindrome";
    }
    return 0;
}