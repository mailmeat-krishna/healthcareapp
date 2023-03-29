#include <stdio.h>

int main() {
   float age, height, weight, BMI;
   char issue[5], doctor, appointmenttime;
  
    printf("Enter Your age\n");
    scanf("%f" ,& age);
    printf("Enter Your Height in meters\n");
    scanf("%f" ,& height);
    printf("Enter Your weight\n");
    scanf("%f", & weight);
    BMI = weight / (height * height); 
    if(BMI<18)
    {
        printf("Your BMI is %f\n",BMI);
        printf("You are underweight\n");
    }
    else if (BMI>18 && BMI<25)
{
printf("Your BMI is %f\n",BMI);
        printf("You are having Ideal BMI.");    
     }    
     else if (BMI>=25)
{
printf("Your BMI is %f\n",BMI);
        printf("You are Obese."); 
        
}
printf("\n\nAny problems you are currently facing\n");
scanf("%c" ,&issue[0]);
scanf("%c" ,&issue[1]);
scanf("%c" ,&issue[2]);
scanf("%c" ,&issue[3]);
scanf("%c" ,&issue[4]);

printf("\nAny Doctor with which you want to have appointment?\n");
scanf("%c" ,&doctor);
if(doctor=="sanghvi" || doctor=="pramod")
{
    printf("When would you like to schedule apartment?\n");
    printf("Choose the time of appointment\n");
    printf("Appointment Slots:\n");
    printf("11am\n12am\n1pm\n3pm\n4pmam\n6pm\n7pm\n8pm\n");
    scanf("%c" ,&appointmenttime);
    printf("Appointment with Dr.Pramaod Sanghvi is successful!\n");
}
return 0;
}
