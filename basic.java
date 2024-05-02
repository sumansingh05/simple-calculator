import java.util.Scanner;
public class basic{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value of a:");
        int a = sc.nextInt();
        System.out.print("Enter value of b:");
        int b = sc.nextInt();
        System.out.print("Enter operator:");
        char operator = sc.next().charAt(0);

        switch(operator){
            case '+' : System.out.println("Your result is:" + (a+b));
                        break;
            case '-' : System.out.println("Your result is:" + (a-b));
                        break;
            case '*' : System.out.println("Your result is:" + (a*b));
                        break;
            case '/' : System.out.println("Your result is:" + (a/b));
                        break;
            case '%' : System.out.println("Your result is:" + (a%b));
                        break;
            default:System.out.println("wrong operator");
           

        }
    }
}