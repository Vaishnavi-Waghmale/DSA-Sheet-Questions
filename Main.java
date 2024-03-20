import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;
class User{
    private String username;
    private String password;
    public User(String username, String password){
        this.username = username;
        this.password = password;
    }
    public String getUsername(){
        return username;
    }
    public String getPassword(){
        return password;
    }
}

public class Main {

    private LinkedList<User>userList;
    public Main(){
        userList = new LinkedList<>();
    }
    public void register(String username, String password){
        User newUser = new User(username, password);
        userList.add(newUser);
        System.out.println("User Registered Successfully");
    }
    public boolean login(String username, String password){
        for(User user:userList){
            if(user.getUsername().equals(username) && user.getPassword().equals(password)){
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args){
        Main authSystem = new Main();
        Scanner scanner = new Scanner(System.in);
        boolean loggedIn = false;
        while(!loggedIn){
            System.out.println("Choose an option");
            System.out.println("1) Register");
            System.out.println("2) Login");
            System.out.println("3) Exit");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch(choice){
                case 1:
                    System.out.println("Enter a user name: ");
                    String regUsername = scanner.nextLine();
                    System.out.println("Enter the password: ");
                    String regPassword = scanner.nextLine();
                    authSystem.register(regUsername, regPassword);
                    break;
                case 2:
                    System.out.println("Enter your user name: ");
                    String loginUsername = scanner.nextLine();
                    System.out.println("Enter the password: ");
                    String loginPassword = scanner.nextLine();
                    if(authSystem.login(loginUsername, loginPassword)){
                        System.out.println("Login Successfully");
                        loggedIn = true;
                    }else{
                        System.out.println("Login Failed");
                    }
                    break;
                case 3:
                    System.out.println("You have Exited!!!");
                    loggedIn = true;
                    break;
                default:
                    System.out.println("You have choosen incorrect option");

            }

        }
        scanner.close();
    }
}
