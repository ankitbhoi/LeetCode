class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance=0;
        for(auto i=1;i<=mainTank;i++){
            if(additionalTank!=0 && i%5==0){   
                additionalTank-=1;
                mainTank+=1;
            }
            distance+=10;
        }
        return distance;
    }
};