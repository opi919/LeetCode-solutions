class RecentCounter {
public:
int count;
queue<int> q;
    RecentCounter() {
        count = 0;
        while(!q.empty()){
            q.pop();
        }
    }
    
    int ping(int t) {
        if(q.empty()) {q.push(t);count++;return count;}

        while(1){
            int front = q.front();
            cout<<front<<endl;
            if(front>= t-3000 && front<=t){
                count++;
                break;
            }
            q.pop();
            count--;
            if(q.empty()){
                count = 1;
                break;
            }
        }
        q.push(t);
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */