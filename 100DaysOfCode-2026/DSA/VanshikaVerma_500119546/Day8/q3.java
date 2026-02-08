public class q3 {
    public static void main(String[] args) {
        String s = "hello";
        System.out.println(rev(s));
    }
    public static String rev(String s){
         if (s == null) 
         return null;
        int n = s.length()-1;
        String r = "";
        while(n>=0){
          r+=s.charAt(n); 
          n--; 
        }
        return r;
    }
}
