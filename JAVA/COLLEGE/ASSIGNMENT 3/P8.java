import java.util.Scanner;

abstract class mall
{
    int itemId;
    double itemPrice;
    int itemQuantity;

    abstract void product();

    void getData()
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Item ID: ");
        itemId = sc.nextInt();

        System.out.print("Enter Item Price: ");
        itemPrice = sc.nextDouble();

        System.out.print("Enter Item Quantity: ");
        itemQuantity = sc.nextInt();
    }

    void display()
    {
        double totalPrice = itemPrice * itemQuantity;

        System.out.println("\n--- Product Information ---");
        System.out.println("Item ID: " + itemId);
        System.out.println("Item Price: " + itemPrice);
        System.out.println("Item Quantity: " + itemQuantity);
        System.out.println("Total Price: " + totalPrice);
    }
}

class product extends mall
{
    void product()
    {
        System.out.println("Product details entered successfully.");
    }
}

public class P8
{
    public static void main(String[] args)
    {
        product p = new product();

        p.getData();
        p.product();
        p.display();
    }
}