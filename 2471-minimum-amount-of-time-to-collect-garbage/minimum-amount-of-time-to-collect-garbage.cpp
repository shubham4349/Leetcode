class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // MMM- 3 units on metal gravage-> 1 unit ko collect krne me 1 min lagt h
        
        // 3 truck bana, for g, p, m respectively

        // g-> 4+2+4+3= 13 min me sara glass uthega
        // p-> 2p+ 2+4=6 
        // total time=21 jisme sara garbage uthe

        int n=garbage.size(); 
        int tg,tp,tm ; // truck g, trick paper etc

        int g=0,p=0,m=0;
        for(string& s:garbage){
            for(char& ch:s){
                if(ch=='G') g++;
                else if(ch=='P') p++;
                else m++;
            }
        }
        int g_limit=0,p_limit=0,m_limit=0;
        bool boolg=true,boolm=true,boolp=true;
        for(int i=n-1; i>=0; i--){
                for(int j=garbage[i].size()-1; j>=0; j--){
                    if(garbage[i][j]=='G'){
                        if(boolg==true){
                            g_limit=i;
                            boolg=false;
                        }
                    }
                    if(garbage[i][j]=='M'){
                        if(boolm==true){
                            m_limit=i;
                            boolm=false;
                        }
                    }
                    if(garbage[i][j]=='P'){
                        if(boolp==true){
                            p_limit=i;
                            boolp=false;
                        }
                    }
                }
        } 
        int totalg=g;
        // g_limit-1 tak travese krna padega
        for(int i=0; i<=g_limit-1; i++){
            totalg+=travel[i];
        }
        int totalm=m;
       
        for(int i=0; i<=m_limit-1; i++){
            totalm+=travel[i];
        }
        int totalp=p;
     
        for(int i=0; i<=p_limit-1; i++){
            totalp+=travel[i];
        }
        return totalg+totalp+totalm;

        
    }
};