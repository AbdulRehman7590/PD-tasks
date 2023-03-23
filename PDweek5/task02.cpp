#include <iostream>
using namespace std;

float conversionmm(float Lmm, float Wmm, float Hmm);
float conversioncm(float lcm, float wcm, float hcm);
float conversionkm(float lkm, float wkm, float hkm);
float calculate(float L, float W, float H);
float Units, volume;

main()
{
 float length, width, height;
 string unit;

 cout <<"Enter length(in meters) : ";
 cin >> length;
 cout <<"Enter width(in meters) : ";
 cin >> width;
 cout <<"Enter height(in meters) :";
 cin >> height;
 cout <<"Enter unit : ";
 cin >> unit;

 if (unit == "mm")
 { 
  Units = conversionmm(length, width, height);
  cout <<"Volume is " <<Units <<" cubic mm" <<endl;
 }

 if (unit == "cm")
 {
  Units = conversioncm(length, width, height);
  cout <<"Volume is " <<Units <<" cubic cm" <<endl;
 }
 
 if (unit == "m")
 {
  Units = calculate(length, width, height);
  cout <<"Volume is " <<Units <<" cubic m" <<endl;
 }

 if (unit == "km")
 {
  Units = conversionkm(length, width, height);
  cout <<"Volume is " <<Units <<" cubic km" <<endl;
 }

}

float conversionmm(float Lmm, float Wmm, float Hmm)
{
 Lmm = Lmm*1000;
 Wmm = Wmm*1000;
 Hmm = Hmm*1000;
 
 volume = calculate(Lmm, Wmm, Hmm);
 return volume;
}

float conversioncm(float lcm, float wcm, float hcm)
{
 lcm = lcm*100;
 wcm = wcm*100;
 hcm = hcm*100;

 volume = calculate(lcm, wcm, hcm);
 return volume;
}

float conversionkm(float lkm, float wkm, float hkm)
{
 lkm = lkm/1000;
 wkm = wkm/1000;
 hkm = hkm/1000;

 volume = calculate(lkm, wkm, hkm);
 return volume;
}

float calculate(float L, float W, float H)
{
 float result;
 result = (L*W*H)/3;
 return result;
}