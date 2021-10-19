package com.company;


public class SortEvenThenOdd {

    public static void main(String[] args)
    {
	// write your code here
        int arr[]={1,2,9,8,10,5};
        int n=arr.length;
        int c1=0,c2=0;

        //even count
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                count++;
            }
        }

        //spliting odd and even
        int[] arr1=new int[count];
        int[] arr2=new int[n-count];
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                arr1[c1]=arr[i];
                c1++;
            }
            else
            {
                arr2[c2]=arr[i];
                c2++;
            }
        }

        //sorting
        int temp;
        for(int i=0;i<arr1.length;i++)
        {
            for(int j=i+1;j<arr1.length;j++)
            {
                if(arr1[i]<arr1[j])
                {
                    temp=arr1[i];
                    arr1[i]=arr1[j];
                    arr1[j]=temp;
                }
            }
        }
        for(int i=0;i<arr2.length;i++)
        {
            for(int j=i+1;j<arr2.length;j++)
            {
                if(arr2[i]<arr2[j])
                {
                    temp=arr2[i];
                    arr2[i]=arr2[j];
                    arr2[j]=temp;
                }
            }
        }

        //merging
        int result[]=new int[n];
        int ind=0;
        for(int el:arr1)
        {
            result[ind]=el;
            ind++;
        }
        for(int el:arr2)
        {
            result[ind]=el;
            ind++;
        }

        //Printing
        for(int i=0;i<result.length;i++)
        {
            System.out.print(result[i] + " ");
        }
    }
}
