class Abstract {
    public static void main(String[] args) {
        Priyanshu p=new Priyanshu();
        Noel n=new Noel();
        Abhijeet a=new Abhijeet();
        p.abs();p.name();p.stream();
        n.name();n.stream();
        a.name();a.stream();
    }
}
abstract class Details{
    abstract void name();
    abstract void stream();
    void abs(){
        System.out.println("Abstract Java Oops concept!");
    }
}
class Priyanshu extends Details{
    void name(){
        System.out.print("Priyanshu Priyadarshi");
    }
    void stream(){
        System.out.print(" ->C.S.E.(Ai,Ml)\n");
    }
}
class Noel extends Details{
    void name(){
        System.out.print("Noel Biswas");
    }
    void stream(){
        System.out.print(" ->C.S.E.(I.O.T.)\n");
    }
}
class Abhijeet extends Details{
    void name(){
        System.out.print("Abjijeet Chaudhary");
    }
    void stream(){
        System.out.print(" ->C.S.E.");
    }
}