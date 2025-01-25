import java.util.*;

class arr2 {
    static int removeDuplicates(int[] nums) {
        int j = 1; 
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) { // Check if the current number is different from the previous one
                nums[j] = nums[i]; // Place the unique element at index 'j'
                j++;
            }
        }
        return j; // 'j' represents the count of unique elements
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter Length of array: ");
        int iLen = sobj.nextInt();
        int[] arr = new int[iLen];

        System.out.println("Enter array elements (sorted): ");
        for (int i = 0; i < iLen; i++) {
            arr[i] = sobj.nextInt(); // Input elements into the array
        }

        int uniqueCount = removeDuplicates(arr);

        System.out.println("Number of unique elements: " + uniqueCount);

        // Print the modified array up to the count of unique elements
        System.out.print("Modified array: ");
        for (int i = 0; i < uniqueCount; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
