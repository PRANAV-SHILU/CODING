import java.util.Scanner;

interface country
{
    void countryMessage();
}

interface india extends country
{
    void indiaMessage();
}

interface japan extends country
{
    void japanMessage();
}

class village implements india, japan
{
    public void countryMessage()
    {
        System.out.println("Country: Base Interface");
    }

    public void indiaMessage()
    {
        System.out.println("India: Country of God");
    }

    public void japanMessage()
    {
        System.out.println("Japan: Country of Paradise");
    }

    void villageMessage()
    {
        System.out.println("Village: Village of God and Paradise");
    }
}

public class P12
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        village v = new village();

        System.out.println("1. India");
        System.out.println("2. Japan");
        System.out.println("3. Village");

        System.out.print("Enter your choice: ");
        int choice = sc.nextInt();

        switch (choice)
        {
            case 1:
                v.indiaMessage();
                break;

            case 2:
                v.japanMessage();
                break;

            case 3:
                v.villageMessage();
                break;

            default:
                System.out.println("Invalid choice");
        }
    }
}