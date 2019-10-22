import java.io.*;
class prog
    {   public static void insert()
            {System.out.println("Element inserted");
            }
        public static void delete()
            {System.out.println("Element deleted");
            }
        public static void display()
            {System.out.println("displayed");
            }
        public static void main(String args[])throws IOException
        { 
            BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
            int i,ch,choice;
            do
                {
                    System.out.println("1.insert 2.delete ");
                   System.out.println("Enter your choice");
                   ch=Integer.parseInt(br.readLine());
                   switch(ch)
                            {
                                case 1:
                                       System.out.println("the choice is 1");
                                       insert();
                                       display();
                                       break;
                                case 2:
                                       System.out.println("the choice is 2");
                                       delete();
                                       display();
                                       break;
                                default:System.out.println("Invalid choice");
                            }
                   System.out.println("Enter:- 0.Wish to continue 1.Exit");
                   choice=Integer.parseInt(br.readLine());
                }
            while(choice==0);
        }
    }
