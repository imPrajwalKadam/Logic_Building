import java.util.*;

class Arithmatic {
  public int iNo = 0;
  public Arithmatic(int mValue) {
    iNo = mValue;
  }
  public boolean ChkPrime() {
    System.out.println(iNo);
    int iCnt = 0;
    for (iCnt = 2; iCnt <= iNo / 2; iCnt++) {
      if ((iNo % iCnt) == 0) {
        break;
      }
    }
    System.out.println(iCnt);
    if (iCnt == (iNo / 2) + 1) {
      return true;
    } else {
      return false;
    }
  }
  public boolean ChkEven()
  {
    if((iNo % 2) == 0)
    {
      return true;
    }else{
      return false;
    }
  }
// 142 = 1*1*1 + 4*4*4 + 2*2*2 = if 142 armstrng else not armstrng
//8208 = 8*8*8*8 + 2*2*2*2 + 0*0*0*0 + 8*8*8*8 = 8208
  public boolean ChkArm()
  {
    if(iNo < 0 )
    {
      iNo = -iNo;
    }
     int iMult = 1;
     int iAdd = 0;
     int iDigit = 0;
     int temp = iNo;

     int iCnt = 0;
     while(temp != 0)
     {
       temp = temp / 10;
       iCnt++;
     }
    //  System.out.println("iCnt is"+ iCnt);

    temp = iNo;
    while(temp != 0)
    {
      iDigit = temp % 10;
      for(int i = 1 ;i <= iCnt; i++)
      {
        iMult = iMult * iDigit; 
      }
      iAdd = iAdd + iMult;
      iMult = 1;
      temp = temp / 10;
    }
    System.out.println(iDigit);
    if(iAdd == iNo)
    {
      return true;
    }else{
      return false;
    }
  }
}

class practice {
  public static void main(String arg[]) throws Exception {

    Scanner sobj = new Scanner(System.in);
    boolean bret;
    System.out.println("Enter number");
    int i = sobj.nextInt();
    Arithmatic aobj = new Arithmatic(i);

    bret =  aobj.ChkArm();
    System.out.println(bret);

    if (bret == true) {
      System.out.println("Number is armstrong");
    } else {
      System.out.println("Number is Not armstrong");
    }

  }
}
