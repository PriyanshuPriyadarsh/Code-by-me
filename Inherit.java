public class Inherit {
    public static void main(String[] args) {
        In3 i = new In3();
        i.name();
        i.college();
        i.en_num();
        i.city();
    }
}
class In1 {
    public void name() {
        System.out.println("Priyanshu Priyadarshi");
    }
}
class In2 extends In1 {
    public void college() {
        System.out.println("University of Engineering & Management");
    }
    public void city() {
        System.out.println("Kolkata");
    }
}
class In3 extends In2{
    public void en_num(){
        System.out.println("12021002028027");
    }
}