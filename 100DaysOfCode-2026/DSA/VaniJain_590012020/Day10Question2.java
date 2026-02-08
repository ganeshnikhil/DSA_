public class Day10Question2 
{
    public static String removeAllSpaces(String input) 
    {
        return input.replaceAll(" ", "");
    }
    public static String trimSpaces(String input) 
    {
        return input.trim();
    }
    public static String removeExtraSpaces(String input) 
    {
        return input.trim().replaceAll("\\s+", " ");
    }
    public static void main(String[] args) 
    {
        String[] inputs = 
        {
            " hello world ",
            "programming is fun",
            " a  b   c "
        };

        for (String input : inputs) 
        {
            System.out.println("Original: \"" + input + "\"");
            System.out.println("Remove all: \"" + removeAllSpaces(input) + "\"");
            System.out.println("Trim: \"" + trimSpaces(input) + "\"");
            System.out.println("Single spaces: \"" + removeExtraSpaces(input) + "\"");
            System.out.println(); // Line break between outputs
        }
    }
}
