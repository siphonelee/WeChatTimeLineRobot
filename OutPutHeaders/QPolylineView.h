/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "QOverlayPathView.h"

@class QPolyline;

__attribute__((visibility("hidden")))
@interface QPolylineView : QOverlayPathView {
}
@property(readonly, assign, nonatomic) QPolyline* polyline;
-(id)initWithPolyline:(id)polyline;
-(void)setFillColor:(id)color;
-(void)createPath;
@end

