/* LEETCODE
121. Best Time to Buy and Sell Stock
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
 */

import java.util.*;

class arr1 {
          static int maxProfit(int[] prices){
                    //  minimum price is the first price
                    int buy_price = prices[0];
                    //  minimum  profit is zero
                    int profit = 0;

                    for (int i = 1; i < prices.length; i++) {

                      // if the current price is less update the buy_price
                      if (prices[i] < buy_price) {
                        buy_price = prices[i];
                      }
                      else {
                        // else check if we can get a better profit
                        int current_profit = prices[i] - buy_price;
                        if (current_profit >= profit){
                            profit = current_profit;
                        }
                      }
                    }
                    return profit;
          }
          public static void main(String arg[]){
                    System.out.print("Enter Length of array : ");
                    Scanner sobj = new Scanner(System.in);
                    int iLen = sobj.nextInt();
                    int[] arr = new int[iLen];
                    System.out.println("Enter price : ");
                    for(int i = 0 ;i <iLen; i++){
                              arr[i]=sobj.nextInt();
                    }
                    int iProfit = maxProfit(arr);
                    System.out.println("Profit is :"+iProfit);
          }
          
}