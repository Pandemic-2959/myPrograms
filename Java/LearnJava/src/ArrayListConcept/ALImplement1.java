package ArrayListConcept;
import java.util.*;
import java.util.ArrayList;
import java.util.List;

public class ALImplement1 {
	private int empId;
	private String empNme;
	public ALImplement1(int empId, String empNme) {
		super();
		this.empId = empId;
		this.empNme = empNme;
	}
	
	public int getEmpId() {
		return empId;
	}
	public void setEmpId(int empId) {
		this.empId = empId;
	}
	public String getEmpNme() {
		return empNme;
	}
	public void setEmpNme(String empNme) {
		this.empNme = empNme;
	}
	public void display() {
		System.out.println("empId"+getEmpId()+"empNme"+getEmpNme());
	}
	public static void main(String[] args) {
		List<ALImplement1> list = new ArrayList<ALImplement1>();
		ALImplement1 e1 =new ALImplement1(101,"ayush1");
		ALImplement1 e2 =new ALImplement1(102,"ayush2");
		ALImplement1 e3 =new ALImplement1(103,"ayush3");
        list.add(e1);
        list.add(e2);
        list.add(e3);
        Iterator<ALImplement1> itr=list.iterator();
        while(itr.hasNext()) {
        	ALImplement1 e =(ALImplement1)itr.next();
        	e.display();
        }
        list.forEach((temp)-> {
        	System.out.println(temp);
        });
		
	}
	
	

}
