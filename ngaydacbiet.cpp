#include<bits/stdc++.h>
using namespace std;
//  22 / 02 / 2022
int check(string day,string year){
    string c=day;
    c+="02"; c+=year;
    string r="";
    reverse(year.begin(),year.end());
    reverse(day.begin(),day.end());
    r+=year; r+="20" ; r+=day;
    if(c==r) return 1;
    return 0;
}
void Print(string Day,string Year){
    cout<<Day<<"/02/"<<Year<<endl;
}
int checkY(vector<int>&a){
    if(a[0]!=2) return 0;
    return 1;
}
int main(){
    int coun=0;
    string year[8]={"2000","2002" ,"2020" ,"2022" ,"2200" ,"2202" ,"2220" ,"2222"};
    vector<string>day(3);
    day[0]="02"; day[1]="20";day[2]="22";
    for(int i=0;i<3;i++){
        coun=0;
        while(coun<8){
           Print(day[i],year[coun]);
          coun++;
        }
    }
    // for(int i=0;i<3;i++){
    //     coun=0;
    //     while(coun<8){
    //       string Day=day[i] , Year = year[coun];
    //     string c=Day;
    //     c+="02"; c+=Year;
    //     string r="";
    //     reverse(Year.begin(),Year.end());
    //     reverse(Day.begin(),Day.end());
    //     r+=Year; r+="20" ; r+=Day;
    //     cout<<c<<" "<<r<<endl;
    //       coun++;
    //     }
    // }
}