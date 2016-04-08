/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "POPAnimationDelegate.h"
#import "IWCNewYearHBDetailViewDelegate.h"
#import "MMUIView.h"

@class UIImageView, UIView, NSString, UIButton, NSDictionary, WCNewYearHBDetailView;
@protocol WCFestivalRedEnvReceiveHomeViewDelegate;

@interface WCFestivalRedEnvReceiveHomeView : MMUIView <POPAnimationDelegate, IWCNewYearHBDetailViewDelegate> {
	id<WCFestivalRedEnvReceiveHomeViewDelegate> m_delegate;
	NSDictionary* m_dicBaseInfo;
	UIImageView* m_backgroundView;
	UIImageView* _veinsView;
	UIButton* _openRedEnvelopesButton;
	UIImageView* _openAnimationImageView;
	UIView* _oRedEnvBgLayerView;
	UIView* _oTopHeaderView;
	UIView* _topView;
	UIImageView* _logoImgView;
	UIView* _bottomCoverView;
	UIView* _bottomRedView;
	UIView* _hbDetailFrameView;
	WCNewYearHBDetailView* _outerHbDetaiView;
	UIImageView* _bottomImgView;
	UIButton* _linkLabel;
	BOOL _isHBOpened;
	unsigned long _uiShowDetailViewBeginTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onHBDetailViewAdBtnClicked:(id)clicked flag:(unsigned long)flag subResType:(unsigned long)type;
-(void)onHBDetailViewClosedBtnClicked;
-(void)onHBDetailViewAnimationEnd;
-(void)bounceView:(id)view fromFrame:(CGRect)frame toFrame:(CGRect)frame3 animType:(id)type;
-(id)translateAnimate:(id)animate fromOrigin:(CGPoint)origin toOrigin:(CGPoint)origin3 duration:(float)duration;
-(id)scaleAnimate:(id)animate fromSize:(CGSize)size toSize:(CGSize)size3 duration:(float)duration;
-(void)scaleAndTranslateView:(id)view FromFrame:(CGRect)frame toFrame:(CGRect)frame3 duration:(float)duration animationType:(id)type;
-(void)showBottomTips;
-(void)pop_animationDidStop:(id)pop_animation finished:(BOOL)finished;
-(void)showAllViews;
-(void)bottomRedEnvScale2_ScaleHBDetailView:(float)view;
-(void)bottomRedEnvScale2_ScaleBottomCoverView:(float)view;
-(void)bottomRedEnvScale2_ScaleBgLayerView:(float)view;
-(void)bottomRedEnvScale2;
-(void)topRedEnvFlyAway;
-(void)openCoinFadeOut;
-(void)closeDetailView;
-(void)onLeftBarButtonClicked;
-(void)scaleBackgroundView;
-(void)showSuccessOpenAnimationWithTargetView:(id)targetView;
-(void)stopReceiveAnimation;
-(void)startReceiveAnimation;
-(void)endAnimation;
-(void)showAnimation;
-(void)removeView;
-(void)stopForShake;
-(void)onSubscribeBtnClicked:(id)clicked;
-(void)OnOpenRedEnvelopes;
-(void)OnCancelButtonDone;
-(id)initWithFrame:(CGRect)frame andData:(id)data delegate:(id)delegate;
-(void)refreshViewWithData:(id)data;
-(CGRect)calcFrameOfBackgroundViewAfterAnimationForIpadOnly;
-(void)layoutSubviews;
@end

