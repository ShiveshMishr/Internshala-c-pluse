#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for (it=lst.begin(); it!= lst.end() ; it++){
        cout<<*it<<" ";
    }
    
    cout<<endl;
}
int main(){
    list<int> list1;
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(1);
    display(list1);

    /*list1.pop_back();
    display(list1);
    list1.pop_front();
    list1.remove(7);*/

//shorting the list
    /*list1.sort();
     display(list1);
     */


    //list<int>::iterator it;
    //it= list1.begin();
   
    /*cout<<*it<<" ";
    it++;
    cout << *it << " ";
    it++;
    cout << *it << " ";
    it++;
    cout << *it << " ";
    it++; 
    cout << *it << " ";
    */

   list<int> list2(3);
   list<int>:: iterator iter;
   iter= list2.begin();
   *iter=38;
   iter++;
   *iter=45;
   iter++;
   *iter= 28;
   iter++;
   display(list2);

    list1.sort();
    list2.sort();

   list1.merge(list2);
   cout<<"list after merging";
   display(list1);

   //reversing the list 
   list1.reverse();
   display(list1);

}