import java.util.Scanner;

class heaven
{
    int doorNumber;

    void getDoorData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Door Number (1 or 2): ");
        doorNumber = sc.nextInt();
    }

    public static void main(String[] args)
    {
        god g = new god();
        angel a = new angel();

        System.out.println("--- God ---");
        g.getDoorData();
        g.getGodData();

        System.out.println("\n--- Angel ---");
        a.getDoorData();
        a.getAngelData();

        g.displayGod();
        a.displayAngel();
    }
}

class god extends heaven
{
    String godGate;

    void getGodData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter God Gate: ");
        godGate = sc.next();
    }

    void displayGod()
    {
        System.out.println("\n--- God Information ---");
        System.out.println("Door Number: " + doorNumber);
        System.out.println("God Gate: " + godGate);
    }
}

class angel extends heaven
{
    String angelGate;

    void getAngelData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Angel Gate: ");
        angelGate = sc.next();
    }

    void displayAngel()
    {
        System.out.println("\n--- Angel Information ---");
        System.out.println("Door Number: " + doorNumber);
        System.out.println("Angel Gate: " + angelGate);
    }
}

