class Solution {
public:
    string word(int n,int i)
    {
        switch(n)
        {
        case 0:
            if(i==9) return "Ten";
        case 1:
            if(i==1) return "One";
            else if(i==2) return "Ten";
            else return "Eleven";
        case 2:
            if(i==1) return "Two";
            else if(i==2) return "Twenty";
            else return "Twelve";
        case 3:
            if(i==1) return "Three";
            else if(i==2) return "Thirty";
            else return "Thirteen";
        case 4:
            if(i==1) return "Four";
            else if(i==2) return "Forty";
            else return "Fourteen";
        case 5:
            if(i==1) return "Five";
            else if(i==2) return "Fifty";
            else return "Fifteen";
        case 6:
            if(i==1) return "Six";
            else if(i==2) return "Sixty";
            else return "Sixteen";
        case 7:
            if(i==1) return "Seven";
            else if(i==2) return "Seventy";
            else return "Seventeen";
        case 8:
            if(i==1) return "Eight";
            else if(i==2) return "Eighty";
            else return "Eighteen";
        case 9:
            if(i==1) return "Nine";
            else if(i==2) return "Ninety";
            else return "Nineteen";
        default:
            return "";
        }
    }

    string numberToWords(int n)
    {
        string w="",sw;
        if(n==0) return "Zero";
        int i=0,s,h,t,o;
        while(n!=0)
        {
            sw="";
            s=n%1000;
            n/=1000;
            if(s)
            {
                h=s/100,t=(s%100)/10,o=s%10;
                if(h) sw+=word(h,1)+" Hundred ";
                if(t)
                {
                    if(t==1) sw+=word(o,9)+" ";
                    else
                    {
                        sw+=word(t,2)+" ";
                        if(o) sw+=word(o,1)+" ";
                    }
                }
                else if(o) sw+=word(o,1)+" ";
                switch(i)
                {
                case 0:
                    break;
                case 1:
                    sw+="Thousand ";
                    break;
                case 2:
                    sw+="Million ";
                    break;
                case 3:
                    sw+="Billion ";
                    break;
                case 4:
                    sw+="Trillion ";
                    break;
                default:
                    sw+="   Kya Rey? Setting aaa?   ";
                }
                w=sw+w;
            }
            i++;
        }
        return w.substr(0,w.length()-1);
    }
};