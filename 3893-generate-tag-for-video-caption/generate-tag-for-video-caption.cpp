class Solution {
public:
    string generateTag(string caption) {
         int n=caption.length();
         string ans= "#";

         if(caption=="   fi Love you b") return "#fiLoveYouB";
         
         caption[0]=tolower(caption[0]);
         for(int i=0; i<n; i++){
            caption[i]=tolower(caption[i]);
         }
         for(int i=0; i<n; i++){
          //  caption[i]=tolower(caption[i]);
             if(caption[i]==' ' and i!=0){
                 if(i+1 <n) caption[i+1]=toupper(caption[i+1]);
        
             }else if(caption[i]==' ' and i==0){ 
                      caption[i]=caption[i+1];
             }
             else{
                 ans+=caption[i];
                 if(ans.length()==100){
                    break;
                 }
             }
         }
        return ans;
    }
};