//author: Nicolas Lee Wen Han
//This program to to calculate distances between two points
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv){
 double lat1=atof(argv[1]);
 double lat2=atof(argv[2]);
 double lon1=atof(argv[3]);
 double lon2=atof(argv[4]);
 double latA=0;
 double latB=0;
 double lonA=0;
 double lonB=0;
 double difference=0;
 double r=0;
 double d=0;

 (latA)=((lat1)/180)*M_PI;
 (latB)=((lat2)/180)*M_PI;
 (lonA)=((lon1)/180)*M_PI;
 (lonB)=((lon1)/180)*M_PI;

 difference = (lonA)-(lonB);

 d=  acos(( sin(latA)*sin(latB))+( cos(latA)*cos(latB)*cos(difference)))*r;

 printf("Location Distance\n");
 printf("========================\n");
 printf("Origin:      (%f,%f)\n",lat1,lon1);
 printf("Destination: (%f,%f)\n",lat2,lon2);
 printf("Air distance is %f kms\n",d);
}
