class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
     string s = bitset<32>(n).to_string();
     reverse(s.begin(),s.end());
     return bitset<32>(s).to_ulong();
        
    }
};
