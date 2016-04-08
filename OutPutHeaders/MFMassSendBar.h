/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "KitProgressBarDelegate.h"
#import "MFBanner.h"

@class UIImageView, SightPlayerView, KitProgressBar, UIView, NSString, UIButton, MassSendWrap;
@protocol MFMassSendBarDelegate;

@interface MFMassSendBar : XXUnknownSuperclass <KitProgressBarDelegate, MFBanner> {
	UIView* m_contentView;
	KitProgressBar* m_progressBar;
	UIImageView* m_thumb;
	SightPlayerView* m_player;
	UIButton* m_cancelButton;
	MassSendWrap* _task;
	id<MFMassSendBarDelegate> _delegate;
	int _state;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int state;
@property(assign, nonatomic) __weak id<MFMassSendBarDelegate> delegate;
@property(retain, nonatomic) MassSendWrap* task;
-(void).cxx_destruct;
-(void)clearPlayer;
-(void)cancelTask;
-(void)onTaskCanceled;
-(void)onTrig;
-(void)onClick;
-(void)onProgressAnimEnd;
-(void)setProgress:(float)progress;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

