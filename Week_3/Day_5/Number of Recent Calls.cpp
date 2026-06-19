class RecentCounter {
    std::queue<int> q;
public:
    RecentCounter() = default;

    int ping(int t) {
        q.push(t);
        while (!q.empty() && q.front() < t - 3000)
            q.pop();
        return static_cast<int>(q.size());
    }
};
