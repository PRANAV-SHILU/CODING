package volume;

public class geometry
{
    public double cube(double s)
    {
        return s * s * s;
    }

    public double cuboid(double l, double w, double h)
    {
        return l * w * h;
    }

    public double cyl(double r, double h)
    {
        return Math.PI * r * r * h;
    }

    public double cone(double r, double h)
    {
        return (Math.PI * r * r * h) / 3;
    }

    public double sphere(double r)
    {
        return (4 * Math.PI * r * r * r) / 3;
    }

    public double hemi(double r)
    {
        return (2 * Math.PI * r * r * r) / 3;
    }
}