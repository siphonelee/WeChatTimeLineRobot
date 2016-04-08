/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "BaseMessageNodeView.h"

@class UILabel, MMWebImageView;

@interface AppEmoticonSharedMessageNodeView : BaseMessageNodeView {
	UILabel* m_descLabel;
	UILabel* m_titleLabel;
	MMWebImageView* m_iconView;
}
@property(retain, nonatomic) MMWebImageView* m_iconView;
@property(retain, nonatomic) UILabel* m_descLabel;
@property(retain, nonatomic) UILabel* m_titleLabel;
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(id)getMoreMainInfomationAccessibilityDescription;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onForward:(id)forward;
-(void)onMoreOperate:(id)operate;
-(void)showOpearation;
-(void)onClick;
-(id)genCenterImage:(id)image;
-(void)updateBkgImage:(BOOL)image;
-(void)onClearResource;
-(void)onDisappear;
-(void)updateStatus:(id)status;
-(id)genDescLabel;
-(id)genTitleLabel;
-(void)layoutSubviewsInternal;
-(CGSize)sizeForFrame:(CGRect)frame;
-(id)getBackgroundImageHL;
-(id)getBackgroundImage;
-(void)dealloc;
@end

