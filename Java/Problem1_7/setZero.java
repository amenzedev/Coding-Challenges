package Problem1_7;

public class setZero {

    public static void main(String[] args) {

        int [][]image = {{1,2,3},{4,0,6},{7,8,9}};
        setZeros(image);
        printArray(image);

    
        
    }

    public static void setZeros(int[][] matrix)
    {
        boolean[] row = new boolean[matrix.length];
        boolean[] col = new boolean[matrix[0].length];

        for(int i=0;i< matrix.length;i++)
        {
            for(int j=0;j<matrix[0].length;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }

        for(int i=0; i< matrix.length;i++)
        {
            for(int j=0;j<matrix[0].length;j++)
            {
                if(row[i]||col[j])
                matrix[i][j]=0;
            }
        }
    }

    public static void printArray(int[][]  image)
    {
        for(int[] i: image)
        {
            for(int j: i)
            {
                System.out.print(String.valueOf(j) + " ");

            }
            System.out.println();
        }
    }
    
}
