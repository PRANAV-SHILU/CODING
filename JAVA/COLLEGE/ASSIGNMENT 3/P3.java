import java.util.Scanner;

class history
{
    int id;
    String time;

    void getData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter ID: ");
        id = sc.nextInt();

        System.out.print("Enter Time (Example: 200BC or 300AD): ");
        time = sc.next();
    }
}

class ancient extends history
{
    void checkAncient()
    {
        if (time.endsWith("BC"))
        {
            System.out.println("Message: Ancestors");
        }
    }
}

class modern extends ancient
{
    void checkModern()
    {
        if (time.endsWith("AD"))
        {
            System.out.println("Message: Descendants");
        }
    }

    void display()
    {
        System.out.println("\n--- History Information ---");
        System.out.println("ID: " + id);
        System.out.println("Time: " + time);

        checkAncient();
        checkModern();
    }
}

public class P3
{
    public static void main(String[] args)
    {
        modern m = new modern();

        m.getData();
        m.display();
    }
}