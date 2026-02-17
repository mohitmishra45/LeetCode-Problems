class Solution {
public:
    
    int countBits(int n) {
        int count = 0;
        
        while(n > 0) {
            if(n % 2 == 1)   // agar last bit 1 hai
                count++;
            
            n = n / 2;      // right shift
        }
        
        return count;
    }
    
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        
        for(int hour = 0; hour < 12; hour++) {
            for(int minute = 0; minute < 60; minute++) {
                
                int totalBits = countBits(hour) + countBits(minute);
                
                if(totalBits == turnedOn) {
                    
                    string time = to_string(hour) + ":";
                    
                    if(minute < 10)
                        time += "0";   // 01, 02 format
                    
                    time += to_string(minute);
                    
                    ans.push_back(time);
                }
            }
        }
        
        return ans;
    }
};
