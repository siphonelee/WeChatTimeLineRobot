/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class QMapView;

__attribute__((visibility("hidden")))
@interface QAnnotationFloor : XXUnknownSuperclass {
	QMapView* _mapView;
}
@property(assign, nonatomic) __weak QMapView* mapView;
-(void).cxx_destruct;
-(id)initWithFrame:(CGRect)frame;
-(void)didAddSubview:(id)subview;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)updateAllAnnotationViews;
-(void)updateForAnnotationView:(id)annotationView;
@end

