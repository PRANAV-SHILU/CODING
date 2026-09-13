import java.util.Scanner;

class zoo
{
    int enclosureid;
    String enclosurename;
    String animalname;

    void getData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Enclosure ID: ");
        enclosureid = sc.nextInt();

        sc.nextLine();

        System.out.print("Enter Enclosure Name: ");
        enclosurename = sc.nextLine();

        System.out.print("Enter Animal Name: ");
        animalname = sc.nextLine();
    }

    void display()
    {
        System.out.println("Enclosure ID: " + enclosureid);
        System.out.println("Enclosure Name: " + enclosurename);
        System.out.println("Animal Name: " + animalname);
    }

    public static void main(String[] args)
    {
        animalsection a = new animalsection();
        birdsection b = new birdsection();

        a.animalData();
        b.birdData();
    }
}

class animalsection extends zoo
{
    void animalData()
    {
        System.out.println("\n--- Animal Section ---");
        getData();
        display();
    }
}

class birdsection extends zoo
{
    void birdData()
    {
        System.out.println("\n--- Bird Section ---");
        getData();
        display();
    }
}

