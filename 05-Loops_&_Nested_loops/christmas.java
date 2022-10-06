/**
 * christmas
 */
public class christmas {

    public static void main(String[] args) {
    

        for (int i = 1; i <= 12; i++) 
        {
            for (int j = 0; j < 8; j++) 
            {
                if ((i<=4 && j>=8-i)  ) 
                {
                    System.out.print(" *");
                }
                if ((i<=4 && j<8-i) || (i>4 && i<=8 && j<6-i)) 
                {
                    System.out.print("$");
                }

            }
            System.out.println();
        }
    }
}