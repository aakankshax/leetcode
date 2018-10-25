// Subdomain Visit Count

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
     unordered_map<string,int> counts;

        for (auto& rec : cpdomains) {
            istringstream ss(rec);
            string cnt, dom;
            ss >> cnt >> dom;
            int count = stoi(cnt);
            counts[dom] += count;

            do {
                auto pos = dom.find('.');
                dom = dom.substr(pos + 1);
                counts[dom] += count;
            } while (dom.find('.') != string::npos);
        }

        vector<string> res;
        for (auto& p : counts)
            res.push_back(to_string(p.second) + " " + p.first);

        return res;
    }

};
