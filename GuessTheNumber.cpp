
 #include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int num,guess,tries=1,level;
    srand(time(0));
    // printf("The number generated randomly = %d\n",num);
    cout<<"\n\n\t<><><><>----<><><><>----<><><><>----GUESS THE NUMBER GAME----<><><><>----<><><><>----<><><><>\n";
    cout<<"\n\t}}}---}}}---}}}---}}}--- Kindly enter the level you wanna play. :)---{{{---{{{---{{{---{{{ \n\nLEVELS ---->> { 1 }----{ 2 }----{ 3 }\n";
    cin>>level;
    switch (level)
    {
    case 1:{
        num = rand()%100+1;
        cout<<">>>>>>>>>>  Guess The Number between  "" 1 "" to "" 100 ""  <<<<<<<<<<\n\n\t\t\t{}{}--GOOD LUCK--{}{}\n\n";
        break;
    }
    case 2:{
        num = rand()%1000+1;
        cout<<">>>>>>>>>>  Guess The Number between  "" 1 "" to "" 1000 ""  <<<<<<<<<<\n\n\t\t\t{}{}--GOOD LUCK--{}{}\n\n";
        break;
    }
    case 3:{
        num = rand()%5000+1;
        cout<<">>>>>>>>>>  Guess The Number between  "" 1 "" to "" 5000 ""  <<<<<<<<<<\n\n\t\t\t{}{}--GOOD LUCK--{}{}\n\n";
        break;
    }
    default:{
        cout<<"Level entered is Unavailable.\nWe are working on it.\nSORRY FOR THE INCONVENIENCE.\n";
        break;
    }
    }
    do{
         if(tries==11){
            cout<<"    !!! YOU LOSE !!!\n <3 BETTER LUCK NEXT TIME <3 \n\n ------<< THE NUMBER WAS "<<num<<" >>------"<<endl<<endl;
            break;
        }
        printf(".........Enter your guess.........\n");
        cin>>guess;
        if(guess==num){
            cout<<"YOU WIN , YOU GUESSED IT CORRECT!!!\n Number of guesses =="<<tries;
        }
        else if (guess>num)
        {   
            cout<<"Jyada Hai Yaarr ! :(       [ No. of guesses LEFT --> "<<10-tries<<" ]"<<endl<<endl;
        }
        else if(guess<num){
            cout<<"Kam Padgya thoda ! :(      [ No. of guesses LEFT --> "<<10-tries<<" ]"<<endl<<endl;
        }
        tries++;
    }while (guess!=num);
   
return 0;
}  