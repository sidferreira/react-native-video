#include <AVFoundation/AVFoundation.h>
@import GoogleInteractiveMediaAds;
@class RCTVideo;
//@class RCTVideo;


//#import <react-native-video/RCTVideo.h>
//#import "RCTVideo.h"
//#include <RCTVideo.h>
//#import <react-native-video/RCTVideo.h>


@interface RCTVideoGoogleIMA : NSObject

- (void)requestStreamForSource:(NSDictionary *)source;
- (AVPlayer *)didSetupPlayerWithPlayerItem:(AVPlayerItem *) playerItem withSource:(NSDictionary *) source;

- (RCTVideoGoogleIMA *)initWithRCTVideo:(RCTVideo *)rctVideo;

@end
