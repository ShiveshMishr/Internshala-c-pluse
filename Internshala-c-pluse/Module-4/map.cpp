#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string, int> mymap;
    mymap["harry"]=38;
     mymap["sun"]=83; 
     mymap["sie"]= 28;
     mymap["sejal"]= 32;

     mymap.insert({{"kdhi",29},{"ij",93}});

     map<string, int>:: iterator iter;
     for(iter=mymap.begin(); iter!=mymap.end();iter++){
        cout<<(*iter).first<<"="<<(*iter).second<<"\n";
     }
    cout<<"the size is"<<mymap.size()<< endl;
    cout<<"the maxsize is"<<mymap.max_size()<<endl;
    cout<<"the empty value"<<mymap.empty()<<endl;
    
}