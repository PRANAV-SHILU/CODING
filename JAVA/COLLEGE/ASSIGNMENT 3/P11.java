import java.util.Scanner;

interface Square
{
    void calculateSquare();
}

class Number implements Square
{
    int num;

    Number(int num)
    {
        this.num = num;
    }

    public void calculateSquare()
    {
        int a = (num / 10) * 10; // multiple by 10 due to tens place value
        int b = num % 10;

        int square = (a * a) + (2 * a * b) + (b * b);

        System.out.println("Square of " + num + " = " + square);
    }
}

public class P11
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter any two digit number: ");
        int num = sc.nextInt();

        Number n = new Number(num);

        n.calculateSquare();
    }
}