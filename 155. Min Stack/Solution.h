#include <deque>

using std::deque;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack()
        : d()
        , min() {}

    void push(int x) {
        d.push_back(x);
        if (min.empty()) {
            min.push_back(x);
        } else {
            int lastMin = min.back();
            if (x > lastMin) {
                min.push_back(lastMin);
            } else {
                min.push_back(x);
            }
        }
    }

    void pop() {
        d.pop_back();
        min.pop_back();
    }

    int top() { return d.back(); }

    int getMin() { return min.back(); }

private:
    deque<int> d;
    deque<int> min;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
