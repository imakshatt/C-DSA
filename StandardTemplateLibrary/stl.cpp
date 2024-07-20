#include <bits/stdc++.h>
using namespace std;

// Pairs
void pairExplain()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> P = {1, {2, 3}};
    cout << P.first << " " << P.second.first << " " << P.second.second;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[0].second << " " << arr[1].first << " " << arr[1].second;
}

// Vectors
void vectorExplain()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " << v.at(1);

    vector<pair<int, int>> V;
    V.push_back({1, 2});
    V.emplace_back(3, 4);
    cout << endl;
    cout << V[0].first << " " << V.at(0).second;

    // If i have to create vector of 5 elements that is 100
    vector<int> arr(5, 100);
    cout << endl;
    cout << arr.back();

    // copy the elements in vector
    vector<int> v1(5, 20);
    vector<int> v2(v1);
    cout << endl;

    // Interations
    vector<int> vec = {20, 10, 6, 5, 7};
    // now i have to print this vector using iterator
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }

    // another way using iterator
    //  for(vector<int>::iterator it = vec.begin() ; it != vec.end() ; it++){
    //      cout << *(it) << " ";
    //  }

    // Now i dont wanna write vector<int> every time so we use auto that automatically detects the any datatypes
    //  for(auto it = vec.begin() ; it != vec.end() ; it++){
    //      cout << *(it) << " ";
    //  }

    // another way is very simple put it on vector name i.e it : vector_name in for loop like below
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    // Deletion in vector
    // Delete Single Element from {20, 10, 6, 5, 7} i have to delete 10
    vec.erase(vec.begin() + 1);
    cout << "New Vector after deletion 10 : ";
    for (auto it : vec)
    {
        cout << it << " ";
    }
    // now i have to delete 5 from {20,6,5,7}
    vec.erase(vec.begin() + 2);
    cout << endl;
    cout << "New Vector after deletion of 5 : ";
    for (auto it : vec)
    {
        cout << it << " ";
    }
    vec.push_back(10);
    vec.push_back(15);
    cout << endl;
    for (auto it : vec)
    {
        cout << it << " ";
    }

    // delete multiple elements from vector {20,6,7,10,15}
    // i have to delete 6,7 so i have to give {6,10}
    vec.erase(vec.begin() + 1, vec.begin() + 3);
    cout << endl;
    cout << "after deleting 6 & 7: ";
    for (auto it : vec)
    {
        cout << it << " ";
    }

    // Insertion Operaation
    vector<int> ins(2, 100); // {100,100}
    // now i have to inster 300 at the first position
    ins.insert(ins.begin(), 300); //{300,100,100}
    // now i have to inster two time 10 after 300 ---- ins.inster(begin+1_posiion, no_of_times_value, value)
    ins.insert(ins.begin() + 1, 2, 10); //{300,10,10,100,100}
    cout << endl;
    for (auto it : ins)
    {
        cout << it << " ";
    }
    // now i have to inster 2 times 90 after 100
    ins.insert(ins.begin() + 4, 2, 90);
    cout << endl;
    for (auto it : ins)
    {
        cout << it << " ";
    }

    // now i have to copy entire demo vector to ins vector's first position
    vector<int> copy = {50, 50};
    vector<int> copy1 = {91, 92, 93, 94, 95};
    //{300,10,10,100,90,90,100} <-- ins vector
    ins.insert(ins.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,90,90,100}
    cout << endl;
    for (auto it : ins)
    {
        cout << it << " ";
    }
    ins.insert(ins.begin() + 5, copy.begin(), copy.end()); //{50,50,300,10,10,50,50,100,90,90,100}
    cout << endl;
    for (auto it : ins)
    {
        cout << it << " ";
    }

    // now i have to insert only {91,92,93} from copy1 vector to ins vector before last 100
    ins.insert(ins.begin() + 10, copy1.begin(), copy1.begin() + 3);
    cout << endl;
    for (auto it : ins)
    {
        cout << it << " ";
    }

    // find the size of vector using size function
    cout << endl
         << "size of ins vector is: " << ins.size() << endl;

    // pop function delete the last element of vector
    vector<int> pop = {10, 20};
    pop.pop_back(); //{10}
    cout << endl;
    for (auto it : pop)
    {
        cout << it << " ";
    }

    // swap two vectors
    vector<int> s1 = {10, 20};
    vector<int> s2 = {30, 40};
    s1.swap(s2);
    cout << "S1 vector : ";
    for (auto it : s1)
    {
        cout << it << " ";
    }
    cout << endl
         << "S2 vector : ";
    for (auto it : s2)
    {
        cout << it << " ";
    }
    cout << endl;
    // how to clear the entire vector
    ins.clear();

    // how to check vector is empty or not if vector is empty then returns TRUE else return FASLE
    cout << "Is ins vector is Empty ?? : " << ins.empty();
    cout << endl
         << "Is s1 vector is Empty ?? : " << s1.empty();
}

// List
void listExplain()
{
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(1); //{1,2,4}
    ls.emplace_front(7);
    for (auto it : ls)
    {
        cout << it << " ";
    }

    // rest of the functions are same as vector
}

// Queue
void dequeueExplain()
{
    deque<int> dq;
    dq.push_back(2);     //{2}
    dq.push_front(1);    //{1,2}
    dq.emplace_back(3);  //{1,2,3}
    dq.emplace_front(0); //{0,1,2,3}

    cout << endl;
    for (auto it : dq)
    {
        cout << it << " ";
    }
    dq.pop_back();
    dq.pop_front();
    cout << "after pop operation: ";
    for (auto it : dq)
    {
        cout << it << " ";
    }
}

// stack - LIFO(Last in First out)
// in stack indexing is not possible
void stackExplain()
{
    stack<int> st;
    st.push(1);    //{1}
    st.push(2);    //{2,1}
    st.push(3);    //{3,2,1}
    st.push(3);    //{3,3,2,1}
    st.emplace(4); //{4,3,3,2,1}
    st.push(5);    //{5,4,3,3,2,1}

    cout << endl
         << "Top element: " << st.top();
    st.pop(); // Last insterted element is deleted that is 5 ---{4,3,3,2,1}
    st.pop(); // Last insterted element is deleted that is now 4 --- {3,3,2,1}

    cout << "Size of stack : " << st.size();
    cout << endl
         << "Is stack is empty : " << st.empty();
}

// queue - FIFO(First in First out)
void queueExplain()
{
    queue<int> q;
    q.push(1);     //{1}
    q.push(2);     //{1,2}
    q.push(3);     //{1,2,3}
    q.push(4);     //{1,2,3,4}
    q.push(5);     //{1,2,3,4,5}
    q.back() += 5; //{1,2,3,4,10}

    cout << endl
         << q.back(); // 10
    cout << endl
         << q.front(); // 1

    q.pop(); //{2,3,4,10}
    cout << endl
         << q.front(); //{2,3,4,10}
}

// priority_Queue -- Two types
// 1)Max heap  2)Min Heap
// In max heap priority is maximum and in min heap priority is minimum
void priorityQueueExplain()
{
    priority_queue<int> pq;
    // Max Heap
    pq.push(1); //{1}
    pq.push(2); //{2,1}
    pq.push(8); //{8,2,1}
    pq.push(3); //{8,3,2,1}
    pq.push(0); //{8,3,2,1,0}

    // Hear if i perform pop operation then maxmimum element got deleted first
    pq.pop(); //{3,2,1,0}
    cout << endl
         << "Now the top element in pq is : " << pq.top();

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(8); //{8}
    pq1.push(3); //{3,8}
    pq1.push(1); //{1,3,8}

    // hear if i perform pop operation then minimum element got deleted first
    pq1.pop(); //{3,8}
    cout << endl
         << "Now the top element in pq1 is: " << pq1.top();
}

// set -- Every elements are unique and sorted -- every operation takes logn time
void setExplain()
{
    set<int> st;
    st.insert(1); //{1}
    st.insert(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    // find operation in set
    //{1,2,3,4} i want to find 3
    //  auto tt = st.find(3);

    // if element is not found then it retuns the end()+1 value of set
    //  auto tt = st.find(6);

    // if i have to erase 3
    st.erase(3);
    for (auto it : st)
    {
        cout << it << " ";
    }

    // count function - it returns '1' if element is present in the set else it reurns '0'
    //{1,2,4}
    int cnt = st.count(6); // returns 0
    cout << endl
         << cnt;

    // Another way to earase
    auto it = st.find(4);
    st.erase(it);
    cout << endl
         << "After deletion of 4" << endl;
    for (auto it : st)
    {
        cout << it << " ";
    }

    st.insert(3);
    st.insert(4);
    st.insert(5);
    //{1,2,3,4,5}
    // now i have to delete 2&3 -- similar as vector
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);
    cout << endl
         << "after deletion of 2&3: ";
    for (auto it : st)
    {
        cout << it << " ";
    }
}

// Multiset -- Every elements are sorted
void multisetExplain()
{
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.insert(4); //{1,1,1,4}
    ms.insert(2); //{1,1,1,2,4}

    // if i perform ms.erase(1) then it remove all the occurence of 1
    ms.erase(1); //{2,4}

    // if i have to delete only 0th index 1 from {1,1,1,2,4} then i have to give address
    ms.erase(ms.find(1)); //{1,1,2,4}

    // if i have to delete first two 1 from {1,1,1,2,4}
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(ms.find(1), ms.find(1));
}

// Unorderd set is similar to set but it stores the elemetns in unsorted order rest of are same

// Map -- map<key, value> name --> Keys are insterted in sorted manner and are unique
// values can br anything and in any order 
//o(logn)
void mapExplain() //same value store
{
    map<int, int> mp;
    mp[1] = 2;         //[{1,2}] -- > 1 is key and 2 is value
    mp.insert({2, 4}); //[{1,2}, {2,4}]
    mp.insert({4, 4}); //[{1,2}, {2,4}, {4,4}]
    mp.insert({3, 2}); //[{1,2}, {2,4}, {3,2}, {4,4}]

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    //find the value

    //Another Declaration of map
    map<pair<int, int>,int> mp1;
    mp1[{1,2}] = 3;
    mp1[{3,4}] = 4;
}

//Multimap -- same as map but here we can store the duplicate keys but in sorted order
//unorderdmap -- sam as multimap but values can be in unordered manner bestcase o(1) worst case o(n)

//Extra Algorithms
void extra(){
    int n = 5;
    int a[n] = {5,4,3,2,1};
    vector<int> v = {5,4,3,2,1};

    //To sort an array
    sort(a, a+n);
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    //To sort vector
    sort(v.begin(), v.end());
    cout << endl << "Sorted Vector: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    int n1 = 5;
    int a1[n1] = {5, 4, 3, 2, 1};
    vector<int> v1 = {5, 4, 3, 2, 1};
    //To sort the perticular portion {5,4,3,2,1} i have to sort only 3,2,1 -- In array
    sort(a1+2, a1+5);
    cout << endl << "sorted Portion: ";
    for (int i = 0; i < n1; i++)
    {
        cout << a1[i] << " ";
    }
    // To sort the perticular portion {5,4,3,2,1} i have to sort only 3,2,1 -- in vector
    sort(v1.begin()+2, v1.begin()+5);
    cout << endl << "Sorted vector: ";
    for (int i = 0; i < n1; i++)
    {
        cout << v1[i] << " ";
    }

    //Convert a array and vector into descending order
    // sort(a, a+n, greater<int>);
}

int main()
{
    extra();
    return 0;
}