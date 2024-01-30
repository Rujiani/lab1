#include <stdio.h>
int check_funk(int);
int check_correct(int);
int addition(int);
int main() {
    long int input_num;         //long int для проверки переполнения
    printf("Enter a number\n");
    if (!scanf("%ld", &input_num)) {
        printf("ERROR\n");
        return 0;
    }
    if (input_num != (int)input_num) {
        printf("ERROR\n");
        return 0;
    }
    int num = input_num;
    if (check_funk(num)) {
        printf("Confirmation is correct\n");
    }
    else {
        printf("Confirmation is not correct\n");
    }
    return 0;
}
int addition(int num) {
    int even_numbers = 0;  //or odd
    int odd_numbers = 0;   //or even
    int flag = 0;
    while (num) {
        if (flag) {
            even_numbers += num % 10;
            num /= 10;
            flag = 0;
        }
        else {
            odd_numbers += num % 10;
            num /= 10;
            flag = 1;
        }
    }
    if((even_numbers - odd_numbers) % 11 == 0){
    return 0;
    }
    else{
        return -1;
    }
}

int check_funk(int num){
	if (addition(num) == check_correct(num)) { return 1; }
   	else
    	{
        	return 0;
    	}
}
int check_correct(int num){
    if(num % 11 == 0){
        return 0;
    }
    else{
        return -1;
    }
}
