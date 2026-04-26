class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for(string op : operations) {

            if(op == "+") {
                int top1 = st.top(); st.pop();
                int top2 = st.top(); st.pop();

                int sum = top1 + top2;

                // push back in correct order
                st.push(top2);
                st.push(top1);
                st.push(sum);
            }
            else if(op == "C") {
                st.pop();
            }
            else if(op == "D") {
                int val = st.top();
                st.push(2 * val);
            }
            else {
                st.push(stoi(op)); // convert string → int
            }
        }

        int total = 0;
        while(!st.empty()) {
            total += st.top();
            st.pop();
        }

        return total;
    }
};