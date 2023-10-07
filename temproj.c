/* CPS Term Project */

#include <stdio.h>    

/* Helper Functions-------------------------------------------------------------*/
int finddate(int day, int *month){
    int value;
    /* Series of if and else statements are used to find the numerical date. */
    if (day <= 31){
        *month = 1;
        value = day;
        return(value);
    }
    else if (day >= 32 && day <= 60){
        *month = 2;
        value = day - 31;
        return(value);
    }
    else if(day >= 61 && day <= 91){
        *month = 3;
        value = day - 60;
        return(value);
    }
    else if(day >= 92 && day <= 121){
        *month = 4;
        value = day - 91;
        return(value);
    }
    else if(day >= 122 && day <= 152){
        *month = 5;
        value = day - 121;
        return(value);
    }
    else if(day >= 153 && day <= 182){
        *month = 6;
        value = day - 152;
        return(value);
    }
    else if(day >= 183 && day <= 213){
        *month = 7;
        value = day - 182;
        return(value);
    }
    else if(day >= 214 && day <= 244){
        *month = 8;
        value = day - 213;
        return(value);
    }
    else if(day >= 245 && day <= 274){
        *month = 9;
        value = day - 244;
        return(value);
    }
    else if(day >= 275 && day <= 305){
        *month = 10;
        value = day - 274;
        return(value);
    }
    else if(day >= 306 && day <= 335){
        *month = 11;
        value = day - 305;
        return(value);
    }
    else if(day >= 336 && day <= 366){
        *month = 12;
        value = day - 335;
        return(value);
    }
}
void date(int i, double tempvar, double lakes[366][6]){
    int temp1 = 0, temp2 = 0, dayvar, monthvar;
    /* 2 for loop is used to display dates with proper grammar. */
    for(int j = 0; j < 366; j++){
        if (lakes[j][i] == tempvar)
            temp2++;
    }

    for (int j = 0; j < 366; j++){
        if(lakes[j][i] == tempvar){
            dayvar = finddate(j+1, &monthvar);
            printf(" %d/%d", dayvar, monthvar);

            if (temp1 < temp2 - 2)
                printf(",");
            else if (temp1 < temp2 - 1)
                printf(", and");
            else 
                printf(".\n");
                        
            temp1++;
        }
    }
} 
void avdate(double avtempvar, double avtemp[366]){
    int temp1 = 0, temp2 = 0, day, month;
    /* Similarly to the function 'date', 2 for loops are used to display the numerical date with proper grammar. */
    for (int i = 0; i < 366; i++){
        if(avtemp[i] == avtempvar)
        temp2++;
    }

    for (int i = 0; i < 366; i++)
        if(avtemp[i] == avtempvar){
            day = finddate (i+1, &month);
            printf(" %d/%d", day, month);

            if (temp1 < temp2 - 2)
                printf(",");
            else if (temp1 < temp2 - 1)
                printf(", and");
            else 
                printf(".\n");
                        
            temp1++;

        }
}


/* #1---------------------------------------------------------------------------*/
void question1(double lakes[366][6]){
	double sup, mich, huron, erie, ont, clr, tot; //intialize each lakes variable
	
	//superior's average temperature
	sup = 0;
	for (int i = 0; i <= 365; i++){
        sup = (sup + lakes[i][0]);
    }    
    sup = sup/366;
    
    //michigan's average temperature
    mich = 0;
	for (int i = 0; i <= 365; i++){
        mich = (mich + lakes[i][1]);
    }    
    mich = mich/366;
    
    //huron's average temperature
    huron = 0;
	for (int i = 0; i <= 365; i++){
        huron = (huron + lakes[i][2]);
    }    
    huron = huron/366;
    
    //erie's average temperature
    erie = 0;
	for (int i = 0; i <= 365; i++){
        erie = (erie + lakes[i][3]);
    }    
    erie = erie/366;
    
    //ontario's average temperature
    ont = 0;
	for (int i = 0; i <= 365; i++){
        ont = (ont + lakes[i][4]);
    }    
    ont = ont/366;
    
    //st.clr's average temperature
    clr = 0;
	for (int i = 0; i <= 365; i++){
        clr = (clr + lakes[i][5]);
    }    
    clr = clr/366;
    
    //total temperature
    tot = (sup + mich + huron + erie + ont + clr)/6;
    
    //print each lakes temperature then the total average temperature
    printf("[Question #1] \n");
    printf("Lake:		Average Temperature: \n");
    printf("Superior 	%.3lf \n", sup);
    printf("Michigan	%.3lf \n", mich);
    printf("Huron    	%.3lf \n", huron);
    printf("Erie 	  	%.3lf \n", erie);
    printf("Ontario 	%.3lf \n", ont);
    printf("ST.Clr	 	%.3lf \n", clr);
	printf("\n");
    printf("And the Total Average Temperature is: %.3lf \n", tot);
}

/* #2---------------------------------------------------------------------------*/
void question2(double lakes[366][6]){
	double sup, mich, huron, erie, ont, clr, tot; //intialize each lakes variable
	
	//superior's average temperature
	sup = 0;
	for (int i = 0; i <= 365; i++){
        sup = (sup + lakes[i][0]);
    }    
    sup = sup/366;
    
    //michigan's average temperature
    mich = 0;
	for (int i = 0; i <= 365; i++){
        mich = (mich + lakes[i][1]);
    }    
    mich = mich/366;
    
    //huron's average temperature
    huron = 0;
	for (int i = 0; i <= 365; i++){
        huron = (huron + lakes[i][2]);
    }    
    huron = huron/366;
    
    //erie's average temperature
    erie = 0;
	for (int i = 0; i <= 365; i++){
        erie = (erie + lakes[i][3]);
    }    
    erie = erie/366;
    
    //ontario's average temperature
    ont = 0;
	for (int i = 0; i <= 365; i++){
        ont = (ont + lakes[i][4]);
    }    
    ont = ont/366;
    
    //st.clr's average temperature
    clr = 0;
	for (int i = 0; i <= 365; i++){
        clr = (clr + lakes[i][5]);
    }    
    clr = clr/366;
    
    //total temperature
    tot = (sup + mich + huron + erie + ont + clr)/6;
    
    //set a min and max and create an array for all values
    double min = 100;
    double max = 0;
    double tempy[5];
    tempy[0] = sup;
    tempy[1] = mich;
    tempy[2] = huron;
    tempy[3] = erie;
    tempy[4] = ont;
    tempy[5] = clr;
    
    printf("[Question #2]: \n");
    //check for min and max
    for(int i = 0; i <= 5; i++){
		if(min > tempy[i]){
			min = tempy[i];
		}
		
		if(max < tempy[i]){
			max = tempy[i];
		}
	}
	
	//check for max lake name
	if(max == sup){
		printf("Lake Superior is the Hottest on average lake \n");
	}	
	else if(max == mich){
		printf("Lake Michigan is the Hottest on average lake \n");
	}
	else if(max == huron){
		printf("Lake Huron is the Hottest on average lake \n");
	}
	else if(max == erie){
		printf("Lake Erie is the Hottest on average lake \n");
	}
	else if(max == ont){
		printf("Lake Ontario is the Hottest on average lake \n");
	}
	else if(max == clr){
		printf("Lake St.Clr is the Hottest on average lake \n");
	}
	
	//check for min lake name
	if(min == sup){
		printf("Lake Superior is the Coldest on average lake \n");
	}	
	else if(min == mich){
		printf("Lake Michigan is the Coldest on average lake \n");
	}
	else if(min == huron){
		printf("Lake Huron is the Coldest on average lake \n");
	}
	else if(min == erie){
		printf("Lake Erie is the Coldest on average lake \n");
	}
	else if(min == ont){
		printf("Lake Ontario is the Coldest on average lake \n");
	}
	else if(min == clr){
		printf("Lake St.Clr is the Coldest on average lake \n");
	}
	
	//state what is next
	printf("\n");
	printf("Which Lakes are above or below the Total Average Lake Temperature: \n");
	double totalt = tot; //to avoid confusion from program
	
	//loop the array to check which are above or below the total average temperature
	for(int i = 0; i < 6; i++){
		//above nested loop
		if(tempy[i] > totalt){
			if(i == 0){
				printf("Lake Superior is above the average lake temperature \n");
			}
			else if(i == 1){
				printf("Lake Michigan is above the average lake temperature \n");
			}
			else if(i == 2){
				printf("Lake Huron is above the average lake temperature \n");
			}
			else if(i == 3){
				printf("Lake Erie is above the average lake temperature \n");
			}
			else if(i == 4){
				printf("Lake Ontario is above the average lake temperature \n");
			}
			else if(i == 5){
				printf("Lake St.Clr is above the average lake temperature \n");
			}
		}
		//below nested loop
		if(tempy[i] < totalt){
			if(i == 0){
				printf("Lake Superior is below the average lake temperature \n");
			}
			else if(i == 1){
				printf("Lake Michigan is below the average lake temperature \n");
			}
			else if(i == 2){
				printf("Lake Huron is below the average lake temperature \n");
			}
			else if(i == 3){
				printf("Lake Erie is below the average lake temperature \n");
			}
			else if(i == 4){
				printf("Lake Ontario is below the average lake temperature \n");
			}
			else if(i == 5){
				printf("Lake St.Clr is below the average lake temperature \n");
			}
		}
	}
	
}

/* #3---------------------------------------------------------------------------*/
void question3(double lakes[366][6]){
double warmtemp, coldtemp;
printf("[Question #3] \n");
for (int i = 0; i < 6; i++){
        /* for loop is used to find the warmest and coldest temperature for each lake. */
        warmtemp = lakes[0][i];
        coldtemp = lakes[0][i];
        for(int j = 0; j < 366; j++){
            if (lakes[j][i] > warmtemp)
                warmtemp = lakes[j][i];
            if (lakes[j][i] < coldtemp)
                coldtemp = lakes[j][i];
        }
        /* The switch function displays the warmest and coldest temperature to their respective indicated lake.*/
        switch(i){
            case 0:
                printf("The warmest water temperature in Lake Superior is %.2lf degrees Celsius during", warmtemp);
                date(i, warmtemp, lakes);
                printf("The coldest water temperature in Lake Superior is %.2lf degrees Celsius during", coldtemp);
                date(i, coldtemp, lakes);
                printf("\n");
                break;
            case 1:
                printf("The warmest water temperature in Lake Michigan is %.2lf degrees Celsius during", warmtemp);
                date(i, warmtemp, lakes);
                printf("The coldest water temperature in Lake Michigan is %.2lf degrees Celsius during", coldtemp);
                date(i, coldtemp, lakes);
                printf("\n");
                break;
            case 2:
                printf("The warmest water temperature in Lake Huron is %.2lf degrees Celsius during", warmtemp);
                date(i, warmtemp, lakes);
                printf("The coldest water temperature in Lake Huron is %.2lf degrees Celsius during", coldtemp);
                date(i, coldtemp, lakes);
                printf("\n");
                break;
            case 3:
                printf("The warmest water temperature in Lake Erie is %.2lf degrees Celsius during", warmtemp);
                date(i, warmtemp, lakes);
                printf("The coldest water temperature in Lake Erie is %.2lf degrees Celsius during", coldtemp);
                date(i, coldtemp, lakes);
                printf("\n");
                break;
            case 4:
                printf("The warmest water temperature in Lake Ontario is %.2lf degrees Celsius during", warmtemp);
                date(i, warmtemp, lakes);
                printf("The coldest water temperature in Lake Ontario is %.2lf degrees Celsius during", coldtemp);
                date(i, coldtemp, lakes);
                printf("\n");
                break;
            case 5:
                printf("The warmest water temperature in Lake St. Clair is %.2lf degrees Celsius during", warmtemp);
                date(i, warmtemp, lakes);
                printf("The coldest water temperature in Lake St. Clair is %.2lf degrees Celsius during", coldtemp);
                date(i, coldtemp, lakes);
                printf("\n");
                break;
        }
    }
}

/* #4---------------------------------------------------------------------------*/
void question4(double lakes[366][6]){
    double avtemp[366], warmavtemp, coldavtemp;
    /* for loop is used to find the sum of all the lake temperatures respective to its date, and divided by 6
    to find its average temperature. */
    printf("[Question #4] \n");
    for (int i = 0; i < 366; i++){
        avtemp[i] = 0;
        for(int j = 0; j < 6; j++)
            avtemp[i] += lakes[i][j];
        avtemp[i] /= 6;
    }
    /* Then, the program uses a for loop to compare average temperatures to find the warmest and coldest average temperature.*/
    warmavtemp = avtemp[0];
    coldavtemp = avtemp[0];
    for (int i = 0; i < 366; i++){
        if (avtemp[i] > warmavtemp)
             warmavtemp = avtemp[i];
        if (avtemp[i] < coldavtemp)
            coldavtemp = avtemp[i];
    }
    /* Warmest and coldest average temperature and their respective date is displayed. */
    printf("The warmest average temperature across all lakes is %.2lf degrees Celsius during", warmavtemp);
    avdate(warmavtemp, avtemp);
    printf("The coldest average temperature across all lakes is %.2lf degrees Celsius during", coldavtemp);
    avdate(coldavtemp, avtemp);
    printf("\n");
}

/* #5---------------------------------------------------------------------------*/
void question5(double lakes[366][6]){
    double summeravtemp[6], temp2[6], temp;
    printf("[Question #5] \n");
   /* for loop is used to find the average summer temperature of each lake. It is then stored into the temp2 array.*/
    for (int i = 0; i < 6; i++){
        summeravtemp[i] = 0;
        for(int j = 171; j < 265; j++)
            summeravtemp[i] += lakes[j][i];
        summeravtemp[i] /= 93;
        temp2[i] = summeravtemp[i];
    }

    /* the lakes is sorted from warmest temperature to lowest temperature.*/
    for (int i = 0; i < 6; i++){
        for(int j = 0; j <= i; j++){
            if (summeravtemp[i] > summeravtemp[j]){
                temp = summeravtemp[i];
                summeravtemp[i] = summeravtemp[j];
                summeravtemp[j] = temp;
            }
        }
    }

    /* The order of lakes is displayed by comparing the sorted array with the previously stored temp2 array. */
    printf("The names of the lake in order from the warmest to coldest average is: ");
    for(int i = 0; i < 6; i++){
        if(summeravtemp[i] == temp2[0])
            printf("Lake Superior");
        else if(summeravtemp[i] == temp2[1])
            printf("Lake Michigan");
        else if(summeravtemp[i] == temp2[2])
            printf("Lake Huron");
        else if(summeravtemp[i] == temp2[3])
            printf("Lake Erie");
        else if(summeravtemp[i] == temp2[4])
            printf("Lake Ontario");
        else if(summeravtemp[i] == temp2[5])
            printf("Lake St. Clair");
        
        if (i < 4)
            printf(", ");
        else if (i < 5)
            printf(", and ");
        else
            printf(".\n\n");
    }
}

/* #6---------------------------------------------------------------------------*/
void question6 (double lakes[366][6])
{
    int i,j;
    double avgtemp[6], temp2[6], temp;
    
    /* Finds the average winter time average of each lake */ 
    for (i=0;i<6;i++)                        
    {
        avgtemp[i] = 0;
        for(j=0;j<79;j++)
        {
            avgtemp[i] += lakes[j][i];
        }
        for(j=354;j<366;j++)
        {
            avgtemp[i] += lakes[j][i];
        }
        avgtemp[i] /= (78.0 + 11.0);
        temp2[i] = avgtemp[i];
    }
    
    /* Sorts temperature from warmest to coldest */
    for(i=0;i<6;i++)                   
    {
        for(j=0;j<=i;j++)
        {
            if (avgtemp[i] > avgtemp[j])
            {
                temp = avgtemp[i];
                avgtemp[i] = avgtemp[j];
                avgtemp[j] = temp;
            }
        }
    }
    
    /* Printing the names of the lakes in order from the warmest to coldest winter temperature */
    printf("[Question #6]\nThe names of the lake in order from the warmest to coldest average is: ");
    for(i=0;i<6; i++)                 
    {
        if(avgtemp[i] == temp2[0])
            printf("Lake Superior");
        else if(avgtemp[i] == temp2[1])
            printf("Lake Michigan");
        else if(avgtemp[i] == temp2[2])
            printf("Lake Huron");
        else if(avgtemp[i] == temp2[3])
            printf("Lake Erie");
        else if(avgtemp[i] == temp2[4])
            printf("Lake Ontario");
        else if(avgtemp[i] == temp2[5])
            printf("Lake St. Clair");
            
        if (i < 4)
            printf(", ");
        else if (i < 5)
            printf(", and ");
        else
            printf(".\n\n");
    }
}

/* #7---------------------------------------------------------------------------*/
void question7 (double lakes[366][6])
{
    int i, sup, mich, huron, erie, ont, clr;
    /* superior swimmable days */
    sup = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][0] > 20.0)
        {
            sup ++;
        }
    }
    /* michigan swimmable days */
    mich = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][1] > 20.0)
        {
            mich ++;
        }
    }
    /* huron swimmable days */
    huron = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][2] > 20.0)
        {
            huron ++;
        }
    }
    /* erie swimmable days */
    erie = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][3] > 20.0)
        {
            erie ++;
        }
    }
    /* ontario swimmable days */
    ont = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][4] > 20.0)
        {
            ont ++;
        }
    }
    /* st. clair swimmable days */
    clr = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][5] > 20.0)
        {
            clr ++;
        }
    }
    /* print each lake's swimmable days */
    printf("[Question #7] \n");
    printf("Lake:		Swimmable days: \n");
    printf("Superior 	%d \n", sup);
    printf("Michigan	%d \n", mich);
    printf("Huron    	%d \n", huron);
    printf("Erie 	  	%d \n", erie);
    printf("Ontario 	%d \n", ont);
    printf("St. Clair	%d \n", clr);
}

/* #8---------------------------------------------------------------------------*/
void question8 (double lakes[366][6])
{
    int i, sup, mich, huron, erie, ont, clr;
    /* superior frozen days */
    sup = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][0] < 0.0)
        {
            sup ++;
        }
    }
    /* michigan frozen days */
    mich = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][1] < 0.0)
        {
            mich ++;
        }
    }
    /* huron frozen days */
    huron = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][2] < 0.0)
        {
            huron ++;
        }
    }
    /* erie frozen days */
    erie = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][3] < 0.0)
        {
            erie ++;
        }
    }
    /* ontario frozen days */
    ont = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][4] < 0.0)
        {
            ont ++;
        }
    }
    /* st. clair frozen days */
    clr = 0;
    for (i=0;i<=365;i++)
    {
        if (lakes[i][5] < 0.0)
        {
            clr ++;
        }
    }
    /* print each lake's frozen days */
    printf("[Question #8] \n");
    printf("Lake:		Frozen days: \n");
    printf("Superior 	%d \n", sup);
    printf("Michigan	%d \n", mich);
    printf("Huron    	%d \n", huron);
    printf("Erie 	  	%d \n", erie);
    printf("Ontario 	%d \n", ont);
    printf("St. Clair	%d \n", clr);
}

/* #9---------------------------------------------------------------------------*/
void question9(double lakes19[365][6], double lakes[366][6]){
	double sup, mich, huron, erie, ont, clr, tot; //intialize each lakes variable
	
	//superior's average temperature
	sup = 0;
	for (int i = 0; i <= 364; i++){
        sup = (sup + lakes19[i][0]);
    }    
    sup = sup/365;
    
    //michigan's average temperature
    mich = 0;
	for (int i = 0; i <= 364; i++){
        mich = (mich + lakes19[i][1]);
    }    
    mich = mich/365;
    
    //huron's average temperature
    huron = 0;
	for (int i = 0; i <= 364; i++){
        huron = (huron + lakes19[i][2]);
    }    
    huron = huron/365;
    
    //erie's average temperature
    erie = 0;
	for (int i = 0; i <= 364; i++){
        erie = (erie + lakes19[i][3]);
    }    
    erie = erie/365;
    
    //ontario's average temperature
    ont = 0;
	for (int i = 0; i <= 364; i++){
        ont = (ont + lakes19[i][4]);
    }    
    ont = ont/365;
    
    //st.clr's average temperature
    clr = 0;
	for (int i = 0; i <= 364; i++){
        clr = (clr + lakes19[i][5]);
    }    
    clr = clr/365;
    
    //total temperature
    tot = (sup + mich + huron + erie + ont + clr)/6;
    
    //2020 results:
    double sup2, mich2, huron2, erie2, ont2, clr2, tot2; //intialize each lakes variable for 2020
	
	//superior's average temperature
	sup2 = 0;
	for (int i = 0; i <= 365; i++){
        sup2 = (sup2 + lakes[i][0]);
    }    
    sup2 = sup2/366;
    
    //michigan's average temperature
    mich2 = 0;
	for (int i = 0; i <= 365; i++){
        mich2 = (mich2 + lakes[i][1]);
    }    
    mich2 = mich2/366;
    
    //huron's average temperature
    huron2 = 0;
	for (int i = 0; i <= 365; i++){
        huron2 = (huron2 + lakes[i][2]);
    }    
    huron2 = huron2/366;
    
    //erie's average temperature
    erie2 = 0;
	for (int i = 0; i <= 365; i++){
        erie2 = (erie2 + lakes[i][3]);
    }    
    erie2 = erie2/366;
    
    //ontario's average temperature
    ont2 = 0;
	for (int i = 0; i <= 365; i++){
        ont2 = (ont2 + lakes[i][4]);
    }    
    ont2 = ont2/366;
    
    //st.clr's average temperature
    clr2 = 0;
	for (int i = 0; i <= 365; i++){
        clr2 = (clr2 + lakes[i][5]);
    }    
    clr2 = clr2/366;
    
    //total temperature
    tot2 = (sup2 + mich2 + huron2 + erie2 + ont2 + clr2)/6;
    
    //print each lakes temperature then the total average temperature
    printf("[Question #9] \n");
    printf("Lake:		Average Temperature(2019): 	Average Temperature(2020):\n");
    printf("Superior 	%.3lf 				%.3lf \n", sup, sup2);
    printf("Michigan	%.3lf 				%.3lf \n", mich, mich2);
    printf("Huron    	%.3lf 				%.3lf \n", huron, huron2);
    printf("Erie 	  	%.3lf 				%.3lf \n", erie, erie2);
    printf("Ontario 	%.3lf 				%.3lf \n", ont, ont2);
    printf("ST.Clr	 	%.3lf 				%.3lf \n", clr, clr2);
	printf("\n");
    printf("And the Total Average Temperature in 2019 is: %.3lf \n", tot);
    printf("And the Total Average Temperature in 2020 is: %.3lf \n", tot2);
    printf("\n");
    printf("Analysis on why these years have a difference can be found in the Report. \n");
}

/* main code -------------------------------------------------------------------*/
int main(void)
{
	/* Lakes[row][col] Year 2019*/
    double temp, lakes[366][6], lakes19[365][6];
    int status, day = 0, online = 1, choose;

    FILE * data;
    data = fopen("glsea-temps2020_1024.dat", "r"); 

    do{
        status = fscanf(data, "%lf", &temp);
        if (status == EOF)
            break;

        fscanf(data, "%lf", &temp);
        for(int i = 0; i < 6; i++)
            fscanf(data, "%lf", &lakes[day][i]);

    day++;
    }while (status != EOF);
    fclose(data);

    FILE * data19;
    data19 = fopen("glsea-temps2019_1024.dat", "r");
    status = 1;
    day = 0;
    do{
        status = fscanf(data19, "%lf", &temp);
        if (status == EOF)
            break;

        fscanf(data19, "%lf", &temp);
        for(int i = 0; i < 6; i++)
            fscanf(data19, "%lf", &lakes19[day][i]);

    day++;
    }while (status != EOF);
    fclose(data19);

    printf("CPS188 - Term Project - Winter 2022\nProduced by Andrew Le, Zoravar Multani, and Sanchit Das.\n");
    
    while (online == 1){
		printf("\n");
        printf("Please select a problem (1-9). Select 0 to exit: ");
        scanf("%d", &choose);

        if (choose == 0){
            printf("Program is exiting...");
            return(0);
        }
        else if (choose == 1)
            question1(lakes);
        else if (choose == 2)
            question2(lakes);
        else if (choose == 3)
            question3(lakes);
        else if (choose == 4)
            question4(lakes);
        else if (choose == 5)
            question5(lakes);
        else if (choose == 6)
            question6(lakes);
        else if (choose == 7)
            question7(lakes);
        else if (choose == 8)
            question8(lakes);
        else if (choose == 9)
            question9(lakes19, lakes);
        }
    return (0); 
}
