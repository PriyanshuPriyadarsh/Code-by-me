class Encap {
    public static void main(String[] args) {
        Employee e=new Employee();
        e.setEmpId(169);
        System.out.println(e.getEmpId());
    }
}
class Employee{
    private int EmpId;
    public void setEmpId(int empid){
        EmpId=empid;
    }
    public int getEmpId(){
        return EmpId;
    }
}