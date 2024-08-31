#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
int main(){
    vector<pair<int,string>>v;
    int rno,n;
    string nm;
    cout<<"enter no of records\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the roll no. :";
        cin>>rno;
        cout<<"enter the name :";
        cin>>nm;
        //v.push_back({rno,nm});//it is list 
        v.push_back(make_pair(rno,nm));//it is a function of pair
    }
    cout<<"after stored data are \n";
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<"\t"<<v[i].second<<"\t";//it is not 2d array only pair of data
        cout<<"\n";
    }

   return 0;

}