/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "NSObject.h"


@protocol WCForceTouchPreviewProtocol <NSObject>
-(BOOL)canPeek;
@optional
-(CGRect)previewingSourceRectForLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(id)viewControllerToPreviewWithFromController:(id)controller forLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
@end

