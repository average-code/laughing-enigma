import java.util.Scanner;

public class AppSwitch {

	public static void main(String[] args) {

		Scanner inp = new Scanner(System.in);
		System.out.println("Enter a command: ");

		String text = inp.nextLine();

		switch (text) {
		case "start":
			System.out.println("Machine Started");
			break;
		case "stop":
			System.out.println("Machine Stopped");
			break;

		default:
			System.out.println("Invalid command");

		}
	}

}
