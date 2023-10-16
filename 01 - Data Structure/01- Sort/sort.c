#include <stdio.h>

#define Sort        insertionSort
#define Search      binarySearch

void swap(int * x ,int *y){
	int temp  = *x ;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[], int size)
{
	//https://www.youtube.com/watch?v=nmhjrI-aW5o
	int i,j ;
	for (i=0 ; i< size -1 ; i++){
		for ( j=0 ; j < size -i-1 ; j++){
			if ( arr[j] > arr[j+1]){
				swap(&arr[j] , &arr[j+1]);
			}
		}
	}
}
void insertionSort(int arr[], int size)
{
	//https://www.youtube.com/watch?v=OGzPmgsI-pQ
	int i, j, temp;
	for (i=0 ; i< size ; i++){
		temp = arr[i];
		for ( j = i-1; j >=0 && arr[j] >temp ; j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
}
void selectionSort(int arr[],int size ){
	// https://www.youtube.com/watch?v=xWBP4lzkoyM
	int i ,j,min_i;
	for (i =0; i < size ; i++){
		min_i=i;
		for (j = i+1 ; j < size ; j++){
			if ( arr[min_i] > arr[j]){
				min_i = j;
			}
		}
		swap ( &arr[i] ,&arr[min_i]);
	}
}

int binarySearch(int arr[],int size,int num ){
	int min = 0,max=size-1 ,mid;
	bubbleSort(arr,size);
	while (min<=max){
		mid =(max+min)/2;
		if (arr[mid] == num){
			return mid;
		}
		else if (num < arr[mid]){
			max=mid-1;
		}
		else {
			min = mid+1;
		}
	}
	return -1;
}




void printArray(int *arr, int size){
	unsigned int i=0;
	printf("------------------\n");
	for (i=0 ; i<size ; i++){
		printf("arr[%d]= %d\n",i,arr[i]);
	}
}
void scanArray(int *arr, int size){
	unsigned int i=0;
	for (i=0 ; i<size ; i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void reverseArray(int *arr, int size){
	unsigned int i,j ;
	for (i = 0, j = size-1 ; i <= j ; i++, j--){
		swap(&arr[i], &arr[j]);
	}
}

void removeArrayDuplication(int *arr, int *size){
    /*
	int temp[*size][2];
	unsigned int i, j, newSize = *size;
	for(i=0 ; i<*size ; i++){
        temp[i][0] = arr[i];
        temp[i][1] = 0;
	}
	for(i=0 ; i<*size ; i++){
        if(!temp[i][1]){
            for(j=i+1 ; j<*size ; j++){
                if(arr[i] == arr[j]){
                    temp[j][1]++;
                }
            }
        }
	}
	printArray2(&temp[0], *size);
	for(i=0, j=0 ; i<*size ; j++){
        if(!temp[j][1]){
            arr[i++] = temp[j][0];
        }else{
            (*size)--;
        }
	}
	*/
	unsigned int i, j, k;
	for(i=0 ; i<*size-1 ; i++){
	    for(j=i+1 ; j<*size ; j++){
            if(arr[i] == arr[j]){
                for(k=j ; k<*size ; k++){
                    swap(&arr[k], &arr[k+1]);
                }
                (*size)--;
            }
        }
	}
}


int main()
{
	static int arr[100];
	int size ,search;

	printf("Enter array Size=");
	scanf("%d",&size);

	scanArray(arr,size);
	reverseArray(arr,size);
	printArray(arr,size);
	removeArrayDuplication(arr, &size);
	printArray(arr,size);

	Sort(arr,size);
	printArray(arr,size);

	printf("------------------\n");
	printf("Search =");
	scanf("%d",&search);
	int result = Search(arr, size, search);
	printf("Result=%d\n",result);
	printf("------------------\n");

	return 0;
}
