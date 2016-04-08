/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IContactLabelMgrExt.h"
#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "WCFacadeExt.h"
#import "UITableViewDataSource.h"
#import "MultiSelectContactsViewControllerDelegate.h"

@class UIView, UIImageView, NSString, MMTableView, UIImage, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol SightMomentGroupSelectDelegate;

@interface SightMomentGroupSelectViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, IContactLabelMgrExt, WCFacadeExt, MultiSelectContactsViewControllerDelegate> {
	UIView* m_content;
	UIView* m_background;
	UIImageView* m_blurView;
	MMTableView* m_tableView;
	NSMutableArray* m_arrAllLabelName;
	NSMutableSet* m_selectedVisibleLabelName;
	NSMutableSet* m_selectedInvisibleLabelName;
	BOOL m_bShowDetail;
	float m_originContentOffset;
	BOOL m_hasTryTransferLabel;
	NSMutableDictionary* m_dicGroupLabel;
	int m_transferPrivacy;
	unsigned long m_transferEventId;
	UIImage* _maskImage;
	id<SightMomentGroupSelectDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<SightMomentGroupSelectDelegate> delegate;
@property(retain, nonatomic) UIImage* maskImage;
-(void).cxx_destruct;
-(void)deleteOldSnsGroup;
-(void)setContactLabel:(id)label withRetCode:(int)retCode andEventId:(unsigned long)anId;
-(void)sortAndSaveSnsGroupLabel;
-(void)onAddContactLabel:(id)label withRetCode:(int)retCode andEventId:(unsigned long)anId;
-(void)onMultiSelectContactReturn:(id)aReturn;
-(void)createNewLabel:(id)label;
-(void)selectContacts;
-(void)onFinish;
-(void)onDataChange;
-(void)reloadAnimate;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)showTransferTip;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)isSelected:(int)selected postPrivacy:(int)privacy indexPath:(id)path;
-(int)getCellType:(id)type;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)editContactLabels;
-(void)onAllTagNameUpdate;
-(void)initData;
-(id)loadAllTagNameList;
-(void)makeTableView;
-(void)makeTopBar;
-(void)makeBackground;
-(void)popSelf;
-(void)onWCGroupUpdatedReturn:(BOOL)aReturn;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)init;
@end

