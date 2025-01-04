#include<bits\stdc++.h>
using namespace std;

// Pairs
void explainPair(){
    pair<int, int> p ={1, 3};
    cout << p.first<< " " << p.second << endl;
    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout<<q.first<<" "<< q.second.second<<" "<< q.second.first<<endl;
    pair<int, int> arr[]={{1, 2}, {2, 5}, {5, 1}};
    cout<< arr[1].second;
}

// Vectors
void explainVector(){
    vector <int> v;
   
    v.push_back(5);
    v.emplace_back(7);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int> a(5, 100);
    vector<int> b();
    vector<int> c(5, 20);
    vector<int> d(c);


    // iterator
    vector<int> :: iterator it = a.begin();

    it++;
    cout<<*(it)<<" ";

    it += 2;
    cout<<*(it)<<" ";

    vector<int> :: iterator it = a.end();
    //vector<int> :: iterator it = a.rend();
    //vector<int> :: iterator it = a.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";


    for (vector<int> :: iterator f = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it : v){
        cout << it << " ";
    }


    // erase function

    // {10, 20, 12, 23}
    v.erase(v.begin()+1); // {10, 12, 23}

    // {10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4);  // {10, 20, 35} [start, end)

    // insert function

    vector <int> v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); //{300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size();   // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 = {10, 20}
    // v2 = {30, 40}
    //v1.swap(v2); // v2 = {10, 20}, v1 = {30, 40}

    v.clear(); // erase the entire vector

    cout << v.empty(); // Retrun True or False
}

// List
void explainlist(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); // {2, 4}

    // Rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// Deque
void explainDeque(){
    deque<int> dq;

    dq.push_back(2); // {2}
    dq.emplace_back(4); // {2, 4}

    dq.push_front(5); // {5, 2, 4}

    dq.emplace_front(); // {2, 4}
    // Functions same as vector and list
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// Stack
void explainStack(){
    // LIFO : Last in First Out
    // Complexity O(1) constant time
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // prints 5 "** st[2] is valid **"

    st.pop(); // {3, 3, 2, 1}

    st.top(); // 3
    st.size(); // 4
    st.empty(); // False

    stack<int> st1, st2;
    st1.swap(st2);
}

// Queue
void explainQueue(){
    // FIFO: First in first Out
    // Complexity O(1) constant time
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(1); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9}

    cout << q.back(); // prints 9
    cout << q.front(); // prints 1

    q.pop(); // {2, 9}
    cout << q.front(); // prints 2

    // size, swap, empty same as stack
}

// Priority Queue
void explainPQ(){
    // Not a liniear container
    // Complexities 
    // Push -> log(n)
    // Top -> O(1)
    // Pop -> log(n)

    // Maximum Heap
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    pq.top(); // Prints 10
    pq.pop(); // {8, 5, 2}
    pq.top(); // Prints 8

    // size, swap, empty same as stack

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // Prints 2
}

// Set
void exlainSet(){
    // Stores -> sorted and unique elements
    // Not a liniear container
    // Complexity log(n)
     
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector can be used also, that only increase efficiency

    // All functions are same as above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);

    // {1, 2, 3, 4, 5}
    st.erase(5); // {1, 2, 3, 4}  -> Takes logarithmic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto  it2 = st.find(4);
    st.erase(it1, it2); // After Erase {1, 4, 5}  [First, Last)

    // lower_bound() and upper_bound() functions works in the same way as it does in vectos

    // This is the syntax
    auto it  = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

// Multiset
void explainMultiset(){
    // Everything is same as set, only thing is it stores dulicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // {}

    int cnt = ms.count(1); // False

    ms.erase(ms.find(1)); // only one element is erased

    ms.erase(ms.find(1), ms.find(1)+2);

    // Rest all funcitons are same
}

// Unordered Set
void explainUset(){
    // Stores only unique elements not ordered
    // Complexity -> O(1)
    // Lower and upper bound function does not work
    // Rest all fnctions are same as above
    // it does not stores in any particular order
    // it has better complexity than set in most cases, except some when collisions happens
}

// Map
void explainMap(){
    // Stores in (key, Value) pairs
    // Key is ordered
    // Complexity log(n)

    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp[1] = 2;
    //mpp.emplace({3, 1});
    mpp.insert({2, 4});
    mpp2[{2, 3}] = 10;

    for(auto it: mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // return key
    cout << mpp[5]; // return 0 if value does not exist

    auto it = mpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5);

    // Other functions are same as above
}

// Multimap
void explainMultimap(){
    // Everthing same as map, only it can store multiple keys
    // mpp[key] cannot be used here
}

// Unordered Map
void explainUmap(){
    // Everthing same as Map, But keys are unorderd
    // complexity -> O(1)
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // if they are same
    if(p1.first > p2.first) return true;
    return false;
}

// Algorithms
void explainExtra(){

    // a[] = {1, 5, 3, 2}
    //sort(a, a+n); // {1, 2, 3, 5}
    //sort(v.begin(), v.end());

    // {1, 3, 5, 2}
   // sort(a+2, a+4); // {1, 3, 2, 5}

    // {1, 3, 5, 2}
    //sort(a, a+n, greater<int>); // {5, 3, 2, 1}

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // my way sorting -> 
    // sort it according to second element
    // if second element is same, then sort it according to first element but in d3scending

    //sort(a, a+n, comp); // {{4, 1}, {2, 1}, {1, 2}}

    int num = 7;
    int cnt = __builtin_popcount(num); // Return set bit (000|||) 3

    long long num = 3897548917438;
    int cnt = __builtin_popcountll(num);

    string s ="123";
    do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    //int maxi = *max_element(a, a+n);
    // Min is also there
}

int main(){
    explainPair();
}