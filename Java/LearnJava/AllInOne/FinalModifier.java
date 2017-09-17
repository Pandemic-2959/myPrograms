package AllInOne;
/* Final Modifier*/
class Demo{
	public void m1() {}
	public final void m2() {}
}
public final class FinalModifier {
	public final int num;
	public FinalModifier(){
		num =10;
	}
	public static void main(String[] args) {
		FinalModifier obj = new FinalModifier();
		System.out.println("hello");
		//obj.num = 20; //The final field FinalModifier.num cannot be assigned
		}
}
class Demo2 extends Demo{
	public void m1(){}
	//public void m2(){} Error: cannot override final method
}

/*class Demo extends FinalModifier{
	public int a;}
	Error : The type Demo cannot subclass the final class FinalModifier */
	


