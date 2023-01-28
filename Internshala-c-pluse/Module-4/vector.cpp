#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector<T> &v){
    cout<< " displaying this vector";
    for(int i=0 ; i< v.size() ;i++ ){
        cout<<v[i] << " ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    //vector<char> vec2(20);
    //vec2.push_back('9');
    //display(vec2);
    //vector<char>vec3(vec2);
    //display(vec3);
    //vector<int> vec4(3, 23);
    //display(vec4);
    int element, size ;
    cout<<"enter the size of vector";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter a element to add to this vector";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    std::vector<int>:: iterator iter = vec1.begin();
    vec1.insert(iter, 333);
    display(vec1);

}