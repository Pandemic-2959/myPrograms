package FileHandling;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;

public class ReadingFromFile {

	public static void main(String[] args) 
	{
		BufferedReader br = null;
		try
		{
			br = new BufferedReader(new FileReader("abc.txt"));
			String str;
			while((str = br.readLine())!=null)
			{
				System.out.println(str);
			}
				
		}catch(IOException e)
		{
			e.printStackTrace();
		}
		finally
		{
			try {
				br.close();
			} catch (IOException e) {
				e.printStackTrace();
			}
		}

	}

}
