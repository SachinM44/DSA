// class Solution {
// public:
//     string convert(string s, int numRows) {
//         if(numRows == 1 ) return s;
//         int i=0,row=0;
//         bool direction=true;
//         vector<string>zigzag(numRows);
//         while(true){
//             if(direction){
//              while(row< numRows && i<s.size() ){
//                 zigzag[row++].push_back(s[i++]); // means here what shappens is first it check the row which is less then numrows , and checks i less then s size , then in the zigzag vector it start form the first row and pushed s[i] then do row++ means second row , then 3rd how , like that it will fill as mentioned in the note 
//              }// i mean it make the placement for a,b,c
//              // now its time to make zig zag with D in caes of abcd , for that do -2 with row 
          
//             }else{
//                    row=numRows-2;
//                    while(row < numRows && i < s.size()){
//                     zigzag[row--].push_back(s[i++]); // it will make the correct placement for D and f
//                    }
//                    row=1; // then it will start from f placement
//             }
//             if(i >= s.size()) break;
//               direction=(!direction);
//         }
//         // to push the ziqzag format to of abcdefg in this format : afkbdgich
//        string ans="";
//        for(int i =0 ; i < zigzag.size(); i++){
//         ans += zigzag[i];
//        } 
//        return ans;
//     }
// };
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        vector<string> zigzag(numRows);
        int i = 0, row = 0;
        bool direction = true; // true for down, false for up

        while (i < s.size()) {
            zigzag[row].push_back(s[i++]);

            if (direction) {
                row++;
                if (row == numRows) {
                    row -= 2;
                    direction = false;
                }
            } else {
                row--;
                if (row == -1) {
                    row += 2;
                    direction = true;
                }
            }
        }

        string ans = "";
        for (const auto& str : zigzag) {
            ans += str;
        }

        return ans;
    }
};
