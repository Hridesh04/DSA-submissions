class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(string i : operations){
            if(i == "C"){
                s.pop();
            }else if(i == "D"){
                int a = s.top()*2;
                s.push(a);
            }else if(i == "+"){
                int a = s.top(); s.pop();
                int b = s.top(); s.pop();
                int c = a + b;
                s.push(b);
                s.push(a);
                s.push(c);
            }else{
                s.push(stoi(i));
            }
        }
        int sum = 0;
        while(!s.empty()){
            sum = s.top() + sum;
            s.pop();
        } 

        return sum;
    }

    
};