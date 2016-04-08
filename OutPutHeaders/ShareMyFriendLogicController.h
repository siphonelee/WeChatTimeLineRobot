/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "UIAlertViewDelegate.h"
#import "MMService.h"

@class CContact, NSString;

@interface ShareMyFriendLogicController : MMService <MMService, UIAlertViewDelegate> {
	CContact* m_contactShareToWho;
	CContact* m_contactToShare;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CContact* m_contactToShare;
@property(retain, nonatomic) CContact* m_contactShareToWho;
-(void).cxx_destruct;
-(BOOL)onFilterSendReceiver:(id)receiver;
-(BOOL)onFilterContactCandidate:(id)candidate;
-(void)start;
-(void)showConfirmShareView;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)onConfirmShareMyFriend:(id)aFriend;
-(id)contactShareMsgFromUser:(id)user toUser:(id)user2 sharedContact:(id)contact;
@end

