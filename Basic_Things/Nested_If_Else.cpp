#include<bits/stdc++.h>
using namespace std;
/*
1. If age < 18,
    print -> "Not eligible for job."
2. If age >= 18,
    print -> "Eligible for job."
3. If age >= 55 and age <= 57,
    print -> "Eligible for job, but retirement soon."
4. If age > 57,
    print -> "Retirement Time."
*/
int main(){
    int age;
    cin >> age;
    if(age < 18){
        cout << "Not eligible for job.";
    }
    else if(age <= 57){
        cout << "Eligible for job";
        if(age >= 55){
            cout << ", but retirement soon.";
        }
    }
    else{
        cout << "Retirement Time.";
    }
    return 0;
}