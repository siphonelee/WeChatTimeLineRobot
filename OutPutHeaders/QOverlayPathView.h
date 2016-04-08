/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "QOverlayView.h"

@class UIColor, NSArray;

__attribute__((visibility("hidden")))
@interface QOverlayPathView : QOverlayView {
	UIColor* _fillColor;
	UIColor* _strokeColor;
	float _lineWidth;
	int _lineJoin;
	int _lineCap;
	float _miterLimit;
	float _lineDashPhase;
	NSArray* _lineDashPattern;
}
@property(assign) CGPathRef path;
@property(copy, nonatomic) NSArray* lineDashPattern;
@property(assign, nonatomic) float lineDashPhase;
@property(assign, nonatomic) float miterLimit;
@property(assign, nonatomic) int lineCap;
@property(assign, nonatomic) int lineJoin;
@property(assign, nonatomic) float lineWidth;
@property(retain, nonatomic) UIColor* strokeColor;
@property(retain, nonatomic) UIColor* fillColor;
+(Class)layerClass;
-(void).cxx_destruct;
-(id)initWithOverlay:(id)overlay;
-(void)initDefaultAttributes;
-(void)strokePath:(CGPathRef)path inContext:(CGContextRef)context;
-(void)fillPath:(CGPathRef)path inContext:(CGContextRef)context;
-(void)applyFillPropertiesToContext:(CGContextRef)context atZoomScale:(float)zoomScale;
-(void)applyStrokePropertiesToContext:(CGContextRef)context atZoomScale:(float)zoomScale;
-(void)invalidatePath;
-(void)createPath;
-(id)caLineJoinFromCGLineJoin:(int)cglineJoin;
-(id)caLineCapFromCGLineCap:(int)cglineCap;
-(id)shapeLayer;
@end

