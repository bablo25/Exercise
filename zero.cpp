#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the Size:";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int left=0;
    int right=size-1;
    int temp;
    for(int i=0;i<size;i++){
    cout<<a[i];
   }
    while(left!=size){
        if((a[left]==0)&&(a[right]!=0)){
            left++;
            right--;
        }
        else if((a[left]!=0)&&(a[right]==0)){
           swap(a[left],a[right]);
        }
        else if((a[left]==0)&&(a[right]==0)){
            right++;
            swap(a[left],a[right]);
        }
        else{
            right--;
        }
   }
   for(int i=0;i<size;i++){
    cout<<a[i];
   }
    return 0;
}