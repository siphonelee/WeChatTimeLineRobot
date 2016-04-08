/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class QScaleUnitsView, UIView, UIColor, NSString;

__attribute__((visibility("hidden")))
@interface QScaleView : XXUnknownSuperclass {
	UIColor* _lightSegmentColorRegular;
	UIColor* _darkSegmentColorRegular;
	UIColor* _borderColorRegular;
	UIColor* _lightSegmentColorSatellite;
	UIColor* _darkSegmentColorSatellite;
	UIColor* _borderColorSatellite;
	NSString* _metersAbbreviation;
	NSString* _kilometersAbbreviation;
	double* _magicNumbers;
	int _oldNumberOfSegments;
	int _segmentNumber;
	double _resultSegmentLength;
	double _resultSegmentLengthInMeters;
	UIView* _outlineView;
	QScaleUnitsView* _unitsView;
	BOOL _useRegularStyle;
	double _distanceInMeters;
}
@property(assign, nonatomic) double distanceInMeters;
@property(assign, nonatomic) BOOL useRegularStyle;
-(void).cxx_destruct;
-(void)updateUnitsView;
-(void)updateOutlineView;
-(void)updateDisplayStyle;
-(void)calculateSegmentLength;
-(void)calculateSegmentsCount;
-(void)calculateSegments;
-(void)updateOrigin:(CGPoint)origin;
-(void)initSegmentViews;
-(void)initBaseLayer;
-(void)initMagicNumber;
-(void)initAttributes;
-(id)init;
-(void)dealloc;
@end

