/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PrtlBase.h"

@class NSString;

@interface CGetBottleCountPrtl : PrtlBase {
	NSString* m_nsUsrName;
	unsigned long m_uiTime;
}
@property(assign, nonatomic) unsigned long m_uiTime;
@property(retain, nonatomic) NSString* m_nsUsrName;
-(void).cxx_destruct;
-(BOOL)HandleResp:(void*)resp;
-(void)InitReq:(void*)req;
-(void)dealloc;
-(id)init;
@end

