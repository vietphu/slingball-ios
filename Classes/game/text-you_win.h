#import <OpenGLES/ES1/gl.h>

#import "NVTypes.h"

static const NVNormalVertex TextYouWinVertexData[] = {
	{/*v:*/{1.052631, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.210526, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.052631, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.052631, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.210526, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.210526, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.052631, -0.578947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.210526, -0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.052631, -0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.052631, -0.578947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.210526, -0.578947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.210526, -0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.421053, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.578947, -0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.421053, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, -0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.421053, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.578947, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.578947, -0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, -0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.157895, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, -0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.157895, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, -0.157895, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, -0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.263158, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.263158, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.263158, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.157895, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.157895, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.157895, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.684210, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.263158, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.473684, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.473684, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.473684, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.052632, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.473684, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.052632, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.473684, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.578947, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, 0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.578947, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, 0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.578947, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, 0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.157895, 0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.157895, 0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.578947, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, 0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.157895, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.157895, 0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.578947, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.157895, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.421053, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.578947, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.157895, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.157895, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.210526, 0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.157895, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.210526, 0.157895, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.210526, 0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.000000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.157895, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.421053, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.578947, -0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, -0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.421053, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, -0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.263158, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.157895, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.263158, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.157895, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.000000, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, -0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.684210, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.684210, -0.631579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.684210, -0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.052632, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.052632, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.052632, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.052631, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.210526, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.052631, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.210526, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.210526, 0.210526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.052631, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.210526, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.052631, 0.368421, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.052631, 0.789474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
};

#define kTextYouWinNumberOfVertices 144