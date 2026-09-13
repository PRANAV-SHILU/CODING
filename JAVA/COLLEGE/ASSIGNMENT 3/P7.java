import java.util.Scanner;

class card
{
    int id;
    String name;

    void getData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter User ID: ");
        id = sc.nextInt();

        sc.nextLine();

        System.out.print("Enter User Name: ");
        name = sc.nextLine();
    }

    void display()
    {
        System.out.println("\n--- User Information ---");
        System.out.println("User ID: " + id);
        System.out.println("User Name: " + name);
    }

    public static void main(String[] args)
    {
        probability p = new probability();

        p.getData();
        p.display();
    }
}

class probability extends card
{
    void display()
    {
        super.display();

        int possibleOutcome = 1;
        int totalOutcome = 52;

        double probability = (double) possibleOutcome / totalOutcome;

        System.out.println("\n--- Probability ---");
        System.out.println("Possible Outcome: " + possibleOutcome);
        System.out.println("Total Outcome: " + totalOutcome);
        System.out.println("Probability of Queen of Heart: " + probability);
    }
}

