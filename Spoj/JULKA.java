import java.io.*;
import java.util.*;
import java.math.BigInteger;

class JULKA{

	public static void main(String args[]){

		Scanner sc = new Scanner(System.in);
		for (int i = 0; i < 10; i++){
			
			String a = sc.nextLine();
			String b = sc.nextLine();

			BigInteger A = new BigInteger(a);
			BigInteger B = new BigInteger(b);

			BigInteger first =  (A.add(B)).divide(new BigInteger("2"));
			BigInteger second = A.subtract(first);

			System.out.println(first.toString());
			System.out.println(second.toString());
		}
	}
}