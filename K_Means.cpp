#include <iostream>
#include "K_Means.h"
#include "DataSet.h"
#include "Centroid.h"

/***************************** K_Means::run() *********************************
	Centroid K_Means::run()
Purpose:
	Runs the K-Means algorithm on the instance of the constructed K-Means
	class
Parameters:

Notes:
	Demensions, starting centroids and data sets are not initilized in this
	method. They will be initialized in the constructor
Return values:
	Centroid 	centroid object containing final values of all centroids
******************************************************************************/
Centroid K_Means::run() {
	//Initialize centroids randomly
	//Initialize book keeping vars.

	//Run the main k-means algorithm loop
		//Save old centroids for convergence test. Book keeping.

		//Assign labels to each datapoint based on centroids

		//Assign centroids based on datapoint labels

	// once looping is done we return centroid
}


bool K_Means::shouldStop(Centroid oldCentroid, Centroid centroid, int iterations) {
	// If the max itterations are met OR the old centroids are the same as the new centroids
		// return true
}

