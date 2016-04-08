/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class UIView, NSDictionary, UIButton, UIImageView;
@protocol WCFestivalRedEnvShareViewDelegate;

@interface WCFestivalRedEnvShareView : MMUIView {
	id<WCFestivalRedEnvShareViewDelegate> m_delegate;
	UIImageView* m_backgroundView;
	UIButton* openRedEnvelopesButton;
	UIImageView* openAnimationImageView;
	CGRect m_frame;
	NSDictionary* m_dicBaseInfo;
	BOOL m_bSuccessAnmation;
	UIView* oRedView;
	UIView* oTopHeaderView;
	UIImageView* imageView;
}
-(void).cxx_destruct;
-(void)showSuccessOpenAnimation;
-(void)removeView;
-(void)endAnimation;
-(void)showAnimation;
-(void)stopReceiveAnimation;
-(void)startReceiveAnimation;
-(void)OnOpenRedEnvelopes;
-(void)OnOpenList;
-(void)OnCancelButtonDone;
-(id)initWithFrame:(CGRect)frame andData:(id)data delegate:(id)delegate;
-(void)refreshViewWithData:(id)data;
@end

