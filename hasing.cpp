

#include <iostream>
using namespace std;

int main() {
        
    int hash[13];

    for (int i=0; i<arr.size();i++ ) {
            hash[arr[i]] ++;    
    }
    
    /////
///////// for characters we use ascii values
///////  so how to get the index
/////////  int x = 'a' this will typecast it 

///// 'a ' =97 

///// if we need ascii we
//////  'a' - 'a' =0
/////// 'f' - 'f' = 5
///// thus we get the indexes for the array we just subtract the 'a'

    int hashhh[26];
    
for(int i=0;i<str.size();i++)
{
        hashh[str[i] = 'a']++;

        cout<< hashh[str[i] - 'a']; // to fetch the frequency 


    }
///// here we know it is only lowercase

///// if we dont know we take 256 size array 

int hash2[256] ={0};

/// to auto cast we just do 

hash2[str[i]]++ ; /// this will auto cast itself into an integer

//////////////////////////////
////////// we can do this using maps

    map<int,int>mp;

    for (int i=0; i<arr.size(); i++) {
            mp[arr[i]]++;
    }

/// to fetch it 
cout<< mp[arr[i]];
//// or mp[the number you want];

/// to get keys and values
for (auto it: mp) {
    cout<<it.first<<" "<<it.second
    
}
////////// for characters

map<char,int>mpp;

/// time complexity of map
    // storing and fetching take log n of time in all cases 
///// unordered map 
///////// storing and fetching it take constand o(1) for average and best case
//////////// but for worst case it will be linear o(n);


    

    return 0;
}