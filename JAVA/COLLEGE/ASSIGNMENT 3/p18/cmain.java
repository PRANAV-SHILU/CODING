import java.util.Scanner;
import convert.compute;

public class cmain
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        compute co = new compute();

        System.out.print("Enter metre: ");
        double m = sc.nextDouble();
        System.out.println("Centimeter: " + co.m2c(m));

        System.out.print("Enter Fahrenheit: ");
        double f = sc.nextDouble();
        System.out.println("Celsius: " + co.f2c(f));

        System.out.print("Enter rim: ");
        double r = sc.nextDouble();
        System.out.println("Paper: " + co.r2p(r));

        sc.close();
    }
}