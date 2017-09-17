package FileHandling;
import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;

public class Basics {

	public static void main(String[] args) 
	{
		try 
		{
			File file =new File("Filename.txt");
			// to check if the file exist
			if(!file.exists())
			{
				file.createNewFile(); 
			}
			//object creation and writing in file using println
			PrintWriter pw = new PrintWriter(file);
			pw.println("this is my file content");
			pw.println(10000);
			pw.close();
			System.out.println("Done");
		}catch (IOException e) 
		{
			e.printStackTrace();
		}
	}

}
