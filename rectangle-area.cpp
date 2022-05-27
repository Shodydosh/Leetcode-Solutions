class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int totalArea = abs(ax1-ax2) * abs(ay1-ay2);
        totalArea += abs(bx1-bx2) * abs(by1-by2);
        
        if(bx1>ax2 || bx2<ax1 || by1>ay2 || ay1>by2){
            return totalArea;
        }
        else{
            totalArea -= (min(ax2, bx2) - max(ax1, bx1))*(min(ay2, by2) - max(ay1, by1));                                            
        }
        return totalArea;
    }
};
