import java.io.*;
import java.util.*;
class Result{
   static int LCS(int arr[], int n){
       int ans = 1;
       HashSet<Integer> set = new HashSet<Integer>();
       for (int i = 0; i < n; i++)
           set.add(arr[i]);
       for (int i = 0; i < n; i++){
           int count = 1;
           if (!set.contains(arr[i] - 1)){
               int j = arr[i] + 1;
               while (set.contains(j)){
                   count++;
                   j++;
               }
               if (count > ans)
                   ans = count;
           }
       }
       return ans;
   }
}
 
class Main{
   public static void main(String[] args){
       int arr[] = {10, 101, 12, 13, 11, 100, 25};
       int n = arr.length;
       System.out.print(Result.LCS(arr, n));
   }
}
