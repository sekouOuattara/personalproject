//sekou ouattara
//Cs 102
//Christopher League

#include <iostream>
#include <vector>
using namespace std;

void   print_vector    (vector<int> v);
int    find_minimum    (vector<int> v);
double compute_average (vector<int> v);
int    how_many_evens  (vector<int> v);

int main()
{
    vector<int> v;
    v.push_back(3); v.push_back(5); v.push_back(8);
    v.push_back(2); v.push_back(10); v.push_back(-3);
    v.push_back(7); v.push_back(6); v.push_back(4);
    v.push_back(5);            // TODO: better initializer?
    
    print_vector(v);
    cout << "The minimum is " << find_minimum(v) << "\n";
    cout << "The average is " << compute_average(v) << "\n";
    cout << "There are " << how_many_evens(v) << " even numbers.\n";
    return 0;
}

void print_vector (vector<int> v) {
    cout << "Vector with " << v.size() << " elements\n";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}

int find_minimum (vector<int> v) {
    int min = v.at(0);
    
    for(int i = 0; i < v.size(); i++) {
        if(v.at(i) < min) {
            min = v.at(i);
        }
    }
    return min;
}

double compute_average (vector<int> v) {
    float vSize = v.size();
    float sum = 0;
    
    for(int i = 0; i < vSize; i++) {
        sum += v.at(i);
    }
    return sum/vSize;
}

int how_many_evens(vector<int> v) {
    int evens = 0;
    
    for(int i = 0; i < v.size(); i++) {
        if(v.at(i) % 2 == 0) {
            evens = evens + 1;
        }
    }
    return evens;
}
