import java.util.Scanner;
class cprice{
    int id;
    String name;
    double cost;
    void getdata(){
        Scanner sc=new Scanner(System.in);
        System.out.print("enter product id : ");
        id=sc.nextInt();
        sc.nextLine();
        System.out.print("enter product name : ");
        name=sc.nextLine();
        System.out.print("enter cost : ");
        cost=sc.nextDouble();
    }
}
class pprice extends cprice{
    double sp,profit;
    void calprofit(){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter selling price : ");
        sp=sc.nextDouble();
        profit=sp-cost;
    }
    void display(){
        System.out.print("\n\nproduct details...\n");
        System.out.print("id : "+id);
        System.out.println("name : "+name);
        System.out.println("cost : "+cost);
        System.out.println("selling price : "+sp);
        System.out.println("profit : "+profit);
    }
}

public class P1{
    public static void main(String [] args){
        pprice p=new pprice();
        p.getdata();
        p.calprofit();
        p.display();
    }
}