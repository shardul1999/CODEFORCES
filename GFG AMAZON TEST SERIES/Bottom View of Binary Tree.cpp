
// Method that returns the bottom view.
vector <int> bottomView(Node *root)
{
        vector<int> res;
        if(root==NULL)
            return res;
        map<int,vector<int>> m;
        queue<pair<Node*,int> > q;
        q.push(make_pair(root,0));
        
        while(!q.empty())
        {
            pair<Node*,int> p=q.front();
            q.pop();
            Node* temp=p.first;
            int val1=p.second;
            
            m[val1].push_back(temp->data);
            if(temp->left)
                q.push(make_pair(temp->left,val1-1));
            if(temp->right)
                q.push(make_pair(temp->right,val1+1));
        }
        for(auto i:m)
        {
            res.push_back(i.second[(i.second).size()-1]);
        }
        return res;
}
