/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"

@class MMUIScrollView, EmotionRewardResponseInfo, EmoticonStoreItem, WCUITextField, MMUIView, StoreEmotionRewardLogicObject, MMUIButton, NSString, NSPredicate;

@interface MMStoreEmotionRewardCustomAmountViewController : MMUIViewController {
	EmoticonStoreItem* m_storeItem;
	EmotionRewardResponseInfo* m_rewardInfo;
	StoreEmotionRewardLogicObject* m_rewardLogic;
	MMUIScrollView* m_scrollView;
	MMUIView* m_inputArea;
	WCUITextField* m_inputTextField;
	MMUIButton* m_rewardBtn;
	NSString* m_lastInputValidInput;
	NSPredicate* m_regexPredicate;
}
-(void).cxx_destruct;
-(void)onClose;
-(void)onClickRewardBtn;
-(void)textFieldDidChanged:(id)textField;
-(void)textFieldBeginEditing:(id)editing;
-(float)updateRewardBtnFromMarginTop:(float)marginTop;
-(void)initRewardBtn;
-(float)updateInputAreaViewFromMarginTop:(float)marginTop;
-(void)initInputAreaView;
-(void)updateScrollView;
-(void)initScrollView;
-(void)initView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)view;
-(id)initWithStoreItem:(id)storeItem RewardInfo:(id)info RewardLogic:(id)logic;
-(void)dealloc;
@end

