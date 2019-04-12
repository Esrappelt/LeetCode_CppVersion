class TopVotedCandidate {
public:
    map<int,int> vote;
    unordered_map<int,int> sum;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        int len = persons.size(),max_vote = -1;
        for(int i = 0; i < len; i++) vote[times[i]] = persons[i];
        for(auto it : vote) {
            if(++sum[it.second] >= sum[max_vote]) max_vote = it.second;
            vote[it.first] = max_vote;
        }
    }
    int q(int t) {
        auto ans = vote.upper_bound(t);
        return (--ans)->second;
    }
};