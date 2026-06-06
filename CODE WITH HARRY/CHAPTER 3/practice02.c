//write a code to check weather a student passed in every subject or not
/*minimum criteria :
                    minimam 33 marks in each subject.
                    minimum 40% mark over all.*/
#include<stdio.h>
int main(){
    //all initializations
    float maths,chemistry,physics,bio,english,computer,eco,history,bengali,geo,overall;
    char *name[30],stream;
    //asking name of the candidate
   // printf("Enter your name: ");
   // scanf("%s", name);
    //asking stream for subject recognisation
    printf("Enter your stream code (for humanities<h> for science <s>, student who had bio<subject code = b >): ");
    scanf("%c",& stream);
    //using ifelse loop for subject marks
    if (stream=='h'||stream == 'H'){
        printf("Enter your geography marks:");
        scanf("%f",& geo );
        printf("Enter your history marks:");
        scanf("%f",& history );
        printf("Enter your economics marks:");
        scanf("%f",& eco );
        printf("Enter your english marks:");
        scanf("%f",& english );
        printf("Enter your bengali marks:");
        scanf("%f",& bengali );
            //CALCULATING FOR HUMANITIES AND REPRESENTATION
        printf("=================================================================\n");
        history>=33?printf("you passed in history with %.2f %% marks.\n", history):printf("You failed in history.\n");
        geo>=33?printf("You passed in geography with  %.2f %% marks.\n",geo):printf("You failed im geography.\n");
        eco>=33?printf("You passed in economics with %.2f %% marks.\n",eco):printf("You failed in economics.\n");
        english>=33?printf("You passed in english with %.2f %% marks.\n",english):printf("You failed in english.\n");
        bengali>=33?printf("You passed in bengali with %.2f %% marks.\n",bengali):printf("You failed in bengali.\n");
        
        }
    else if (stream=='s'||stream == 'S'){
        printf("Enter your physics marks:");
        scanf("%f",& physics );
        printf("Enter your chemistry marks:");
        scanf("%f",& chemistry );
        printf("Enter your mathematics marks:");
        scanf("%f",& maths);
        printf("Enter your english marks:");
        scanf("%f",& english );
        printf("Enter your computer marks:");
        scanf("%f",& computer );
            // CALCULATION AND SCINENCE WITH COMPUTER.
        printf("=================================================================\n");
        chemistry>=33?printf("you passed in chemistry with %.2f %% marks.\n", chemistry):printf("You failed in chemistry\n.");
        physics>=33?printf("You passed in physics with  %.2f %% marks.\n",physics):printf("You failed im physics.\n");
        maths>=33?(printf("You passed in mathematics with %.2f %% marks.\n"),maths):printf("You failed in mathematics.\n");
        english>=33?printf("You passed in english with %.2f %% marks.\n",english):printf("You failed in english.\n");
        computer>=33?printf("You passed in computer with %.2f %% marks.\n",computer):printf("You failed in computer.\n");
    }
    else if (stream=='b'||stream == 'B'){
        printf("Enter your physics marks:");
        scanf("%f",& physics );
        printf("Enter your chemistry marks:");
        scanf("%f",& chemistry );
        printf("Enter your mathematics marks:");
        scanf("%f",& maths);
        printf("Enter your english marks:");
        scanf("%f",& english );
        printf("Enter your biology marks:");
        scanf("%f",& bio );
        printf("=================================================================\n");
        chemistry>=33?printf("you passed in chemistry with %.2f %% marks.\n", chemistry):printf("You failed in chemistry\n.");
        physics>=33?printf("You passed in physics with  %.2f %% marks.\n",physics):printf("You failed im physics.\n");
        maths>=33?("You passed in mathematics with %.2f %% marks.\n",maths):printf("You failed in mathematics.\n");
        english>=33?printf("You passed in english with %.2f %% marks.\n",english):printf("You failed in english.\n");
        bio>=33?printf("You passed in biology with %.2f %% marks.\n",bio):printf("You failed in biology.\n");
    }
    else{
        printf("Your entered stream code isn't valid.\n");
    }
    //marks calculations for each stream
    printf("\n \n \n YOUR SCORE CARD.....Ended");
    return 0;
}

