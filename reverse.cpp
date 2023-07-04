#include<iostream>
using namespace std;
class Reverse{
    public: string check(string str){
        int l=str.length();
        string ans=str;
        int j=0;
        int k=0;
        string rev=reverse(str);
        for(int i=0;i<l;i++){
            if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z'))){
                ans[j]=rev[k];
                j++;
                k++;
            }
            else{
                ans[j]=str[i];
                j++;
            }
        }
        return ans;
    }
    public: string reverse(string str){
        int j=0;
        int l=str.length();
        char rev[l];
        for(int i=str.length()-1;i>=0;i--){
            if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z'))){
                rev[j]=str[i];
                j++;
            }
        }
        return rev;
    }
};
int main(){
    string input;
    cout<<"Enter the String:";
    getline(cin,input);
    Reverse r;
    string ans=r.check(input);
    cout<<ans;
    return 0;
}