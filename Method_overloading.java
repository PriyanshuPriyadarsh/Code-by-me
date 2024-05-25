class Method_overloading{
    static int sum(int a,int b){
        return a+b;
    }
    static double sum(double a,double b){
        return a+b;
    }
    public static void main(String[] args) {
        System.out.println("Sum "+sum(8,9));
        System.out.println("Sum "+sum(8.1,9.9));
    }
}