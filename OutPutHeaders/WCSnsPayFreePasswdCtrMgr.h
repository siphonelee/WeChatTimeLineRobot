/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class WCSnsPayFreePasswdInfo, NSString;

@interface WCSnsPayFreePasswdCtrMgr : MMService <MMService, PBMessageObserverDelegate> {
	WCSnsPayFreePasswdInfo* _payFreePasswdInfo;
	int _curCtrScene;
	int _greetingPayPasswdScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int greetingPayPasswdScene;
@property(assign, nonatomic) int curCtrScene;
@property(retain, nonatomic) WCSnsPayFreePasswdInfo* payFreePasswdInfo;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)showBadNetWorkAlertOrNotifyFail:(BOOL)fail;
-(void)handleOpenSnsFreePayResp:(id)resp Event:(unsigned long)event;
-(void)moniterFailWithFlag:(BOOL)flag;
-(BOOL)doManageSnsFreePay:(id)pay;
-(BOOL)shouldShowFreePayEntrance;
-(BOOL)shouldShowAlertView;
-(BOOL)isFreePassWd;
-(void)saveSnsPayFreePasswdInfo;
-(id)getSnsPayFreePasswdInfo;
-(void)clearAllData;
-(void)loadData;
-(void)onServiceClearData;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)dealloc;
@end

