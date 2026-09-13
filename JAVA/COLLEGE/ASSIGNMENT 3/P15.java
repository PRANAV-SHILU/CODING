import java.util.Scanner;

class Circle
{
    double radius;

    void getRadius()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter radius: ");
        radius = sc.nextDouble();
    }

    void circleArea()
    {
        double area = Math.PI * radius * radius;
        System.out.println("Area of Circle: " + area);
    }
}

class SemiCircle extends Circle
{
    void semiCircleArea()
    {
        double area = (Math.PI * radius * radius) / 2;
        System.out.println("Area of Semi Circle: " + area);
    }
}

class Ring extends Circle
{
    double innerRadius;

    void getInnerRadius()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter inner radius of ring: ");
        innerRadius = sc.nextDouble();
    }

    void ringArea()
    {
        double area = Math.PI * (radius * radius - innerRadius * innerRadius);
        System.out.println("Area of Ring: " + area);
    }
}

class Sector extends Circle
{
    double angle;

    void getAngle()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter angle of sector: ");
        angle = sc.nextDouble();
    }

    void sectorArea()
    {
        double area = (angle / 360) * Math.PI * radius * radius;
        System.out.println("Area of Sector: " + area);
    }
}

public class P15
{
    public static void main(String[] args)
    {
        SemiCircle s = new SemiCircle();
        Ring r = new Ring();
        Sector sec = new Sector();

        System.out.println("--- Circle ---");
        s.getRadius();
        s.circleArea();

        System.out.println("\n--- Semi Circle ---");
        s.semiCircleArea();

        System.out.println("\n--- Ring ---");
        r.getRadius();
        r.getInnerRadius();
        r.ringArea();

        System.out.println("\n--- Sector ---");
        sec.getRadius();
        sec.getAngle();
        sec.sectorArea();
    }
}