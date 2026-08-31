class MyStack {
private:
    struct Node {
        int val;
        Node* next; // Raw pointer
        Node(int v, Node* n) : val(v), next(n) {}
    };
    Node* q; // The head of our list

public:
    // 1. Constructor
    MyStack() : q(nullptr) {}

    // 2. Destructor (CRITICAL: Without this, you have memory leaks)
    ~MyStack() {
        while (q != nullptr) {
            Node* temp = q;
            q = q->next;
            delete temp; // Manually freeing memory
        }
    }

    void push(int x) {
        // We manually allocate memory on the heap
        q = new Node(x, q);
    }

    int pop() {
        if (!q) return -1;
        
        Node* temp = q;     // Save the current head
        int topVal = q->val;
        q = q->next;        // Move head to the next node
        
        delete temp;        // Manually free the old head node
        return topVal;
    }

    int top() {
        return q ? q->val : -1;
    }

    bool empty() {
        return q == nullptr;
    }
};