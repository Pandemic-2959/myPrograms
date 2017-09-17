package DateAndTime;
import java.util.Date;
import java.text.*;

public class DateTime {
	@SuppressWarnings("deprecation")
	public static void main(String[] args) 
	{
		Date d = new Date();
		//To print current date and time
		System.out.println(d.toString());
		
		//Epoch time is time from 1 January 1970
		//to print epoch time in milli-second
		System.out.println(d.getTime());
		
		//to get month,year,day,hours,etc
		System.out.println(d.getMonth()+1);
		System.out.println(d.getYear()+1900);
		System.out.println(d.getDay());
		System.out.println(d.getHours());
		
		//to get date in different format
		//to know more about it search for SimpleDateFormat Oracle in google
		SimpleDateFormat sdf = new SimpleDateFormat("E yyyy/MM/dd HH-mm-ss");
		System.out.println(sdf.format(d));


	}

}
