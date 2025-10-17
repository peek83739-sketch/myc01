 #include <stdio.h> // printf(), scanf()
 
 #define showline printf("-------------------------------")

 int main(){

    int bus_number;

    showline;
    printf(" Bus number information\n");
    showline;
    printf("Enter bus number: ");
    scanf("%d" , &bus_number);
    showline;
    if(bus_number == 57){
        printf("Go to pinklo, Bangkhunnon\n");
    }else if (bus_number == 3){
        printf("Go to Sanam Luang, Ladproao\n");
    }else if (bus_number == 71){
        printf("Go to Hua lamphong, Yaowarat\n");
    }else if (bus_number == 56){
        printf("Go to Bang Lamphu, Sapan Krungthon\n");
    }else if (bus_number == 539){
        printf("Go to Samsen, Anusawari Chai");
    }else{
        printf("Don\'t have data\n");
    }
    showline;
    
    
    return 0;

 }