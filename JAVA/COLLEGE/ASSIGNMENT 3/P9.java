import java.util.Scanner;

abstract class calculator
{
    double a, b;

    abstract void operation();

    void getData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        a = sc.nextDouble();

        System.out.print("Enter second number: ");
        b = sc.nextDouble();
    }
}

class calculation extends calculator
{
    void operation()
    {
        System.out.println("\n--- Mathematical Operations ---");

        System.out.println("Addition: " + (a + b));
        System.out.println("Subtraction: " + (a - b));
        System.out.println("Multiplication: " + (a * b));
        System.out.println("Division: " + (a / b));
    }
}

public class P9
{
    public static void main(String[] args)
    {
        calculation c = new calculation();

        c.getData();
        c.operation();
    }
}