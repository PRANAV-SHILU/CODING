import java.util.Scanner;
class gold{
    double goldp,goldw;
    void getgolddata(){
        Scanner sc=new Scanner(System.in);
        System.out.print("enter gold weight : ");
        goldw=sc.nextDouble();
        System.out.print("enter gold price : ");
        goldp=sc.nextDouble();
    }
}
class silver extends gold{
    double silp,silw;
    void getsildata(){
        Scanner sc=new Scanner(System.in);
        System.out.print("enter silver weight : ");
        silw=sc.nextDouble();
        System.out.print("enter silver price : ");
        silp=sc.nextDouble();
    }
}
class platinum extends silver{
    double plap,plaw;
    void getpladata(){
        Scanner sc=new Scanner(System.in);
        System.out.print("enter platinum weight : ");
        plaw=sc.nextDouble();
        System.out.print("enter platinum price : ");
        plap=sc.nextDouble();
    }

    void display(){
        System.out.println("\n--- Metal Information ---");
        System.out.println("Gold Weight: " + goldw);
        System.out.println("Gold Price: " + goldp);

        System.out.println("Silver Weight: " + silw);
        System.out.println("Silver Price: " + silp);

        System.out.println("Platinum Weight: " + plaw);
        System.out.println("Platinum Price: " + plap);

    String[] name = {"Gold", "Silver", "Platinum"};
    double[] price = {goldp, silp, plap};

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (price[i] < price[j])
            {
                double temp = price[i];
                price[i] = price[j];
                price[j] = temp;

                String t = name[i];
                name[i] = name[j];
                name[j] = t;
            }
        }
    }

    System.out.println("\nPrice Order:");
    System.out.println(name[0] + " > " + name[1] + " > " + name[2]);
    }
}
public class P2{
    public static void main(String[]args){
        platinum obj=new platinum();
        obj.getgolddata();
        obj.getsildata();
        obj.getpladata();
        obj.display();
    }
}