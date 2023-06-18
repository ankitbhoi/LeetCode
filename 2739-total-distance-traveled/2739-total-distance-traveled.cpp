class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance=0;
        for(auto i=1;i<=mainTank;i++){
            distance+=10;
            if(additionalTank!=0 && i%5==0){   
                additionalTank-=1;
                mainTank+=1;
            }
        }
        return distance;
    }
};