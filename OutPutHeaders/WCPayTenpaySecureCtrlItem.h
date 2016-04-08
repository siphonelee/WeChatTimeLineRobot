/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayLogicMgrExt.h"
#import "TenpaySecureCtrlDelegate.h"
#import "WCBaseInfoItem.h"

@class NSString, TenpaySecureCtrl;

@interface WCPayTenpaySecureCtrlItem : WCBaseInfoItem <TenpaySecureCtrlDelegate, WCPayLogicMgrExt> {
	TenpaySecureCtrl* m_textField;
	int m_eEncryptType;
	NSString* m_nsUserCredType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_nsUserCredType;
-(void).cxx_destruct;
-(void)setDefaultValue:(id)value;
-(void)autoRemarkKeyBoradType;
-(void)OnGetTenpaySecureCtrlSalt:(id)salt Date:(id)date Error:(id)error;
-(void)appendString:(id)string;
-(void)setMaxInputLen:(int)len;
-(BOOL)onError:(id)error;
-(void)tenpayCtrlShouldChange:(id)tenpayCtrl;
-(void)tenpayCtrlShouldReturn:(id)tenpayCtrl;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidEndOnExit:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)setSecureTextEntry:(BOOL)entry;
-(void)setEncryptType:(int)type;
-(void)setClearButtonMode:(int)mode;
-(void)setReturnKeyType:(int)type;
-(void)setKeyboardType:(int)type;
-(void)dealloc;
-(id)initWithTitle:(id)title tip:(id)tip key:(id)key;
-(void)onEndEditor;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(void)initView:(CGRect)view;
-(void)startGetSalt;
-(void)setEnable:(BOOL)enable;
-(id)getValue;
-(id)getValueWithEncryptType:(int)encryptType;
-(void)setKeyboardUseID:(BOOL)anId;
-(void)setFormatBankCard;
-(BOOL)isUserIDNum:(unsigned long)num;
-(BOOL)isBankCardNum;
-(BOOL)isPhoneNum;
-(int)getTextLength;
@end

