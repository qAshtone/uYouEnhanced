//
// YTPlayerBarExtensions.h
// Shared header for YouTube player bar extensions
//

#import <UIKit/UIKit.h>

// Extension for YTSegmentableInlinePlayerBarView
@interface YTSegmentableInlinePlayerBarView : UIView
@property(nonatomic, assign) BOOL enableSnapToChapter;
- (BOOL)isVideoModeLive;
@end

