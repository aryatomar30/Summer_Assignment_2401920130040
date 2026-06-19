class MyQueue {
private:
    stack<int> stk;        // Main stack (stores queue in correct order)
    stack<int> sparestk;  // Temporary stack for rearranging

public:
    MyQueue() {}

    // Push element to the back of queue
    void push(int x) {

        // Move all elements to spare stack
        while (!stk.empty()) {
            sparestk.push(stk.top());
            stk.pop();
        }

        // Insert new element
        stk.push(x);

        // Move everything back to maintain queue order
        while (!sparestk.empty()) {
            stk.push(sparestk.top());
            sparestk.pop();
        }
    }

    // Removes element from front of queue
    int pop() {
        int front = stk.top();
        stk.pop();
        return front;
    }

    // Get front element
    int peek() {
        return stk.top();
    }

    // Check if queue is empty
    bool empty() {
        return stk.empty();
    }
};
