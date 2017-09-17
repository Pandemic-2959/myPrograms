import java.util.*;
import java.io.*;

// question to read space separated integers
class test1 {
	public static void main(String[] args)throws IOException{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		int[] array = Arrays.stream(reader.readLine().split("\\s")).mapToInt(Integer::parseInt).toArray();
//reader.readLine() reads the input as String
//reader.readLine().split("\\s") splits that String on white-spaces returning a String[]
//Arrays.stream(reader.readLine().split("\\s")) creates a Stream from that String[]
//Arrays.stream(reader.readLine().split("\\s")).mapToInt(Integer::parseInt) applies Integer::parseInt to each element of that Stream and returns an IntStream consisting of the results of the applied function
//Arrays.stream(reader.readLine().split("\\s")).mapToInt(Integer::parseInt).toArray() returns the int[] containing the elements of that IntStream
}