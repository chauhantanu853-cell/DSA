#include<iostream>
using namespace std;
int main(){
    int t[5]={5,7,8,6,0};
    int n=5;
    int search=7;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(t[j]>=t[j+1]){
                int temp =t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
        }
     }
     for(int h=0;h<n;h++){
    
        cout<<t[h];
        
     }
     int lower =0;
     int highest = n-1;
     while(lower <= highest){
     int mid =(lower + highest)/2;

     if(search==t[mid]){
        cout<<"Element is found";
        break;
     }
     else if(t[mid]< search){
        lower = mid+1;
         

     }
     else{
        highest = mid-1;
     }
     
     }
     
} 