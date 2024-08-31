#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v2;
    int r,c,value;
    cout<<"enter no of row";
    cin>>r;
    cout<<"enter no of col";
    cin>>c;
    for(int row=0;r>row;row++){
        vector<int>v1;
        for(int col=0;c>col;col++){
            cin>>value;
            v1.push_back(value);

        }
        v2.push_back(v1);
    }
    cout<<"2d vector are----------\n";
    for(int row=0;r>row;row++){
        vector<int>v1;
        for(int col=0;c>col;col++){
    
           cout<<v2[row][col]<<"\t";

        }
        cout<<endl;
       
    }
    int src;
    cout<<"enter the value you wanna search\n";
    cin>>src;
    bool found=false;
    for(int row=0;r>row;row++){
        vector<int>v1;
        for(int col=0;c>col;col++){
    
           if(v2[row][col]==src){
            cout<<"["<<row<<"]"<<"["<<col<<"]" ; 
             found=true;

             }
              
        }
    }
    if(!found){
    cout<<"element is not found";
    }
   

    
}