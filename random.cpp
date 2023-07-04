#include<iostream>
using namespace std;
class Random{
    public:
        long num[10];
        int rem[10];
    public: int check(long rand){
        int i=1;
        long rand1=rand;
        num[0]=rand;
        int j=0;
        while(rand!=0){
            num[i]=rand/10;
            rand=rand/10;
            i++;
        }
        while(rand1!=0){
            rem[j]=rand1%10;
            rand1=rand1/10;
            j++;
        }
        int flag=0;
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                if(i==rem[j]){
                    flag+=1;
                    break;
                }
            }
        }
        //cout<<flag;
        if(flag==10){
            for(int i=0;i<10;i++){
                if(((num[i])%(10-i))==0){    
                }
                else{
                    return 0;
                    break;
                }
            }
        }
        else{
            return 0;
        }
        return 1;
    }
};
int main(){
    Random r;
    for(long i=3816547290;i<=9999999999;i++){
        int flag=r.check(i);
        if(flag){
            cout<<i;
            break;
        }
    }
}