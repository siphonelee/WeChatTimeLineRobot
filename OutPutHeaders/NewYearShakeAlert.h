/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIWindow.h"
#import "IUiUtilExt.h"

@class NSString;
@protocol NewYearShakeAlertDelegate;

@interface NewYearShakeAlert : MMUIWindow <IUiUtilExt> {
	id _retainSelf;
	NSString* _text;
	id<NewYearShakeAlertDelegate> _alertDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<NewYearShakeAlertDelegate> alertDelegate;
-(void).cxx_destruct;
-(void)onCancel;
-(void)onConfirm;
-(void)showAlert;
-(id)genBackgroundView;
-(void)setupSubviews;
-(void)onMainWindowFrameChanged;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame andText:(id)text;
@end

