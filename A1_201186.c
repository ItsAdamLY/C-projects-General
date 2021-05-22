/*		Student Name : Mohammad Adam Danial Bin Rosmani
		Matric No. : 201186
		Program Description : GPA Calculator - To evaluate one's GPA
		based on their number of subjects taken and their respective marks.
*/

#include <stdio.h>

int main()
{
	system("title Welcome to GPA Calculator");	
	system("color 70");

	// In each respective grades, p means +/plus and m means -/minus.
	// [Grade]c means [Grade]count. E.g : Ac means Grade A count, Amc means Grade A- count, etc.
	
	int total_subjects, subject_no = 1, marks, Ac = 0, Amc=0, Bpc=0, Bc=0, Bmc=0, Cpc=0, Cc=0, Fc=0;
	float A = 4.00,Am = 3.67,Bp = 3.33,B = 3.00,Bm = 2.67,Cp = 2.33,C = 2.00,F = 1.00,pointer;
	char to_continue;

	do {
	printf("How many subjects:");
	scanf("%d", &total_subjects); //input
	
	while(total_subjects < 1){ //loop if no of subjects < 1
		printf("Error!\nPlease re-enter how many subjects:");
		scanf("%d", &total_subjects);
	}
	
		for (subject_no = 1; subject_no <= total_subjects; subject_no++) { //set first subject = 1, then repeat until it reaches limit to total_subjects
			printf("Input subject %d score:", subject_no);
			scanf("%d", &marks);
			
			if (marks >= 85 && marks <= 100){
				printf("Grade is A : Exceptional\n");
				++Ac;
			}
			
			else if (marks >= 75 && marks <= 84){
				printf("Grade is A- : Excellent\n");
				++Amc;
			}
			
			else if (marks >= 70 && marks <= 74){
				printf("Grade is B+ : Very Good\n");
				++Bpc;
			}
			
			else if (marks >= 65 && marks <= 69){
				printf("Grade is B : Good\n");
				++Bc;
			}
			
			else if (marks >= 60 && marks <= 64){
				printf("Grade is B- : Fairly Good\n");
				++Bmc;
			}
			
			else if (marks >= 55 && marks <= 59){
				printf("Grade is C+ : Satisfactory\n");
				++Cpc;
			}
			
			else if (marks >= 50 && marks <= 54){
				printf("Grade is C : Quite Satisfactory\n");
				++Cc;
			}
			
			else {
				printf("Grade is F : Poor\n");
				++Fc;
			}
		}
			
		pointer = A*Ac + Am*Amc + Bp*Bpc + B*Bc + Bm*Bmc + Cp*Cpc + C*Cc + F*Fc;	
			
		printf("The sum of grade points is %.2f\n", pointer);
		printf("Your GPA is %.2f\n", pointer/total_subjects);
		
		printf("Do you want to continue? YES - Y or NO - N:");
		scanf(" %c",&to_continue);
		
		while(to_continue != 'Y' && to_continue != 'y' && to_continue != 'N' && to_continue != 'n'){
			printf("Invalid character!\nDo you want to continue? YES - Y or NO - N:");
			scanf(" %c",&to_continue);
			
			if (to_continue == 'Y' || to_continue == 'y'){
				break;
			}
			else if (to_continue == 'N'|| to_continue == 'n') {
				break; break;
			}
		}
	} while (to_continue=='Y' || to_continue == 'y');
	
	system("pause");
	return 0;
}

