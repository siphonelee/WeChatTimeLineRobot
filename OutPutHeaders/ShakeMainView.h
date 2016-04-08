/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FriendAsistSessionExt.h"
#import "WeChat-Structs.h"
#import "ShakeMgrExt.h"
#import "MMUIScrollView.h"

@class UIImageView, UILabel, UIView, MMSayHelloButton, UIActivityIndicatorView, UIButton, ShakeMsgUnreadButton;
@protocol ShakeMainFrameDelegate;

@interface ShakeMainView : MMUIScrollView <FriendAsistSessionExt, ShakeMgrExt> {
	UIImageView* m_imageHide;
	UIImageView* m_imageLineUp;
	UIImageView* m_imageLineDown;
	UILabel* m_label;
	UIView* m_bkgViewUp;
	UIView* m_bkgViewDown;
	UIActivityIndicatorView* m_loadingView;
	UILabel* m_labelTips;
	UIView* m_hideView;
	BOOL m_bAnimating;
	BOOL m_bClickHideImage;
	BOOL m_bUseDefaultImage;
	id<ShakeMainFrameDelegate> m_delegate;
	MMSayHelloButton* m_btnSayHello;
	UILabel* m_labNoHello;
	ShakeMsgUnreadButton* m_btnUnreadMsg;
	BOOL m_bShowList;
	UIActivityIndicatorView* m_pageLoading;
	UIButton* m_bannerBtn;
	UILabel* m_pageLable;
	UILabel* m_shakeResultCountLable;
	UIImageView* m_shakeResultBGImage;
	CGRect m_originalLableFrame;
	BOOL m_bIsSetImageLine;
	UIImageView* m_imageViewDown;
	UIImageView* m_imageViewUp;
}
@property(retain, nonatomic) UIImageView* m_imageViewDown;
@property(retain, nonatomic) UIImageView* m_imageViewUp;
-(void).cxx_destruct;
-(void)onFriendAssistUnreadCountChanged;
-(void)onShakeMsgUnreadCountChanged;
-(void)updateUnreadMsgBtnState;
-(void)hideUnreadMsgBtn:(BOOL)btn;
-(void)hideSayHello:(BOOL)hello;
-(void)OnOpenUnreadMsgList;
-(void)OnOpenSayHello;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)startAnimationSplit;
-(BOOL)bIsAnimating;
-(void)waitToNextAnimation;
-(void)startAnimationMerge;
-(void)resetStatus;
-(void)resetTipViewStatus;
-(void)dealloc;
-(void)fadeHide;
-(void)stopAllAnimation;
-(void)stopFade;
-(void)setErrorMsg:(id)msg;
-(void)updateViewForLoading;
-(void)updateViewForNormal;
-(void)updateViewForPre;
-(void)updateView;
-(void)updateShakeSayHelloView;
-(void)initUnreadMsgBtn;
-(void)initSayHelloBtn;
-(void)updateHideImage;
-(void)setInfoBtnEnable;
-(void)setInfoBtnDisabled;
-(id)getHideImage;
-(id)tryGenHQImage:(id)image;
-(id)getHideView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)setM_Delegate:(id)delegate;
@end

