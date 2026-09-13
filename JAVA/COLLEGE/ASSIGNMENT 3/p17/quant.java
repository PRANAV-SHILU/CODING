import java.util.Scanner;
import maths.basicinfo;

public class quant
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first number: ");
        double firstNumber = scanner.nextDouble();

        System.out.print("Enter second number: ");
        double secondNumber = scanner.nextDouble();

        basicinfo numbers = new basicinfo(firstNumber, secondNumber);

        System.out.println("\nMathematical Operations");
        System.out.println("Addition: " + numbers.add());
        System.out.println("Subtraction: " + numbers.subtract());
        System.out.println("Multiplication: " + numbers.multiply());
        System.out.println("Division: " + numbers.divide());
        
    }
}