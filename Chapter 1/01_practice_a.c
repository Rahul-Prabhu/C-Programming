 #include<stdio.h>

 int main(){
//     int length=3, breadth=8;
//     int area = length*breadth;
//     printf("The area of this rectangle is %d", area);
    
	
    int n;
    scanf("%d", &n);
    // int i=0;
    int sum=0;
    while (n>0){
        // i=n%10;
        sum=sum+n%10;
        
        n=n/10;
    }
    printf("%d",sum);
    return 0;

}
