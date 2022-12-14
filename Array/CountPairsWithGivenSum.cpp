
class Solution{   

public:

    int getPairsCount(int arr[], int n, int k) {

        // code here

       unordered_map<int,int> m;

       int count=0;

    for(int i=0;i<n;i++){

    int value = arr[i];

   int neededvalue = k-value;

   if(m.find(neededvalue)!= m.end()){

               count+=m[neededvalue];

//FREQUENCY OF THAT ELEMENT IN AN ARRAY

           }

          m[arr[i]]++;

       }

     return count;

    }

};
