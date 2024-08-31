//tuple== more two pair of using in tuple  it is use to more than two colaum

#include<iostream>
using namespace std;
#include<tuple>
#include<vector>
int main()
{
    // tuple<int ,int ,int,int>tp;
    // tp = make_tuple(101,23,78,74705);
    // cout<<"roll no ="<<get<0>(tp)<<"\n";
    // cout<<"age ="<<get<1>(tp)<<"\n";
    // cout<<"marks ="<<get<2>(tp)<<"\n";
    // cout<<"mobile no ="<<get<3>(tp)<<"\n";

//====use to tuple in vector============
int n,rno;
string name;
bool t;
double per;
vector<tuple<int ,string ,bool,double>>v;
cout<<"enter how many records \n";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"enter rollno ";
    cin>>rno;
    cout<<"enter your name ";
    cin>>name;
    cout<<"enter true 'pass' and false 'fails' ";
    cin>>t;
    cout<<"enter you %";
    cin>>per;
    v.push_back({rno,name,t,per});
}
cout<<"after using vector tuple"<<endl;
for(int i=0;i<v.size();i++){
    cout<<"Roll no="<< get <0>(v[i])<<"\t"<<endl;
    cout<<"Name ="<< get <1>(v[i])<<"\t"<<endl;

    cout<<"status="<<get <2>(v[i])<<"\t"<<endl;

    cout<<"per="<< get <3>(v[i])<<"\t"<<endl;

}

return 0;    
} 
