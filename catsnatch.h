
#ifndef __CATSNATCH_H__
#define __CATSNATCH_H__

#include <opencv2/imgproc/imgproc_c.h>

typedef struct catsnatch_s
{
	CvMemStorage* storage;
	IplImage* snout;
	IplConvKernel *kernel;
} catsnatch_t;

int catsnatch_init(catsnatch_t *ctx, const char *snout_path);

void catsnatch_destroy(catsnatch_t *ctx);

int catsnatch_match(catsnatch_t *ctx, const IplImage *img, CvRect *match_rect);

#endif // __CATSNATCH_H__
