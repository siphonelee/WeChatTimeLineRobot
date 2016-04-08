/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCBaseControlMgr.h"
#import "MMKernelExt.h"

@class UIViewController, NSString;

@interface WCAccountManualLoginControlMgr : WCBaseControlMgr <MMKernelExt> {
	map<unsigned long long, NSString *, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, NSString *> > > m_mapStatus;
	UIViewController* m_firstViewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)reportADID;
-(void)scheduleLocalNotification:(id)notification;
-(void)scheduleLocalNotification:(id)notification fireDate:(id)date;
-(BOOL)isRestTime:(id)time;
-(void)deleteArchive;
-(BOOL)recoverFromArchive;
-(void)saveCurrentStatusToArchive;
-(unsigned long long)getReportTime;
-(void)reportClickStream:(id)stream;
-(unsigned long)startInviteLogic:(id)logic Data:(id)data;
-(unsigned long)startRegisterLogic:(id)logic Data:(id)data;
-(unsigned long)startSecurityCenterLogic:(id)logic Data:(id)data;
-(unsigned long)startFacebookLogic:(id)logic Data:(id)data;
-(unsigned long)startPhoneLoginLogic:(id)logic Data:(id)data;
-(unsigned long)startQRCodeLoginLogic:(id)logic Data:(id)data;
-(unsigned long)startLoginLogic:(id)logic Data:(id)data;
-(id)showAlertWithTitle:(id)title message:(id)message btnTitle:(id)title3 target:(id)target sel:(SEL)sel btnTitle:(id)title6 target:(id)target7 sel:(SEL)sel8 btnTitle:(id)title9 target:(id)target10 sel:(SEL)sel11 status:(unsigned long)status;
-(id)showAlertWithTitle:(id)title message:(id)message btnTitle:(id)title3 target:(id)target sel:(SEL)sel btnTitle:(id)title6 target:(id)target7 sel:(SEL)sel8 status:(unsigned long)status;
-(id)showAlertWithTitle:(id)title message:(id)message btnTitle:(id)title3 target:(id)target sel:(SEL)sel status:(unsigned long)status;
-(void)dismissAlertView:(id)view buttonIndex:(id)index;
-(void)reportExitAlert:(id)alert;
-(void)reportEnterAlert:(id)alert;
-(void)reportClickAction:(unsigned long)action;
-(void)reportClickAction:(unsigned long)action styleID:(id)anId;
-(id)getStatusName:(unsigned long)name;
-(void)closeFirstView;
-(void)openFirstView:(id)view withNavBarHidden:(BOOL)navBarHidden;
-(void)openFirstView:(id)view;
-(void)dealloc;
-(id)init;
@end

