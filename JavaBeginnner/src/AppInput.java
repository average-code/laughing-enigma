import java.util.Scanner;

public class AppInput {

	public static void main(String[] args) {
		//Create scanner object
		Scanner Input = new Scanner(System.in);
		System.out.println("Enter some text: ");
		String a = Input.nextLine();
		System.out.println("You entered: "+a);

	}

}
