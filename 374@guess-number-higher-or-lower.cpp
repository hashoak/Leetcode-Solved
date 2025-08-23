/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        uint s=0;
        short x=guess(n/2);
        while(x) {
            if(x<0) n=(s+n)/2-1;
            else s=(s+n)/2+1;
            x=guess((s+n)/2);
        }
        return (s+n)/2;
    }
};