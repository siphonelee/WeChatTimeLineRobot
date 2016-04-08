/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "LuckyCoinAnimationControllerDelegate.h"
#import "IWCCardPkgExt.h"
#import "MMUIView.h"
#import "WCNewCardDetailViewControllerDelegate.h"

@class WCCardData, ShakeCardData, NSString, LuckyCoinAnimationController;
@protocol ShakeCardDetailViewDelegate;

@interface ShakeCardDetailView : MMUIView <IWCCardPkgExt, WCNewCardDetailViewControllerDelegate, LuckyCoinAnimationControllerDelegate> {
	ShakeCardData* _shakeCardData;
	WCCardData* _wcCardData;
	BOOL _isNormalType;
	LuckyCoinAnimationController* _emojiController;
	id<ShakeCardDetailViewDelegate> viewDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<ShakeCardDetailViewDelegate> viewDelegate;
-(void).cxx_destruct;
-(void)dealloc;
-(void)onWCCardUpdate:(id)update;
-(void)onAcceptCard:(id)card ErrCode:(int)code ErrMsg:(id)msg;
-(void)onGiftCard:(id)card lastIndex:(id)index;
-(void)onUseCard:(id)card;
-(void)onWCCardDetailViewControllerCancel:(id)cancel;
-(void)didAnimationFinish;
-(id)getViewController;
-(void)onSingleTap:(id)tap;
-(void)onClickViewCardDetail:(id)detail;
-(id)getAcceptCardBtnTitle;
-(void)onClickAcceptBtn:(id)btn;
-(id)genGetCardView:(CGRect)view;
-(id)getCloseBtn;
-(id)getBottomBtn;
-(id)genAcceptCardSuccView:(CGRect)view;
-(void)hiddenAcceptFailLabel;
-(void)showAcceptFailLabel:(id)label;
-(void)hiddenCardDetailView;
-(void)showGetCardView;
-(void)showAcceptCardView;
-(void)showAcceptSuccView;
-(void)hiddenAllView;
-(void)initView;
-(void)layoutSubviews;
-(id)getReceivedIcon;
-(id)getBackgroundImage;
-(id)getShakeCardData;
-(BOOL)isShowingAcceptCardView;
-(id)initWithCardData:(id)cardData withFrame:(CGRect)frame;
@end

