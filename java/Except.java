import java.io.*;
import java.util.*;
public class Except{
public static void main(String[] args){
try{
Ball ch = new Ball();
ch.choose();
}
catch(Exception e){
System.out.println(e);
}
}
}
class Ball{
void choose() throws SameColorBallException{
Random t = new Random();
int i, red = 0, green = 0, blue = 0, yellow = 0;
for(i = 1; i <= 10; i++){
int ball = t.nextInt(4);
if(ball == 0)
red++;
else if(ball == 1)
green++;
else if(ball == 2)
blue++;
else if(ball == 3)
yellow++;
}
System.out.println("\nPicked balls details----> Red:" +red+ "\tGreen" +green+ "\tBlue" +blue+ "\tYellow" +yellow);
if(red>3 || green>3 || blue>3 || yellow>3)
throw new SameColorBallException("Same color picked more than thrice.");
}
}
class SameColorBallException extends Exception{
SameColorBallException(String s){
super(s);
}
}