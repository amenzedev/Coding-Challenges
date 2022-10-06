package Problem1_6;

public class rotate {

    public static void main(String[] args) {
        int [][]image = {{1,2,3},{4,5,6},{7,8,9}};
        rotateImage(image,image.length);
        printArray(image);
        

        
        
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

    public static void rotateImage(int[][] matrix, int n)
    {
        for(int layer=0; layer < n/2; ++layer)
        {
            int first = layer;
            int last = n - 1 - layer;
            
            for(int i=first;i<last;i++)
            {
                int offset = i - first;

                int top = matrix[first][i];

                matrix[first][i]=matrix[last-offset][first];

                matrix[last-offset][first]= matrix[last][last-offset];

                matrix[last][last-offset]= matrix[i][last];

                matrix[i][last] = top;
            }

        }

    }
    
}
