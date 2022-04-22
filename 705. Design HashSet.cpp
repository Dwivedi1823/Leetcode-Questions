/*class MyHashSet {
public:
    set<int> st;
    MyHashSet() {
        //Nothing to do....
    }
    
    void add(int key) {
        st.insert(key);
    }
    
    void remove(int key) {
        if(st.find(key) != st.end())
            st.erase(key);
        return;
    }
    
    bool contains(int key) {
        if(st.find(key) != st.end())
            return true;
        return false;
    }
};*/

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

class MyHashSet {
private:
    vector<bool> arr;
public:
    MyHashSet() {
        arr.resize(1e6+1,false);
        // this works because input space is relatively small
    }
    
    void add(int key) {
        arr[key]=true;
    }
    
    void remove(int key) {
        arr[key]=false;
    }
    
    bool contains(int key) {
        return arr[key];
    }
};
