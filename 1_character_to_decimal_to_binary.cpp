// First Code
#include<iostream>
#include<string>
using namespace std;
int binary(int);

int binary(int decimal){
    int reminder,binary;
    int arrB[32]={};
    int i=0;
    while(decimal!=1){
        reminder = decimal%2; 
        arrB[i]=reminder;
        decimal = decimal/2;
        if(decimal==1){
            i++;
            arrB[i]=1;  // highest index i, and total number of values in array is i+1
        }
        i++;  // after completing loop, last value of i give the total number of bits, and i-1==highest index
    }
    int a=i;
    a=a-1;
    while(a!=-1){
    cout <<arrB[a];
    a--;
    }
    cout<<endl;
    return i;
}

int main(){
    char alphabet;
    int decimal;
    cout <<"\nEnter any character: ";
    cin >>alphabet;
    decimal = alphabet;
    cout <<alphabet<<" in Decimal is "<<decimal<<endl;
    cout <<"Total Number of bits: "<<binary(decimal)<<endl<<endl;
    return 0;
}