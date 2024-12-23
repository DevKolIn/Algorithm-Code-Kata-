vector<long long> solution(int x, int n) {
    vector<long long> result(n);
    
    for (int idx = 0; idx < n; idx++)
    {
        result[idx] = static_cast<long long>(x) * (idx + 1);
    }
    
    return result;
}