import java.util.Scanner;

class Parallelogram
{
    double base, height;

    void getParallelogramData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter base of parallelogram: ");
        base = sc.nextDouble();

        System.out.print("Enter height of parallelogram: ");
        height = sc.nextDouble();
    }

    void parallelogramArea()
    {
        double area = base * height;
        System.out.println("Area of Parallelogram: " + area);
    }
}

class Rhombus extends Parallelogram
{
    double diagonal1, diagonal2;

    void getRhombusData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first diagonal of rhombus: ");
        diagonal1 = sc.nextDouble();

        System.out.print("Enter second diagonal of rhombus: ");
        diagonal2 = sc.nextDouble();
    }

    void rhombusArea()
    {
        double area = (diagonal1 * diagonal2) / 2;
        System.out.println("Area of Rhombus: " + area);
    }
}

class Trapezium extends Rhombus
{
    double side1, side2, trapeziumHeight;

    void getTrapeziumData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first parallel side of trapezium: ");
        side1 = sc.nextDouble();

        System.out.print("Enter second parallel side of trapezium: ");
        side2 = sc.nextDouble();

        System.out.print("Enter height of trapezium: ");
        trapeziumHeight = sc.nextDouble();
    }

    void trapeziumArea()
    {
        double area = ((side1 + side2) * trapeziumHeight) / 2;
        System.out.println("Area of Trapezium: " + area);
    }
}

public class P16
{
    public static void main(String[] args)
    {
        Trapezium t = new Trapezium();

        System.out.println("--- Parallelogram ---");
        t.getParallelogramData();
        t.parallelogramArea();

        System.out.println("\n--- Rhombus ---");
        t.getRhombusData();
        t.rhombusArea();

        System.out.println("\n--- Trapezium ---");
        t.getTrapeziumData();
        t.trapeziumArea();
    }
}