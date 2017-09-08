
////////////////////////////////////////////////////////////////////////////////////////// 
///    Author: Pierre-Simon Mangeard, psmangeard@gmail.com
///    Department of Physics and Astronomy, University of Delaware, January 17, 2017
////////////////////////////////////////////////////////////////////////////////////////// 

#include "ALTckhit.h"

ClassImp(ALTckhit)


//Constructors
ALTckhit::ALTckhit()// Default
{
   mregMC=0; // region if MC
   mtrackMC=0; // mtrack of track
   typeMC=0;   //type of particle if MC
   eMC=0;     //total energy if MC (entrance of the tracker layer)
   xin=0;      //x coordinate of hit MC (entrance of the tracker layer)
   yin=0;      //y coordinate of hit MC (entrance of the tracker layer)
   zin=0;      //z coordinate of hit MC (entrance of the tracker layer)
   xout=0;     //x coordinate of hit MC (exit the tracker layer)
   yout=0;     //y coordinate of hit MC (exit the tracker layer)
   zout=0;     //z coordinate of hit MC (exit the tracker layer)
   age=0;    //Age of particle if MC  (entrance of the tracker layer)
   cx=0;     //cosineX of momentum MC (Average in the tracker layer)
   cy=0;     //cosineY of momentum MC (Average in the tracker layer)
   cz=0;     //cosineZ of momentum MC (Average in the tracker layer)
   flag=0;     //flag value: Track=1, Hit=0
   DeltaE=0;     //Energy along the track or at hit location Hit=0  

  
   //Raw Data from cluster information
   L=-1;         //Layer from 0 to 6 top to bottom
   chip=-1;      //Chip ID: 0 to 11
   nstrips=-1;   //Number of strips in the cluster
   fstrip=-1;    //First strip ID from 0 to 63 
   fstripID=-1;  //First strip on the layer from 0 767
   //Coordinates of the cluster in cm determined from the raw data
   x=-999.;
   y=-999.;
   z=-999.;
 
  //Pattern Reco info
   xPR=0;
   yPR=-0;
   zPR=0;
   flagPR=false;

  //Reconstructed information
   xreco=-999;      //x coordinate of hit 
   yreco=-999;      //y coordinate of hit 
   zreco=-999;      //z coordinate of hit 
   agereco=-99;    //Age of particle  
   cxreco=-999;     //cosineX of momentum 
   cyreco=-999;     //cosineY of momentum 
   czreco=-999;     //cosineZ of momentum    
   ereco=-999;     //kinetic energy 
   k=-999;     //kth hit in event
	
	

}

