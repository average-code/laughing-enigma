import java.util.Scanner;

public class AppDoWhile {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner input = new Scanner(System.in);
		
		int val = 0;
		System.out.println("Enter a number: ");
		do {
			val = input.nextInt();
			System.out.println("Enter a number: ");
		}
		while (val != 5 );
		{
			System.out.println("Got 5");
		}
	}

}
