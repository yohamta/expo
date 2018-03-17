#import "ABI26_0_0EXGLView.h"

@interface ABI26_0_0EXGLARSessionManagerStub : NSObject

- (NSDictionary *)startARSessionWithGLView:(ABI26_0_0EXGLView *)glView;
- (void)stopARSession;
- (NSDictionary *)arMatricesForViewportSize:(CGSize)viewportSize zNear:(CGFloat)zNear zFar:(CGFloat)zFar;
- (NSDictionary *)arLightEstimation;
- (NSDictionary *)rawFeaturePoints;
- (NSDictionary *)planes;
- (void)setIsPlaneDetectionEnabled:(BOOL)planeDetectionEnabled;
- (void)setIsLightEstimationEnabled:(BOOL)lightEstimationEnabled;
- (void)updateARCamTexture;

@end


