class Solution {
public:
    stack<int> st;
    vector<int> ans;
    int check(int a,int b){
        if(abs(a) == abs(b)) return 0;
        else if(abs(a) > abs(b)) return 1;
        else return -1;
    }

    bool collide(stack<int> &st,int b){
        if(st.empty()) return false;
        if(st.top()>0 && b<0) return true;
        else return false;
    }

    vector<int> asteroidCollision(vector<int>& asteroids) {
        if(asteroids.size() == 0) return ans;
        st.push(asteroids[0]);

        for(int i=1;i<asteroids.size();i++){
            bool coll = collide(st,asteroids[i]);
            if(coll){
            while(coll){
                int temp = check(st.top(),asteroids[i]);
                if(temp == 0){
                    st.pop();
                    break;
                }else if(temp == -1){
                    st.pop();
                    coll = collide(st,asteroids[i]);
                    if(coll) continue;
                    else st.push(asteroids[i]);
                }else {
                    break;
                }
            }
            }else{
            st.push(asteroids[i]);
            }
            // if((st.top()>0 && asteroids[i]<0)){
            //     while(1){
            //         int temp = check(st.top(),asteroids[i]);
            //         if(temp == 1) break;
            //         if(temp == 0) {
            //             st.pop();
            //             break;
            //         }else if(temp == -1){
            //             st.pop();
            //         }
            //     }
            // }else{
            //     st.push(asteroids[i]);
            // }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};