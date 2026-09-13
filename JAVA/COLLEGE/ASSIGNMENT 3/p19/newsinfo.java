import java.util.Scanner;
import news.newspaper;

public class newsinfo
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter newspaper name: ");
        String name = sc.nextLine();

        System.out.print("Enter newspaper price: ");
        double price = sc.nextDouble();
        sc.nextLine();

        System.out.print("Enter newspaper language (English / Gujarati): ");
        String language = sc.nextLine();

        newspaper n = new newspaper(name, price, language);
        n.display();

        sc.close();
    }
}