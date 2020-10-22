
class Robot{
	public void speak(String text) {
		System.out.println(text);
	}
	public void jump(int height) {
		System.out.println(height);
	}
	
	public void walk(int steps) {
		System.out.println("I walked "+steps+" steps");
	}
}

public class AppMethodParameters {
	public static void main(String[] args) {
		Robot sam = new Robot();
		
		sam.speak("Hi I am Sam");
		sam.jump(5);
		sam.walk(5);
	}
}
