/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class MMTableView, CContact, NSString;

@interface WCSetStrangerPermissionsViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate> {
	MMTableView* _tableView;
	CContact* _contact;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)makeSwitchCell:(id)cell tip:(id)tip status:(BOOL)status tag:(int)tag;
-(void)onSwitchValueChange:(id)change;
-(void)viewDidLoad;
-(void)initView;
-(void)onDissmiss;
-(void)dealloc;
-(id)initWithUserName:(id)userName;
@end

