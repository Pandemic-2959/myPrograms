package AllInOne;

abstract public class Bank 
{
	abstract int getInterest();	
}
//abstract methods do not specify body
//abstract class cannot be instantiated
//you need to give definitions of abstract methods in sub classes
//if you do not add any abstract keyword to a class then it makes the class concrete
//i.e it can be instantiated
