import java.util.Scanner;

interface Shape
{
    void area();
}

interface Measurable
{
    double getArea();
}

class Circle implements Shape, Measurable
{
    double radius;

    Circle(double radius)
    {
        this.radius = radius;
    }

    public void area()
    {
        System.out.println("Area of Circle: " + getArea());
    }

    public double getArea()
    {
        return 3.14 * radius * radius;
    }
}

class RightTriangle implements Shape, Measurable
{
    double base, height;

    RightTriangle(double base, double height)
    {
        this.base = base;
        this.height = height;
    }

    public void area()
    {
        System.out.println("Area of Right Angle Triangle: " + getArea());
    }

    public double getArea()
    {
        return 0.5 * base * height;
    }
}

class Square implements Shape, Measurable
{
    double side;

    Square(double side)
    {
        this.side = side;
    }

    public void area()
    {
        System.out.println("Area of Square: " + getArea());
    }

    public double getArea()
    {
        return side * side;
    }
}

public class P10
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter radius of circle: ");
        double r = sc.nextDouble();

        System.out.print("Enter base of right angle triangle: ");
        double b = sc.nextDouble();

        System.out.print("Enter height of right angle triangle: ");
        double h = sc.nextDouble();

        System.out.print("Enter side of square: ");
        double s = sc.nextDouble();

        Circle c = new Circle(r);
        RightTriangle t = new RightTriangle(b, h);
        Square sq = new Square(s);

        System.out.println("\n--- Area ---");

        c.area();
        t.area();
        sq.area();
    }
}