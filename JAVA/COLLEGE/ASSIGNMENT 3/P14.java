import java.util.Scanner;

class Triangle
{
    double base, height;

    void getData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter base: ");
        base = sc.nextDouble();

        System.out.print("Enter height: ");
        height = sc.nextDouble();
    }

    void displayArea(double area)
    {
        System.out.println("Area of Triangle: " + area);
    }
}

class RightTriangle extends Triangle
{
    void rightTriangleArea()
    {
        double area = 0.5 * base * height;
        System.out.println("Area of Right Triangle: " + area);
    }
}

class EquilateralTriangle extends RightTriangle
{
    double side;

    void getEquilateralData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter side of Equilateral Triangle: ");
        side = sc.nextDouble();
    }

    void equilateralArea()
    {
        double area = (Math.sqrt(3) / 4) * side * side;
        System.out.println("Area of Equilateral Triangle: " + area);
    }
}

class IsoscelesTriangle extends EquilateralTriangle
{
    double equalSide;

    void getIsoscelesData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter equal side: ");
        equalSide = sc.nextDouble();
    }

    void isoscelesArea()
    {
        double area = (base * height) / 2;
        System.out.println("Area of Isosceles Triangle: " + area);
    }
}

public class P14
{
    public static void main(String[] args)
    {
        IsoscelesTriangle t = new IsoscelesTriangle();

        t.getData();
        t.rightTriangleArea();

        t.getEquilateralData();
        t.equilateralArea();

        t.getIsoscelesData();
        t.isoscelesArea();
    }
}