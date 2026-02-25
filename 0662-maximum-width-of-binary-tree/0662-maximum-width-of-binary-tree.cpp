class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        //Pair is a object that store two data type pair<type1,type2>
        queue<pair<TreeNode*, unsigned long long>>q;
        //0 based indexing
        q.push({root,0});
        int maxWidth=0;
        while(q.size()>0)
        {
            int n=q.size();
            unsigned long long stIndex=q.front().second;
            unsigned long long lstIndex=q.back().second;
            int currWidth=lstIndex-stIndex+1;
            maxWidth=max(maxWidth,(int)currWidth);

            //Level By Level
            for(int i=0;i<n;i++)
            {
                //Auto Automatically detect the data type
                auto curr=q.front();
                q.pop();
                if(curr.first->left)
                {
                    q.push({curr.first->left,curr.second*2+1});
                }
                if(curr.first->right)
                {
                    q.push({curr.first->right,curr.second*2+2});
                }
            }

        }
        return maxWidth;
        
    }
};