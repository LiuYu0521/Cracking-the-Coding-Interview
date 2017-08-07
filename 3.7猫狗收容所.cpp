class CatDogAsylum {
public:
    vector<int> asylum(vector<vector<int> > ope) {
        // write code here
        queue<int> cat;
        queue<int> dog;
        vector<int> vec;
        int index=0;
        int size1=ope.size();
        for(int i=0;i<size1;i++)
        {
            int kind=ope[i][0];
            if(kind==1)
            {
                if(ope[i][1]>=0)
                {
                    dog.push(index++);
                    dog.push(ope[i][1]);
                }
                else
                {
                    cat.push(index++);
                    cat.push(ope[i][1]);
                }
            }
            else
            {
                if(ope[i][1]==0)
                {
                    int min=0;
                    if(cat.empty()&&!dog.empty())
                        min=1;
                    if(!cat.empty()&&dog.empty())
                        min=-1;
                    if(!cat.empty()&&!dog.empty())
                        min=dog.front()>cat.front()?-1:1;
                    if(min==-1)
                    {
                        cat.pop();
                        vec.push_back(cat.front());
                        cat.pop();
                    }
                    if(min==1)
                    {
                        dog.pop();
                        vec.push_back(dog.front());
                        dog.pop();
                    }
                }
                else
                {
                    if(ope[i][1]==1&&!dog.empty())
                    {
                        dog.pop();
                        vec.push_back(dog.front());
                        dog.pop();
                    }
                    if(ope[i][1]==-1&&!cat.empty())
                    {
                        cat.pop();
                        vec.push_back(cat.front());
                        cat.pop();
                    }
                }
 
            }
        }
        return vec;
    }
};
