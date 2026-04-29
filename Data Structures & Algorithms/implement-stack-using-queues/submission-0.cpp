#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;

    MyStack() {
        
    }

    void push(int x) {
        q.push(x);

        // Rotate elements so that last inserted comes to front
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};