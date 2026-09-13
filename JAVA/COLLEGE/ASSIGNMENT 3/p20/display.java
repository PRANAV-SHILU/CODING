import java.util.Scanner;
import volume.geometry;

public class display
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        geometry g = new geometry();

        System.out.print("Enter cube side: ");
        double s = sc.nextDouble();
        System.out.println("Cube volume: " + g.cube(s));

        System.out.print("Enter cuboid length: ");
        double l = sc.nextDouble();
        System.out.print("Enter cuboid width: ");
        double w = sc.nextDouble();
        System.out.print("Enter cuboid height: ");
        double h = sc.nextDouble();
        System.out.println("Cuboid volume: " + g.cuboid(l, w, h));

        System.out.print("Enter cylinder radius: ");
        double r = sc.nextDouble();
        System.out.print("Enter cylinder height: ");
        h = sc.nextDouble();
        System.out.println("Right circular cylinder volume: " + g.cyl(r, h));

        System.out.print("Enter cone radius: ");
        r = sc.nextDouble();
        System.out.print("Enter cone height: ");
        h = sc.nextDouble();
        System.out.println("Right circular cone volume: " + g.cone(r, h));

        System.out.print("Enter sphere radius: ");
        r = sc.nextDouble();
        System.out.println("Sphere volume: " + g.sphere(r));

        System.out.print("Enter hemisphere radius: ");
        r = sc.nextDouble();
        System.out.println("Hemisphere volume: " + g.hemi(r));

        sc.close();
    }
}