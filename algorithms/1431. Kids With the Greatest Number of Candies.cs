public class Solution {
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies) {
        int greatest = 0;
        for(int i = 0;i<candies.Length;i++){
            if(candies[i]>greatest){
                greatest = candies[i];
            }
        }
        
        var result = new List<bool>();
        
        for(int i =0;i<candies.Length;i++){
            if(candies[i]+extraCandies>=greatest){
                result.Add(true);
            }
            else{
                result.Add(false);
            }
        }
        return result;
        
    }
}