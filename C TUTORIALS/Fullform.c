#include<stdio.h>
#include<string.h>
void full_form(char x[]);
int main(){
    char x[100];
    full_form(x);
    return 0;
}
void full_form(char x[]){
    printf("Enter The Short form: ");
    scanf("%s",x);
    if(strcasecmp(x,"www")==0){
        printf("|Full form of '%s' is:- [WORLD WIDE WEB]|\n",x);}
    if(strcasecmp(x,"pdf")==0){
        printf("|Full form of '%s' is:- [PORTABLE DOCUMENT FORMAT]|\n",x);}
    if(strcasecmp(x,"ram")==0){
        printf("|Full form of '%s' is:- [RANDOM ACCESS MEMORY]|\n",x);}
    if(strcasecmp(x,"rom")==0){
        printf("|Full form of '%s' is:- [READ ONLY MEMORY]|\n",x);}
    if(strcasecmp(x,"https")==0){
        printf("|Full form of '%s' is:- [HYPER TEXT TRANFER PROTOCOL SECURE]|\n",x);}
    if(strcasecmp(x,"MAN")==0){
        printf("|Full form of '%s' is:- [METROPOLITAN AREA NETWORK]]|\n",x);}
    if(strcasecmp(x,"MP3")==0){
        printf("|Full form of '%s' is:- [MPEG AUDIO LAYER 3]|\n",x);}
    if(strcasecmp(x,"url")==0){
        printf("|Full form of '%s' is:- [Uniform Resource Locator]|\n",x);}
    if(strcasecmp(x,"API")==0){
        printf("|Full form of '%s' is:- [Application Programming Interface]|\n",x);}
    if(strcasecmp(x,"LAN")==0){
        printf("|Full form of '%s' is:- [Local Area Network]|\n",x);}
    if(strcasecmp(x,"WAN")==0){
        printf("|Full form of '%s' is:- [Wide Area Network]|\n",x);}
    if(strcasecmp(x,"VPN")==0){
        printf("|Full form of '%s' is:- [Virtual Private Network]|\n",x);}
    if(strcasecmp(x,"IoT")==0){
        printf("|Full form of '%s' is:- [Internet of Things]|\n",x);}
    if(strcasecmp(x,"UI")==0){
        printf("|Full form of '%s' is:- [User Interface]|\n",x);}
    if(strcasecmp(x,"OS")==0){
        printf("|Full form of '%s' is:- [Operating System]|\n",x);}
    if(strcasecmp(x,"FTP")==0){
        printf("|Full form of '%s' is:- [File Transfer Protocol]|\n",x);}
    if(strcasecmp(x,"CPU")==0){
        printf("|Full form of '%s' is:- [Central Processing Unit]|\n",x);}
    if(strcasecmp(x,"GUI")==0){
        printf("|Full form of '%s' is:- [Graphics Processing Unit]|\n",x);}
    if(strcasecmp(x,"DBMS")==0){
        printf("|Full form of '%s' is:- [Data Base Management System]|\n",x);}
    if(strcasecmp(x,"HTML")==0){
        printf("|Full form of '%s' is:- [Hypertext Markup Language]|\n",x);}
    if(strcasecmp(x,"CSS")==0){
        printf("|Full form of '%s' is:- [Cascading Style Sheets]|\n",x);}
    if(strcasecmp(x,"JS")==0){
        printf("|Full form of '%s' is:- [JavaScript]|\n",x);}
    if(strcasecmp(x,"JSON")==0){
        printf("|Full form of '%s' is:- [JavaScript Object Notation]|\n",x);}
    if(strcasecmp(x,"XML")==0){
        printf("|Full form of '%s' is:- [Extensible Markup Language]|\n",x);}
    if(strcasecmp(x,"REST")==0){
        printf("|Full form of '%s' is:- [Representational State Transfer]|\n",x);}
    if(strcasecmp(x,"SOAP")==0){
        printf("|Full form of '%s' is:- [Simple Object Access Protocol]|\n",x);}
    if(strcasecmp(x,"DNS")==0){
        printf("|Full form of '%s' is:- [Domain Name System]|\n",x);}
    if(strcasecmp(x,"BI")==0){
        printf("|Full form of '%s' is:- [Business Intelligence]|\n",x);}
    if(strcasecmp(x,"ERP")==0){
        printf("|Full form of '%s' is:- [Enterprise Resource Planning]|\n",x);}
    if(strcasecmp(x,"CMS")==0){
        printf("|Full form of '%s' is:- [Content Management System]|\n",x);}
    if(strcasecmp(x,"CRM")==0){
        printf("|Full form of '%s' is:- [Customer Relationship Management]|\n",x);}
    if(strcasecmp(x,"SDK")==0){
        printf("|Full form of '%s' is:- [Software Development Kit]|\n",x);}
    if(strcasecmp(x,"API")==0){
        printf("|Full form of '%s' is:- [Application Programming Interface]|\n",x);}
    if(strcasecmp(x,"MVC")==0){
        printf("|Full form of '%s' is:- [Model-View-Controller]|\n",x);}
    if(strcasecmp(x,"OOP")==0){
        printf("|Full form of '%s' is:- [Object-Oriented Programming]|\n",x);}
    int choise;
    printf("Do You Want to See anyother Full form? [if yes press 1]");
    scanf("%d",&choise);
    if(choise==1){
        for(int i=1;i<=100;i++){
        full_form(x);
        }
    }
    else{
        return;
    }
}