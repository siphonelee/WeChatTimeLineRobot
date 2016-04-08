/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"

@class UIImageView, MMCPLabel, UILabel, CContact, NSString, MMWebImageView, UIButton, MMHeadImageView;
@protocol ContactsItemViewDelegate;

@interface ContactsItemView : MMUIView {
	MMCPLabel* m_nickNameLabel;
	UIButton* m_rightButton;
	UILabel* m_greyLabel;
	UILabel* m_userNameLabel;
	UILabel* m_addedLabel;
	MMHeadImageView* m_headImage;
	BOOL m_bShowHeadImage;
	UILabel* m_labelMemberCount;
	id m_data;
	id<ContactsItemViewDelegate> m_delegate;
	MMWebImageView* m_webHeadImageView;
	UIImageView* m_contactLogo;
	CContact* m_contact;
	BOOL m_bShowUserDescription;
	BOOL m_bUseDynamicSize;
	NSString* m_cpKeyForNickname;
	BOOL m_isNicknameUnsafe;
	float m_CustomLabelDecreaseWidth;
}
@property(retain, nonatomic) MMWebImageView* m_webHeadImageView;
@property(assign, nonatomic) float m_CustomLabelDecreaseWidth;
@property(assign, nonatomic) BOOL m_bUseDynamicSize;
@property(assign, nonatomic) BOOL m_bShowUserDescription;
@property(retain, nonatomic) CContact* m_contact;
@property(retain, nonatomic) id m_data;
@property(assign, nonatomic) __weak id<ContactsItemViewDelegate> m_delegate;
@property(assign, nonatomic) BOOL m_bShowHeadImage;
@property(retain, nonatomic) MMHeadImageView* m_headImage;
@property(retain, nonatomic) UILabel* m_userNameLabel;
@property(retain, nonatomic) UILabel* m_nickNameLabel;
-(void).cxx_destruct;
-(void)updateCPState;
-(void)setUserNameLabelToFitWidth;
-(void)initUserNameLabel:(id)label;
-(void)initGreenRightButton:(id)button;
-(void)initGreyRightButton:(id)button;
-(void)onRightBtnAction;
-(void)initRightPlaceAddLabel;
-(void)initRightPlaceCenterAlignmentAddedLabelWithString:(id)string;
-(void)initRightPlaceAddedLabel;
-(void)initRightPlaceWaitingLabel;
-(void)initRightPlaceDeleteLabel;
-(void)initGrayLabel:(id)label color:(id)color;
-(void)initAddedLabel:(id)label;
-(void)initNickNameLabel:(id)label;
-(CGRect)calNickNameFrame:(id)frame;
-(void)updateBackgroundColor:(id)color;
-(void)updateView:(id)view;
-(void)updateUserNameLabel:(id)label;
-(void)updateNickNameLabel;
-(void)updateHeadImageForContact:(id)contact;
-(void)initView:(id)view showChatRoomName:(id)name;
-(void)showChatRoomCount:(id)count;
-(void)initView:(id)view;
-(void)initSessionStyleView:(id)view;
-(BOOL)isShowMobileName:(id)name mobileName:(id)name2;
-(void)initContactLogo:(id)logo;
-(void)initHeadImageForContact:(id)contact;
-(void)initHeadImage:(id)image;
-(void)initHeadImageUrl:(id)url withAuthorizationCode:(id)authorizationCode update:(BOOL)update;
-(void)initHeadImage:(id)image withUrl:(id)url;
-(void)layoutSubviews;
-(id)init;
@end

