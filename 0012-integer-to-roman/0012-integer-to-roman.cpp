class Solution {
public:
    string intToRoman(int num) {
        int n=num;
         vector<char> a;
        
        if(n >= 1000){
            while(n >= 1000){
                n -= 1000;
                a.push_back('M');
            }
        }
        if(n >= 900){
            n -= 900;
            a.push_back('C');
            a.push_back('M');
        }
        if(n >= 500){
            while(n >= 500){
                n -= 500;
                a.push_back('D');
            }
        }
        if(n >= 400){
            n -= 400;
            a.push_back('C');
            a.push_back('D');
        }
        if(n >= 100){
            while(n >= 100){
                n -= 100;
                a.push_back('C');
            }
        }
        if(n >= 90){
            n -= 90;
            a.push_back('X');
            a.push_back('C');
        }
        if(n >= 50){
            while(n >= 50){
                n -= 50;
                a.push_back('L');
            }
        }
        if(n >= 40){
            n -= 40;
            a.push_back('X');
            a.push_back('L');
        }
        if(n >= 10){
            while(n >= 10){
                n -= 10;
                a.push_back('X');
            }
        }
        if(n >= 9){
            n -= 9;
            a.push_back('I');
            a.push_back('X');
        }
        if(n >= 5){
            while(n >= 5){
                n -= 5;
                a.push_back('V');
            }
        }
        if(n >= 4){
            n -= 4;
            a.push_back('I');
            a.push_back('V');
        }
        if(n >= 1){
            while(n >= 1){
                n -= 1;
                a.push_back('I');
            }
        }

        return string(a.begin(), a.end());
    
    }
};