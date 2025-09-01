#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    //cout<<"size="<<v.size()<<"\n";
    //cout<<"capacity ="<<v.capacity()<<"\n";
    v.push_back(4);
    // cout<<"size="<<v.size()<<"\n";
    // cout<<"capacity ="<<v.capacity()<<"\n";
    v.push_back(5);
    // cout<<"size="<<v.size()<<"\n";
    // cout<<"capacity ="<<v.capacity()<<"\n";
    v.push_back(6);
    // cout<<"size="<<v.size()<<"\n";
    // cout<<"capacity ="<<v.capacity()<<"\n";
    v.push_back(7);
    // cout<<"size="<<v.size()<<"\n";
    // cout<<"capacity ="<<v.capacity()<<"\n";
    v.push_back(8);
    // for (int i=0;i<v.size();i++)
     {
        //cout<<v[i]<<"\n";
       // cout<<v.at(i)<<"  ";
        //cout<<endl;   
    }     
    //  for(auto value:v)
    //  {
    //     cout<<value<<"\n";
    //  }
   
//     v.pop_back();
//      for (auto value:v){
//         cout <<value <<" ";

//      } cout<<endl;
//    cout<<"Front:"<<v.front()<<"\n";
//    cout<<"Back:"<<v.back()<<"\n";
      v.insert(v.begin()+2,{10,12,16});
//    for(auto value:v)
//      {
//         cout<<value<<"\n";
//      }
    v.erase(v.begin(),v.begin()+2);
       vector<int>v2(4,6);
          for(auto value:v2)
     {
        cout<<value<<"\n";
     }

    // ITERATOR
     vector<int>::iterator itr;
    for(auto itr=v.begin(); itr!=v.end(); itr++)
    {
        cout<<*(itr)<<" ";
    }
    cout<<endl;

    vector<int>::reverse_iterator rit;
    for(auto rit=v.rbegin(); rit!=v.rend(); rit++)
        cout<<*(rit)<<" ";
    cout<<endl;







    }
