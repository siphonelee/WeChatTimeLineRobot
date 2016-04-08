/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"


@protocol SightPreviewView
-(void)setQRFrameEnable:(BOOL)enable;
-(BOOL)supportQRFrame;
-(void)forceFocusAnimAtPoint:(CGPoint)point;
-(void)startFocusAnimAtPoint:(CGPoint)point;
-(CGPoint)transformPointInView:(CGPoint)view;
@optional
-(void)setReady;
-(BOOL)isReady;
-(void)setQRScannerDelegate:(id)delegate;
@end

