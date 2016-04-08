/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCAddressListViewControllerDelegate.h"
#import "WCAddressInfoViewControllerDelegate.h"
#import "WCBizControlLogic.h"
#import "WCAddressLogicMgrExt.h"

@class JSEvent, WCAddressControlData, WCAddressAuthenticationSturct, NSString;

@interface WCAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCAddressInfoViewControllerDelegate, WCAddressListViewControllerDelegate> {
	JSEvent* m_jsEvent;
	WCAddressControlData* m_data;
	WCAddressAuthenticationSturct* m_oWCAddressAuthenticationStruct;
	NSString* m_nsUserName;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnNotAcceptGetLatestAddress;
-(void)OnAcceptGetLatestAddress;
-(void)OnImportYiXunAddress:(id)address importStatus:(int)status Error:(id)error;
-(void)OnSetRecentlyUsedAddress:(id)address Error:(id)error;
-(void)OnModifyAddress:(id)address Error:(id)error;
-(void)OnDelAddress:(id)address Error:(id)error;
-(void)OnAddAddress:(id)address Error:(id)error;
-(void)OnGetGetAllAddressStageData:(id)data Error:(id)error;
-(void)OnGetAllAddress:(id)address UserName:(id)name NickName:(id)name3 Error:(id)error;
-(BOOL)onError:(id)error;
-(void)AddressImport;
-(void)AddressListDelete:(id)aDelete;
-(void)AddressListEdit:(id)edit;
-(void)AddressListAdd;
-(void)AddressListComplete:(id)complete;
-(void)AddressListBack;
-(void)AddressInfoNext:(id)next;
-(void)AddressInfoCancel;
-(void)startLogic;
-(void)EndWCAddressControlLogic;
-(void)stopLogic;
-(void)stopForceRotationToPortrait;
-(void)startForceRotationToPortrait;
-(void)pause;
-(void)resume;
-(void)stopLoading;
-(void)startLoading;
-(id)getLatestAddress;
-(void)dealloc;
-(id)initWithJSEvent:(id)jsevent AuthenticationStruct:(id)aStruct;
@end

