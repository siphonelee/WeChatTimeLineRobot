/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"
#import "UITableViewDataSource.h"

@class WCDataItem, UILabel, UITextView, WCADQuestionExp, NSString, MMTableView;

@interface WCAdvertiseUnlikeViewController : MMUIViewController <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource> {
	WCDataItem* _dataItem;
	WCADQuestionExp* _oExp;
	UILabel* m_wordCountLabel;
	MMTableView* m_tableView;
	UITextView* m_textView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onReasonSend;
-(void)onCancel;
-(void)updateWordCount:(int)count;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidChange:(id)textView;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithDataItem:(id)dataItem Exp:(id)exp;
@end

