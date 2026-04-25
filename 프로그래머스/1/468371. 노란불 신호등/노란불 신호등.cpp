#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> signals) {
    int n = signals.size(); 
    

    for (int T = 1; T <= 2000000; ++T) {
        bool allYellow = true;
        
        for (int i = 0; i < n; ++i) {
            int green = signals[i][0];
            int yellow = signals[i][1];
            int red = signals[i][2];
            
            int cycle = green + yellow + red; 
            int timeInCycle = T % cycle;      
            

            if (!(timeInCycle > green && timeInCycle <= (green + yellow))) {
                allYellow = false;
                break;
            }
        }
        
       
        if (allYellow) {
            return T;
        }
    }
    
    return -1; 
}