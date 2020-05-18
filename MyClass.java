import java.util.Scanner;  // Import the Scanner class

class MyClass {
  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in);  // Create a Scanner object
    int x = myObj.nextInt();
    int y = myObj.nextInt();
    
    if(x>0&&y>0)
        System.out.println(1);
    else if(x<0&&y>0)
        System.out.println(2);
    else if(x<0&&y<0)
        System.out.println(3);
    else if(x>0&&y<0)
        System.out.println(4);
    

    
  }
}