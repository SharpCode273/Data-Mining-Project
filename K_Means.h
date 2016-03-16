#ifndef __K_MEANS_INCLUDED__
#define __K_MEANS_INCLUDED__
class K_Means
{
public:
	k_means();
	~k_means();
	Centroid run();
	bool shouldStop(Centroid, Centroid, int);
};
#endif