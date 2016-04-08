/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "BaseMessageNodeView.h"

@class UILabel, UIView, NSString, MMProgressView;

@interface AppFileMessageNodeView : BaseMessageNodeView <UIAlertViewDelegate> {
	UILabel* m_detailLabel;
	MMProgressView* m_progressView;
	UIView* m_progressBkgView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(id)getMoreMainInfomationAccessibilityDescription;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onClearResource;
-(void)onDisappear;
-(void)onClick;
-(void)onMoreOperate:(id)operate;
-(void)onForward:(id)forward;
-(void)onFavoriteAdd:(id)add;
-(void)showOpearation;
-(void)updateBkgImage:(BOOL)image;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)resend;
-(void)updateThumbImage;
-(void)updateStatus:(id)status;
-(CGSize)sizeForFrame:(CGRect)frame;
-(void)layoutSubviewsInternal;
-(id)getTitleText;
-(id)getFileDetailText;
-(void)genProgressViewWithFrame:(CGRect)frame andBackgroundFrame:(CGRect)frame2;
-(void)initDetailLabel;
-(id)getTitleLabel;
-(id)getDefaultThumbImage;
-(id)genCenterImage:(id)image;
-(id)getBackgroundImageHL;
-(id)getBackgroundImage;
-(id)initWithMessageWrap:(id)messageWrap Contact:(id)contact ChatContact:(id)contact3;
@end

