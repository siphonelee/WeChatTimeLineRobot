/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITextFieldDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class NSMutableArray, MMTableViewCellInfo, MMTableViewInfo, NSString, MMTableView;
@protocol WCProudctReceiptEditDelegate;

@interface WCProductReceiptEditViewController : MMUIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {
	MMTableViewInfo* m_tableViewInfo;
	MMTableViewCellInfo* m_editInfo;
	MMTableView* m_searchTableView;
	NSMutableArray* m_sourceArray;
	NSMutableArray* m_destArray;
	NSString* m_receiptStr;
	float m_keyBoardHeight;
	id<WCProudctReceiptEditDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* m_destArray;
@property(retain, nonatomic) NSMutableArray* m_sourceArray;
@property(retain, nonatomic) NSString* m_receiptStr;
@property(assign, nonatomic) __weak id<WCProudctReceiptEditDelegate> m_delegate;
-(void).cxx_destruct;
-(void)dealloc;
-(void)updateDestAry:(id)ary;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)onSaveText;
-(void)disMissThisViewAnimated;
-(void)reloadSearchTableView;
-(void)keyboardWillShow:(id)keyboard;
-(id)initWithReceiptStr:(id)receiptStr;
-(void)onClearHistoryRecord;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)initSearchTableView;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)initData;
-(void)initView;
@end

