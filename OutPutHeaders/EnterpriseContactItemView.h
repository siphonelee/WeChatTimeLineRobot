/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class MMHeadImageView, MMCPLabel, CEnterpriseContact, UIButton;
@protocol EnterpriseContactItemViewDelegate;

@interface EnterpriseContactItemView : MMUIView {
	CEnterpriseContact* _contact;
	MMCPLabel* _nickNameLabel;
	MMHeadImageView* _headImage;
	UIButton* _rightButton;
	id<EnterpriseContactItemViewDelegate> delegate;
}
@property(assign, nonatomic) __weak id<EnterpriseContactItemViewDelegate> delegate;
-(void).cxx_destruct;
-(void)onRightBtnClicked;
-(CGRect)calcRightButtonFrame:(id)frame;
-(CGRect)calcNickNameFrame:(id)frame;
-(void)initGreyRightButton:(id)button;
-(void)updateNickNameLabel;
-(void)updateHeadImageForContact:(id)contact;
-(void)initNickNameLabel:(id)label;
-(void)initHeadImageForContact:(id)contact;
-(void)updateView:(id)view;
-(void)initView:(id)view;
-(void)layoutSubviews;
@end

