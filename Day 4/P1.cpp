#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> nums;

    for(int i =1; i<=n; i++){

        int x;
        cin>>x;
        nums.insert(x);
    }
    cout<<"values in set: ";
    for(int num : nums){
        cout<<num<<" ";

    }
    cout<<"\nTotal unique values in set:"<<nums.size()<<endl;
    if (nums.find(8) != nums.end()) {
    cout << "8 is present in the set" << endl;
}  
else {
    cout << "8 is not present in the set" << endl;
}
    return 0;
}