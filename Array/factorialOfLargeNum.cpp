class Solution {
public:
    vector<int> factorial(int N){
       vector<int> v;
       int carry=0,value=0;

        v.push_back(1);

        for(int i=2;i<=N;i++){

            for(int j=0;j<v.size();j++){

                value=v[j]*i+carry;

                v[j]=value%10;

                carry=value/10;

            } 

            while(carry>0){

                value=carry%10;

                v.push_back(value);

                carry=carry/10;

            }

        }

        reverse(v.begin(),v.end());

        return v;
    }
};
