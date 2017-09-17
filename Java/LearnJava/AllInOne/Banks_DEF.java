package AllInOne;
public class Banks_DEF implements Banks 
{
	public int getInterest() 
	{
		return 5;
	}
}
//if both parent and child are classes then use extends 
//if both parent and child are interfaces then use extends
//if parent is interface and child is class then use implements