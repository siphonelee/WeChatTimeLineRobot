/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class MMUILabel, QBarCodeView;

@interface WCPayOrderDetailBarView : MMUIView {
	CGRect _oldFrame;
	BOOL _inAnimation;
	float _oldBrightness;
	MMUILabel* _barCodeLabel;
	QBarCodeView* _imageBarView;
	MMUIView* _container;
	MMUIView* _maskView;
}
@property(retain, nonatomic) MMUIView* maskView;
@property(retain, nonatomic) MMUIView* container;
@property(retain, nonatomic) QBarCodeView* imageBarView;
@property(retain, nonatomic) MMUILabel* barCodeLabel;
+(float)barCodeWidth;
-(void).cxx_destruct;
-(BOOL)inFullscreen;
-(void)updateCode:(id)code;
-(void)exitFullScreenWithView:(id)view animation:(BOOL)animation;
-(void)codeViewTapped:(id)tapped;
-(void)commonInit;
-(id)init;
-(void)dealloc;
@end

