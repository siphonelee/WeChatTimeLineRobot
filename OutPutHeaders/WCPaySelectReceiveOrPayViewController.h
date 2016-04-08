/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMPatternLockLogicDelegate.h"
#import "WCPayBaseViewController.h"

@class UIView, UIButton, NSString, UIImageView, UILabel;
@protocol WCPaySelectReceiveOrPayViewControllerDelegate;

@interface WCPaySelectReceiveOrPayViewController : WCPayBaseViewController <MMPatternLockLogicDelegate> {
	id<WCPaySelectReceiveOrPayViewControllerDelegate> m_delegate;
	UIView* _payCycleView;
	UIView* _receiveCycleView;
	UIButton* _payButton;
	UIButton* _receiveButton;
	UILabel* _payLabel;
	UILabel* _payDescLabel;
	UILabel* _receiveLabel;
	UILabel* _receiveDescLabel;
	UIImageView* _receiveIcon;
	UIImageView* _payIcon;
	unsigned long _patternLockLogicTag;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long patternLockLogicTag;
@property(retain, nonatomic) UIImageView* payIcon;
@property(retain, nonatomic) UIImageView* receiveIcon;
@property(retain, nonatomic) UILabel* receiveDescLabel;
@property(retain, nonatomic) UILabel* receiveLabel;
@property(retain, nonatomic) UILabel* payDescLabel;
@property(retain, nonatomic) UILabel* payLabel;
@property(retain, nonatomic) UIButton* receiveButton;
@property(retain, nonatomic) UIButton* payButton;
@property(retain, nonatomic) UIView* receiveCycleView;
@property(retain, nonatomic) UIView* payCycleView;
-(void).cxx_destruct;
-(void)setDelegate:(id)delegate;
-(void)onPatternLockLogicOperateSuccess;
-(void)onPatternLockLogicOperateCancel;
-(id)getEnteranceViewContoller;
-(void)buttonClick:(id)click;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(BOOL)useTransparentNavibar;
-(void)onCancelButton:(id)button;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)setupUI;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)init;
@end

