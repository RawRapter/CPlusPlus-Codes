#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
    vector<int> scores;
    public:
    void input(){
        int ele;
        for(int j=0;j<5;j++){
            cin>>ele;
            scores.push_back(ele);
        }
    }
    int calculateTotalScore(){
        int sum_of_element = 0;
        vector<int>::iterator it;
        for(it = scores.begin();it!=scores.end();it++){
            sum_of_element += *it;
        }
        return sum_of_element;
    }
};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
