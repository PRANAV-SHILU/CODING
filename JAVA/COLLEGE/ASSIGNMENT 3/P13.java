import java.util.Scanner;

class Square
{
    double side;

    void getSquareData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter side of square: ");
        side = sc.nextDouble();
    }

    void squareArea()
    {
        System.out.println("Area of Square: " + (side * side));
    }
}

class Rectangle extends Square
{
    double length, width;

    void getRectangleData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length of rectangle: ");
        length = sc.nextDouble();

        System.out.print("Enter width of rectangle: ");
        width = sc.nextDouble();
    }

    void rectangleArea()
    {
        System.out.println("Area of Rectangle: " + (length * width));
    }
}

public class P13
{
    public static void main(String[] args)
    {
        Rectangle r = new Rectangle();

        r.getSquareData();
        r.getRectangleData();

        System.out.println("\n--- Area ---");
        r.squareArea();
        r.rectangleArea();
    }
}