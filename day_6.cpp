// day2.md
// 3. Check if Two Arrays are Equal

#include<iostream>
#include<set>


using namespace std;


int main(){
    set<int> result;
    vector<int> arr1 , arr2;
    int size , value;
    int count_1 = 0;
    int count_2 = 0;

    cout<<"Enter size: ";
    cin>>size;
    for(int i=0 ; i < size ; i++){
        cin>>value;
        arr1.push_back(value);
    }

    for(int i=0 ; i < size ; i++){
        cin>>value;
        arr2.push_back(value);
    }

    if (arr1.size() != arr2.size()){
        cout<<"Not equal..";
        return false;
    }
    else{
        set<int> s1{arr1.begin(), arr1.end()};
        set<int> s2{arr2.begin(), arr2.end()};
        
        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.begin()));


        for(int value : result){
            count_1 = 0;
            count_2 = 0;

            for(int j = 0 ; j < size ; j++){
                if(value == arr1[j]){
                    count_1 ++;
                }
            }


            for(int k = 0 ; k < size ; k++){
                if(value == arr2[k]){
                    count_2 ++;
                }
            }

            if(count_1 != count_2){
                return false;
            }
        }
    }
    return true;
}