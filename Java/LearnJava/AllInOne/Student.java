package AllInOne;

public class Student 
{
	protected int id;
	protected String name;
	protected int age;
	//static member
	public static int noOfStu=0;
	
	public int getId() 
	{
		return id;
	}
	public void setId(int id)
	{
		this.id = id;
	}
	public String getName() 
	{
		return name;
	}
	public void setName(String name) 
	{
		this.name = name;
	}
	public int getAge() 
	{
		return age;
	}
	public void setAge(int age) 
	{
		this.age = age;
	}
	public Student()
	{
		this(0," ",0);
	}
	public Student(int i,int a) 
	{
		this(i," ",a);
	}
	public Student(int i,String n,int a)
	{
		id = i;
		name = n;
		age = a;
		noOfStu++;
	}
}