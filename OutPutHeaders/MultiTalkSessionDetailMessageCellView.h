/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMUIView.h"

@class NSArray, NSString, MMTableView;

@interface MultiTalkSessionDetailMessageCellView : MMUIView <UITableViewDataSource, UITableViewDelegate> {
	NSArray* _messageList;
	MMTableView* _tableView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MMTableView* tableView;
@property(retain, nonatomic) NSArray* messageList;
+(float)contentHeightForMessageList:(id)messageList;
-(void).cxx_destruct;
-(id)getMessageItemAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)initView;
-(id)initWithFrame:(CGRect)frame andMessageContentViewWithMessageList:(id)messageList;
-(void)dealloc;
@end

