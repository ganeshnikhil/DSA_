public class Q2 {
    public static void main(String[] args) {
        String input = " hello   world ";

        String noSpaces = input.replace(" ", "");

        String trimmed = input.trim();

        String singleSpaced = input.trim().replaceAll("\\s+", " ");

        System.out.println("Remove all: \"" + noSpaces + "\"");
        System.out.println("Trim: \"" + trimmed + "\"");
        System.out.println("Single spaces: \"" + singleSpaced + "\"");
    }
}