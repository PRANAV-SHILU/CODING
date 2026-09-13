import java.util.Scanner;

class fruit
{
    String fruitname;
    double fruitprice;

    void getFruitData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Fruit Name: ");
        fruitname = sc.nextLine();

        System.out.print("Enter Fruit Price: ");
        fruitprice = sc.nextDouble();
    }

    void display()
    {
        System.out.println("Fruit Name: " + fruitname);
        System.out.println("Fruit Price: " + fruitprice);
    }

    public static void main(String[] args)
    {
        citrus c = new citrus();
        sweet s = new sweet();

        System.out.println("--- Citrus Fruit Input ---");
        c.getCitrusData();

        System.out.println("\n--- Sweet Fruit Input ---");
        s.getSweetData();

        c.displayCitrus();
        s.displaySweet();
    }
}

class citrus extends fruit
{
    void getCitrusData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter Citrus Fruit Name: ");
        fruitname = sc.nextLine();

        System.out.print("Enter Citrus Fruit Price: ");
        fruitprice = sc.nextDouble();
    }

    void displayCitrus()
    {
        System.out.println("\n--- Citrus Fruit ---");
        display();
    }
}

class sweet extends fruit
{
    void getSweetData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter Sweet Fruit Name: ");
        fruitname = sc.nextLine();

        System.out.print("Enter Sweet Fruit Price: ");
        fruitprice = sc.nextDouble();
    }

    void displaySweet()
    {
        System.out.println("\n--- Sweet Fruit ---");
        display();
    }
}

