class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>> people;

        for (int i = 0; i < n; i++) {
            people.push_back({heights[i], names[i]});
        }

        sort(people.begin(), people.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first > b.first;
        });

        for (int i = 0; i < n; i++) {
            names[i] = people[i].second;
        }

        return names;
    }
};
