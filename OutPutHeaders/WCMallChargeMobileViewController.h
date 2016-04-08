/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCMallBaseViewController.h"
#import "WCMallOldTelephoneViewDelegate.h"
#import "WCMallCandidateTelephoneViewDelegate.h"
#import "ILinkEventExt.h"
#import "UITextFieldDelegate.h"
#import "WeChat-Structs.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "CNContactPickerDelegate.h"

@class NSDictionary, UIImageView, UILabel, WCUITextField, UIButton, NSString, WCMallCandidateTelephoneView, WCMallOldTelephoneView, UIView;
@protocol WCMallChargeMobileViewControllerDelegate;

@interface WCMallChargeMobileViewController : WCMallBaseViewController <ABPeoplePickerNavigationControllerDelegate, CNContactPickerDelegate, UITextFieldDelegate, WCMallOldTelephoneViewDelegate, WCMallCandidateTelephoneViewDelegate, ILinkEventExt> {
	id<WCMallChargeMobileViewControllerDelegate> m_delegate;
	WCUITextField* m_textInputTextField;
	UIView* oHeaderView;
	UIView* oTipsBannerView;
	UILabel* oUserNameLabel;
	UILabel* oOperatorsTipsLabel;
	UILabel* oErrorMsgTipsLabel;
	UILabel* oPlaceHolderTipsLabel;
	UIButton* oSelectMaskAddressButton;
	UIButton* oSelectAddressButton;
	UIView* oSpectorLine;
	UIButton* payCardButton;
	UIImageView* payCardImageView;
	UIImageView* wtImageView;
	UIButton* wtButton;
	UIView* oFunctionListView;
	BOOL bDidPoped;
	BOOL bInited;
	int m_eTelephoneNumberInputStatus;
	WCMallOldTelephoneView* m_oWCMallOldTelephoneView;
	WCMallCandidateTelephoneView* m_oWCMallCandidateTelephoneView;
	NSDictionary* dicSelectedProductInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)peoplePickerNavigationController:(id)controller didSelectPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)contactPicker:(id)picker didSelectContactProperty:(id)property;
-(void)contactPickerDidCancel:(id)contactPicker;
-(void)onSelectContact;
-(void)onSelectEditInputTextField;
-(id)GetCandidateTelephoneEnsureTip;
-(id)GetCandidateTelephoneDescription:(unsigned long)description DifferentIndex:(id)index;
-(unsigned long)GetNumberOfCandidateTelephoneListCount;
-(void)OnClickWCMallCandidateTelephoneEnsureCellClicked;
-(void)OnClickWCMallCandidateTelephoneCell:(unsigned long)cell;
-(BOOL)isSupportSeparator;
-(id)GetOldTelephoneOwnerName:(unsigned long)name;
-(id)GetOldTelephoneNumber:(unsigned long)number;
-(unsigned long)GetNumberOfOldTelephoneListCount;
-(void)OnClickWCMallOldTelephoneClearButton;
-(void)OnClearTelphone;
-(void)OnClickWCMallOldTelephoneCell:(unsigned long)cell;
-(void)textFieldDidChanged:(id)textField;
-(void)textFieldDidEndOnExit:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)setTelephoneNumberOwnerName:(id)name Number:(id)number;
-(void)setDelegate:(id)delegate;
-(void)OnEnsureCharge;
-(void)OnFounctionUp:(id)up;
-(void)OnFounctionDown:(id)down;
-(void)OnFounctionClicked:(id)clicked;
-(void)OnClickedWt;
-(void)OnClickedPayCard;
-(void)OnActivityIconClick:(id)click;
-(void)OnActivityIconCancel:(id)cancel;
-(void)refreshViewWithData:(id)data;
-(void)reloadTableView;
-(void)viewDidLoad;
-(void)reloadDescTipsView;
-(void)initCurrentView;
-(void)initNavigationBar;
-(void)viewDidLayoutSubviews;
-(void)viewDidBePoped:(BOOL)view;
-(void)OnLeftBarButtonDone;
-(void)initJumpedH5FunctionView;
-(void)reloadFunctionListView;
-(id)getDescTipsView;
-(id)getInputMobileNumberView;
-(id)getBannerView;
-(id)getCurrentFunctionDictionary;
-(id)getCurrentUserName;
-(void)initCandidateTelphoneTableView:(CGRect)view;
-(void)reloadCandidateTelephoneView;
-(void)initOldTelphoneTableView:(CGRect)view;
-(void)reloadOldTelephoneListView;
-(BOOL)initFilledDefaultData;
-(void)dealloc;
@end

