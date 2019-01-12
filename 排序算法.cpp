#include<iostream>
using namespace std;

void selection_sort(int array[], int size)
{
	int temp,current, j;
	for(current = 0; current < size; current++)
	{
	    for(j = current + 1; j < size; j++)
	    {
	    	if( array[current] > array[j])
			  {
			    temp = array[current];
			    array[current] = array[j];
			    array[j] = temp;
			  }
	    }
	    
		  cout << " i = " << current << " :  ";//显示每次排序的结果 
		  for(j = 0;j < size; j++)
	    {
	       	printf("%d  ", array[j]);
	    } 
	    printf("\n");
  }
}
void bubble_sort(int array[], int size)
{
	for(int i = 0;i < size; i++)                
	 {
	   for(int j = 0 ;j < size - i; j++) 
	   {
		   	if(array[j] > array[j + 1])
		    {
			    int temp = array[j];
			    array[j] = array[j + 1];
			    array[j + 1] = temp;
		    }
	   }              
	   cout << " i = " << i << " :  ";      
	   for( int k = 0; k < size; k++) //显示每次排序的结果              
	   {
	   		cout << array[k] << "  ";
	   }
	   cout << endl;
	 }
}

int quick_sort(int *item, int left, int right)
{
	int i, j;
	int m, t;
	i = left;  j = right;
	m = item[(left + right)/2];            //  中点元素值
	do
	{
	    while(item[i] < m && i < right)      //  判别左区的数是否大于中点元素值 m 
	    	i++;                        //  否，上行下标变量递增
	    while(m<item[j] && j>left)       //  判别右区的数是否小于中点元素值 m 
	    	j--;                         //  否，下行下标变量递减
	    
	    if(i <= j)
	    {                            //  交换当前左区大于m的那个元素与右区小于m的那个元素
	      t = item[i];
	      item[i] = item[j];
	      item[j] = t;
	      i++;  j--;
	    }
 	}while(i <= j);
 	if(left < j)
 		quick_sort(item, left, j);    //  递归调用
 	if(i < right)
 		quick_sort(item, i, right);   //  递归调用
 	return 0;
}

void insert_sort(int array[], int SIZE) //这个适合选择排序一样，实际上不应该
{
	int temp;
	for(int i = 0;i < SIZE;i++)              
	{
		for(int j = i;j < SIZE ;j++)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
	    		array[i] = array[j];
	    		array[j] = temp;
			}
		}                    
	  cout << " i = " << i << " :  ";  //显示每次排序的结果    
	  for(int k=0;k<SIZE;k++)                  
	  {
	   	cout << array[k] << "  "; 
	  }
	  cout << endl;
 	}
}

int binsearch(int* a, int left, int right, int k)
{
	int mid, n, num;
	mid = (left + right) / 2;
	if(a[mid] == k)
		return mid;
	if(left > right)
		return -1;
	if(k < a[mid])
		right = mid - 1;
	else
		left = mid + 1;
	n = binsearch(a, left, right, k);
}

void print_array(int a[], int n)
{
	for (int j = 0; j < n; ++j)
	{
		cout << a[j] << " ";
	}
	cout << endl;
}


int max_common_div(int a, int b)	 //求最大公约数
{
	int r;
	while(b)
	{
		r = a%b;
   		a = b;
   		b = r;
 	}
 	return a;
}

int max_common_digui(int i, int j)	//求最大公约数，用递归
{
	int r;
	r = i%j;
	if(r==0)
		return j;
	else
		return (max_common_digui(j, r));
}
void hanoi(int n, char from, char via, char to)  	 //  用递归算法求解 Hanoi (汉诺)塔问题。
{
	 if(n == 1)                                    // 递归结束条件：如果只有一个盘子，就将盘子从 from 移到 to
	 {
	 	cout << from << " -> " << to << endl;
	    return;
	 } 
	 else
	 {  
	   hanoi(n-1, from, to, via);                // 将 n - 1 个盘子从 from 移到 via ( 经过 to )
	   cout << from << " -> " << to << endl;     // 将留在 from 的盘子移到 to
	   hanoi(n-1, via, from, to);                // 将 n - 1 个盘子从 via 移到 to ( 经过 from )
	 }
}
int main()
{
    //这里写测试程序
    

}
