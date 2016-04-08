/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "EmoticonBackUpMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "MMUIView.h"

@class UIImageView, UILabel, NSString, UIButton;
@protocol CustomEmoticonSynchronizeViewDelegate;

@interface CustomEmoticonSynchronizeView : MMUIView <EmoticonBackUpMgrExt, UIAlertViewDelegate> {
	BOOL m_lastTimeAnimating;
	BOOL _m_firstEnterWithoutWiFi;
	UIButton* m_pauseButton;
	UIButton* m_startButton;
	UIButton* m_editButton;
	UIButton* m_closeButton;
	UIImageView* m_cloudImageView;
	UIImageView* m_cloudStatusImageView;
	UILabel* m_synchronizeStatusLabel;
	UILabel* m_networkStatusLabel;
	id<CustomEmoticonSynchronizeViewDelegate> _m_delegate;
	unsigned _m_localEmoticonLimit;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned m_localEmoticonLimit;
@property(assign, nonatomic) BOOL m_firstEnterWithoutWiFi;
@property(assign, nonatomic) BOOL m_lastTimeAnimating;
@property(assign, nonatomic) __weak id<CustomEmoticonSynchronizeViewDelegate> m_delegate;
@property(retain, nonatomic) UILabel* m_networkStatusLabel;
@property(retain, nonatomic) UILabel* m_synchronizeStatusLabel;
@property(retain, nonatomic) UIImageView* m_cloudStatusImageView;
@property(retain, nonatomic) UIImageView* m_cloudImageView;
@property(retain, nonatomic) UIButton* m_closeButton;
@property(retain, nonatomic) UIButton* m_editButton;
@property(retain, nonatomic) UIButton* m_startButton;
@property(retain, nonatomic) UIButton* m_pauseButton;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)onEmoticonBackUpMgrSyncOperate;
-(void)onEmoticonBackUpMgrRecoverNetworkChangeToUnreachable;
-(void)onEmoticonBackUpMgrRecoverAutoPauseOnWWan;
-(void)onEmoticonBackUpMgrRecoverGoon;
-(void)onEmoticonBackUpMgrRecoverPause;
-(void)onEmoticonBackUpMgrRecoverFailed;
-(void)onEmoticonBackUpMgrRecoverComplete;
-(void)onEmoticonBackUpMgrRecoverOneEmoticon;
-(BOOL)isReachable;
-(BOOL)isOnWifi;
-(unsigned)getCurrentEmoticonCount;
-(BOOL)isRecoveringComplete;
-(BOOL)isRecoveringBeenPause;
-(BOOL)isRecovering;
-(void)layoutSubviews;
-(void)updateNetworkLabelTotalCount:(unsigned)count CompleteCount:(unsigned)count2;
-(void)updateSynchronizeLabelTotalCount:(unsigned)count CompleteCount:(unsigned)count2;
-(void)updateCloudImageViewTotalCount:(unsigned)count CompleteCount:(unsigned)count2;
-(void)updateCloseButtonTotalCount:(unsigned)count CompleteCount:(unsigned)count2;
-(void)onClickClose;
-(void)updateEditButtonTotalCount:(unsigned)count CompleteCount:(unsigned)count2;
-(void)onClickEdit;
-(void)updateStartButtonTotalCount:(unsigned)count CompleteCount:(unsigned)count2;
-(void)onClickStart;
-(void)updatePauseButtonTotalCount:(unsigned)count CompleteCount:(unsigned)count2;
-(void)onClickPause;
-(void)updateView;
-(void)onBecomeActive;
-(id)initWithFrame:(CGRect)frame;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
@end

