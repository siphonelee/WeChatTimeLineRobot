/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "MessageObserverDelegate.h"
#import "PluginContactInfoAssist.h"

@class UIAlertView, NSString;

@interface CPushMailContactInfoAssist : PluginContactInfoAssist <MessageObserverDelegate, UIAlertViewDelegate> {
	map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > m_mapPushMailCellToCellType;
	UIAlertView* m_pwdAlertView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)dealloc;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)handleSwitchPushMailOk;
-(id)getPushMailErrorTitle;
-(void)showInputPwdAlert:(BOOL)alert;
-(void)onSendPushMailPwd:(id)pwd;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)doSwitchPushMailByAlertView:(id)view;
-(void)showFolderConfigPage;
-(void)reloadInstalledTableViewData;
-(void)onWrite;
-(id)getLoadingText;
-(id)getPluginIntro;
-(void)installPlugin;
-(void)onSwitchViewOff;
-(void)onSwitchViewOn;
-(void)showClosePushMailAlert;
-(void)doSwitchPushMail:(id)mail;
-(void)reloadPushMailTableView;
-(BOOL)isShowOpenPushMailBtn;
@end

