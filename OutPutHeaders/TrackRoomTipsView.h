/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class CContact, UIButton, UIImageView, UILabel;
@protocol TrackRoomTipsViewDelegate;

@interface TrackRoomTipsView : XXUnknownSuperclass {
	id<TrackRoomTipsViewDelegate> _delegate;
	CContact* _contact;
	BOOL _isUnfold;
	BOOL _isAnimating;
	UIImageView* _bgView;
	UIImageView* _iconView;
	UIImageView* _iconHLView;
	UILabel* _foldTipsLabel;
	UIImageView* _arrowView;
	UILabel* _unfoldTipsLabel;
	UIButton* _enterButton;
	UIButton* _cancelButton;
}
@property(assign, nonatomic) __weak id<TrackRoomTipsViewDelegate> delegate;
-(void).cxx_destruct;
-(void)onEnterButtonPress;
-(void)onCancelButtonPress;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(BOOL)checkTouchPoint:(CGPoint)point IfInView:(id)view;
-(void)stopIconChangeAnimation;
-(void)doIconDarkAnimation;
-(void)doIconHighlightAnimation;
-(void)startIconChangeAnimation;
-(void)resetTipsView;
-(void)doFoldAnimation;
-(void)unfold;
-(void)doUnfoldAnimation;
-(void)unfoldAnimationFinish;
-(void)setTipsTitle:(id)title;
-(void)updateTipsView;
-(void)initView;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithContact:(id)contact;
@end

