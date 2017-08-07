/*
struct UndirectedGraphNode {
    int label;
    vector<struct UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {}
};*/
#include <unordered_map>
class Path {
public:
    bool checkPath(UndirectedGraphNode* a, UndirectedGraphNode* b) {
        // write code here
        return check(a, b) || check(b, a);
    }
    bool check(UndirectedGraphNode* a, UndirectedGraphNode* b)
    {
        if(!a || !b)
            return false;
        if(a == b)
            return true;
        unordered_map<UndirectedGraphNode*, bool> m;
        queue<UndirectedGraphNode*> q;
        q.push(a);
        while(!q.empty())
        {
            UndirectedGraphNode* temp = q.front();
            q.pop();
            m[temp] = true;
            for(int i = 0; i < temp->neighbors.size(); i++)
            {
                if((temp->neighbors)[i] == b)
                    return true;
                if((temp->neighbors)[i] && m[(temp->neighbors)[i]] != true)
                    q.push((temp->neighbors)[i]);
            }
        }
        return false;
    }
};
