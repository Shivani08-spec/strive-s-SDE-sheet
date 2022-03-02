 vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    vector<int>v(A.size()+1,0);

    for(int i=0;i<A.size();i++){

        v[A[i]] += 1;

    }

    int a,b;

    for(int i=1;i<=A.size();i++){

        if(v[i]==0)b=i;

        else if(v[i]==2)a=i;

    }

    return{a,b};

        
        
        
        
    }
