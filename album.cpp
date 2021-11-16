#include<iostream>
using namespace std;

int Last_Artist_Id[1000][8],Last_Album_Id[1000][8];

void Remove_artist_all_albums()
{

}
void Remove_artist()
{
    Remove_artist_all_albums();
}



void Delete_artist()
{
searchartist();
Select_artist();
Remove_artist();

}
//DELETE ARTIST TREE STARTS HERE

 /**
-**********************************************
**********************************************
**********************************************
**********************************************-
**/

//edit artist tree ends here

void Display_one_artist()
{

// this function takes iformation about single artist and displays the artist information vertically
cout<<"artist id : ";
cout<<"id var"<<endl;
cout<<"artist name : ";
cout<<"name var"<<endl;
cout<<"artist phone : ";
cout<<"phone var"<<endl;
cout<<"artist email : ";
cout<<"email var"<<endl;
cout<<"artist gender : ";
cout<<"gender var"<<endl;

}

bool Edit_artist_info()
{
    Display_one_artist();

}


 int Select_artist()
{
    searchartist();//already created function
    Displaysearhcedartist();


    //returns the selected artist position
}

void Edit_artist()
{

    Select_artist();
    Edit_artist_info();
    Sort_artist();


}
//edit artist starts here
 /**
-**********************************************
**********************************************
**********************************************
**********************************************-
**/

 //add artist tree ends here
bool Format_email()
 {
  //formats email
 }

bool validate_email()
{
    //validates email

}

void Get_artist_email()
{
    validate_email();
    Format_email();
}




bool Validate_phone()
{
    //this function takes phone number value and returns bool value if phone no is valid or not
}

void Get_artist_phone()
{
    //Validate_phone() will take phone number from user
    Validate_phone();
}

 Validate_gender()
{
    //function that validates gender to be f-Form-M
}
char Get_artist_gender()
{
Validate_gender();

}


void Format_name()
{
    //formats artist name

}

bool validate_name()
{
    // checks if artist name is in correct format

}
void Get_artist_name(char name[])
{

    cin>>char name[]
    validate_name();
    Format_name();


}

void Get_artist_info()
{
Get_artist_name();
Get_artist_gender();
Get_artist_phone();
Get_artist_email();


}
Add_artist()
{
    //use reference method to retur data
    Get_artist_info();
    Sort_artist();

}
 //add artist tree starts here

/**
-**********************************************
**********************************************
**********************************************
**********************************************-
**/




int editartistmenu()
{
 int choice;
 cout<<"Artist Editor menu "<<endl;
 cout<<"Enter -1- To Add Artist "<<endl;
 cout<<"Enter -2- To Edit Artist "<<endl;
 cout<<"Enter -3- Delete Artist "<<endl;
 cin>>choice;

 return choice;
 }

 bool artisteditor()
 {

     int choice;
     choice=editartistmenu();
if (choice==1)
    Add_artist();
else if(choice==2)
    Edit_artist();
else if(choice==3)
    Delete_artist();


 }

//ARTIST EDITOR STARTS HERE
/**
-**********************************************
**********************************************
**********************************************
**********************************************-
**/
//artist viewer ends here

void Displaysearhcedartist()
{



}
 void searchartistbyname()
{



}



 void searchartistbyid()
 {

 }


 void searchartist()
 {

     searchartistbyid();
     searchartistbyname();





 }



 void Artistsearch()
{

searchartist();
Displaysearhcedartist();



}


void DisplayAllArtist()
{


    //this function displays all artists


}




bool View_artist(const char artistIds[][8], const char names[][40],  const char genders[],
 const char phones[][11], const char emails[][80], int nArtist)

{
   int choice;
 cout<<"Enter -1- Display all artist "<<endl;
 cout<<"Enter -2- View Artist by search "<<endl;
 cout<<"Enter -3- Go back to Artist menu "<<endl;
 cin>>choice;
 if (choice==1)
 DisplayAllArtist();
 else if(choice==2)
 Artistsearch();
 else if(choice==3)
 Artistmenu();
 else
    cout<<"INVALID ENTRY"<<endl;



 bool choice;


 return choice;
}








int Artistmenu()
{
    int choice;
 cout<<"Artist menu "<<endl;
 cout<<"Enter -1- View Artist "<<endl;
 cout<<"Enter -2- Edit Artist "<<endl;
 cout<<"Enter -3- Back to main menu "<<endl;
 cin>>choice;
 if(choice==1)
 View_artist();
 else if(choice==2)
 Edit_artist();
 else if(choice==3)
 Main_manager();
 else
    cout<<"Invalid input Enter correct option from the screen"<<endl;


 return 0;
}








bool Artistmanager(char artistIds[][8], char names[][40], char genders[],
                char phones[][11], char emails[][80], char artistIdsRefs[][8],
                char albumIds[][8], char titles[][80], char recordFormats[][20],
                char datePublished[][11],char paths[][100], int & nArtist, int & nAlbum)
{
bool choice ;
}

int mainmenu()
{
    int choice;
    cout<<"Enter -1- Artist"<<endl;
    cout<<"Enter -2- Album"<<endl;
    cin>>choice;

    return choice;
}



void Main_manager(char artistIds[][8], char names[][40], genders[],
                  char phones[][11], char emails[][80],
                  char artistIdsRefs[][8], char albumIds[][8],
                  char titles[][80],char recordFormats[][20],
                  char datePublished[][11],char paths[][100],
                  int & nArtist, int & nAlbum)
{
    int choice;
    choice=main_menu();
  if (choice==1)
    Artist_manager(char artistIds[][8], char names[][40], char genders[],
                char phones[][11], char emails[][80], char artistIdsRefs[][8],
                char albumIds[][8], char titles[][80], char recordFormats[][20],
                char datePublished[][11],char paths[][100], int & nArtist, int & nAlbum);
  //else if (choice==2)
 //   Album_manager();
  else
    cout<<"INVALID CHOICE"<<endl;

}
//main manager tree starts here





/**
-**********************************************
**********************************************
**********************************************
**********************************************-
**/
//loading tree begins here
void Sort_album()
{

    //code here
}


void loadAlbum(char artistIdRefs[][8], char albumIds[][8], char titles[][80],
                char recordFormats[][20], char datePublished[][11],
                char paths[][100],  int & nAlbum)
{
//code here
// open_Album_file();
// Sort_album();

}

void Sort_artist(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], int nArtist
            )


{



   // code here
}


void loadArtist(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], int & nArtist)
{
    //code here
 // open_Artist_file();
//  Sort_artist();

}



void loading(char artistIds[][8], char names[][40], char genders[],
             char phones[][11],
             char emails[][80], char artistIdRefs[][8], char albumIds[][8],
              char titles[][80], char recordFormats[][20],
              char datePublished[][11], char paths[][100],
             int & nArtist, int & nAlbum)
{

     // loadArtist();
    //loadAlbum();
}
//loading tree finishes here

/**
-**********************************************
**********************************************
**********************************************
**********************************************-
**/
//out puts greetings to user
void welcome()
{
    cout<<"welcome to album managment system"<<endl;
    cout<<"this program helps manage artists albums by providing various ways of storing albums "<<endl;

}

int main()
{
 char artistIds[1000][8],genders[1000],names[1000][40],phones[1000][10],emails[1000][60];
 char artistIdRefs[1000][8],albumIdsIds[1000][10],titles[1000][80],recordFormats[1000][12],datePublished[1000][11],paths[1000][100];
 int nartists=2,nalbum;

//filled the data to check if code is working correct it will be edited from the program
artistIds[1][8]={"int0001"};
names[1][40]={"aser gezu"};
phones[1][10]{"0947233314"};
emails[1][60]{"asergezu5@gmail.com"};
genders[1]{"M"};

artistIds[2][8]={"int0002"};
names[2][40]={"henok gezu"};
phones[2][10]{"0915555851"};
emails[2][60]{"henokgezu55@gmail.com"};
genders[2]{"M"};



//variable filling ends here
   //  welcome();
    loading(artistIds[][8],genders[],names[][40],phones[][10],emails[][60],nartists);
 //   mainmanager();
//    farewell();
    return 0;
}
