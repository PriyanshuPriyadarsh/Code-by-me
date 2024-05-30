class A{
    public void web_series(){
        System.out.println("Game of Thrones!");
    }
}
class B extends A{
    public void web_series(){
        System.out.println("Breaking Bad!");
    }
}
public class Poly_riding {
    public static void main(String[] args) {
        A a=new A();
        B b=new B();
        a.web_series();
        b.web_series();
    }
}