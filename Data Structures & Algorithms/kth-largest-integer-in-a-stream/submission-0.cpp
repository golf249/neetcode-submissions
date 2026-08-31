class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> m_minHeap;
    int m_k;
public:
    KthLargest(int k, vector<int>& nums) : m_k(k) {
       for (int num : nums) {
            add(num);
       }
    }
    
    int add(int val) {
        m_minHeap.push(val);

        if (m_minHeap.size() > m_k) {
            m_minHeap.pop();
        }

        return m_minHeap.top();
    }
};
