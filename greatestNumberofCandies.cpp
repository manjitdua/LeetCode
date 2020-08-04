class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        //std::sort(candies.begin(),candies.end(),std::greater<int>());
        
        std::vector<bool> output(candies.size());
        int greatest = *std::max_element(candies.begin(),candies.end());
        //for(auto candy:candies)
        for(size_t i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=greatest)
                output[i]=true;
            else
                output[i]=false;
        }
        return output;
    }
};
