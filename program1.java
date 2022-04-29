//Accept marks of a students into a 1D array from the keyboard and total marks and percentage
import java.util.*;
class helper
{
  void CalculateMarks(int total, int[] sub)
  {  
    int iAdd = 0;
    for(int i = 0; i < total; i++)
    {
      iAdd = iAdd + sub[i];
    }
    System.out.println("Total Marks is "+iAdd);  
    float per = (float)iAdd/total;
    System.out.println("Percentage is "+per);  
  }
}
class program1
{
  public static void main(String arg[])throws Exception
  {
    Scanner sobj = new Scanner(System.in);
    helper hobj = new helper();
    
    System.out.println("Enter Total Subjects :");
    int iNo = sobj.nextInt();
    int[] arr = new int[iNo]; 
    for(int i = 0; i < iNo ; i++)
    {
      System.out.println("Enter marks : ");
      arr[i]=sobj.nextInt();
    }
    hobj.CalculateMarks(iNo,arr);
  }
}