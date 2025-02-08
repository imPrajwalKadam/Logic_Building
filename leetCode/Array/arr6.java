/*
  26.Remove Duplicates from Sorted Array
  Input: nums = [1,1,1,2,2,3]
  Output: 2, nums = [1,1,2,2,3]         
  Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
  It does not matter what you leave beyond the returned k (hence they are underscores).
  */
import java.util.*;

class arr6 {
    static int removeDuplicates(int[] nums) {
          if (nums.length <= 2) return nums.length; 
        
          int j = 2;
          for (int i = 2; i < nums.length; i++) {
              if (nums[i] != nums[j - 2]) { 
                  nums[j] = nums[i];
                  j++;
              }
          }
          return j;
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter Length of array: ");
        int iLen = sobj.nextInt();
        int[] arr = new int[iLen];

        System.out.println("Enter array elements (sorted): ");
        for (int i = 0; i < iLen; i++) {
            arr[i] = sobj.nextInt(); 
        }

        int uniqueCount = removeDuplicates(arr);

        System.out.println("Number of unique elements: " + uniqueCount);

        System.out.print("Modified array: ");
        for (int i = 0; i < uniqueCount; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
