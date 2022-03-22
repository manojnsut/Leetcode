class Solution {
public:
     string getSmallestString(int n, int k) {
         

         string t = ""; 

         for (int i = 0 ; i < n ; i ++ ) {

         	     for (int j = 1 ; j <= 26 ; j ++ ) {

         	     	     if ((k - j) <= 26 * (n - 1 - i)) {

         	     	     	  int x = j - 1 ; 
         	     	     	  t += (x + 'a') ; 
         	     	     	  k -= j ; 
         	     	     	  break ; 
         	     	     }
         	     }

         	     if (i == n - 1 && k > 0) {

         	     	 t += (k - 1)  + 'a' ;
         	     }
         }

         return t ; 
    }
};