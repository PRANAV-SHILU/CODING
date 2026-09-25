package news;

public class newspaper
{
    String name;
    double price;
    String language;

    public newspaper(String name, double price, String language)
    {
        this.name = name;
        this.price = price;
        this.language = language;
    }

    public void display()
    {
        System.out.println("\nNewspaper Details");
        System.out.println("Name: " + name);
        System.out.println("Price: " + price);
        System.out.println("Language: " + language);
    }
}