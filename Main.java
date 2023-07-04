import java.util.*;
class Reverse {
    public String reverse(String str){
        String rev=str;
        char[] s=str.toCharArray();
        char[] r=rev.toCharArray();
        int j=0;
        for(int i=s.length-1;i>=0;i--){
            r[j]=s[i];
            j++;
        }
        System.out.println(r.toString());
        return rev;
    }
    
}
public class Main{
    public static void main(String[] args){
        Scanner sin=new Scanner(System.in);
        String str=sin.next();
        Reverse r=new Reverse();
        String rev=r.reverse(str);
        System.out.println("Reverse"+rev);
        sin.close();
    }
}
