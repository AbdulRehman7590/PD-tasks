#include <iostream>
using namespace std;
main(){
float bagsize;
cout <<"Enter size of bag in pounds = ";
cin >> bagsize;
float bagcost;
cout <<"Enter cost of the bag = ";
cin >> bagcost;
float areacover;
cout <<"Enter area covered by bag in sq. ft. = ";
cin >> areacover;
float fertilizer;
fertilizer=bagcost/bagsize;
float fertilizing;
fertilizing=bagcost/areacover;
cout <<"Cost of the fertilizer per pound = " << fertilizer <<endl;
cout <<"Cost of fertilizing the area per sq. ft. = " << fertilizing;
}
