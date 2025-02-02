/*
PROBLEMS ON STRING
LEETCODE
58. Length of Last Word
Input: s = "Jay Ganesh"
Output: 6
Explanation: The last word is "World" with length 5.
*/
import java.util.*;

class arr5 {
          static int lengthOfLastWord(String s) {
                    s = s.trim();
                    char[] charArray = s.toCharArray();
                    int iCnt = 0;
                    int i = charArray.length - 1;
                    while(i >= 0 && charArray[i] != ' '){
                      iCnt++;
                      i--;
                    }
                    return iCnt;
          }

          public static void main(String arg[]){
                    Scanner sobj = new Scanner(System.in);
                    System.out.print("Enter string :");
                    String str = sobj.nextLine();
                    int LastWordLen = lengthOfLastWord(str);
                    System.out.print("Last word length is :"+LastWordLen);
                    System.gc();
          }
}