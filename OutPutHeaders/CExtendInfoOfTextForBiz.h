/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMsgExtendOperation.h"
#import "IMessageWrapForBizExt.h"
#import "NSCopying.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfTextForBiz : XXUnknownSuperclass <IMessageWrapForBizExt, IMsgExtendOperation, NSCopying> {
	CMessageWrap* m_refMessageWrap;
}
@property(assign, nonatomic) CMessageWrap* m_refMessageWrap;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)CreateExtendInfoWithTypeForBiz:(unsigned long)biz retExtendInfo:(id*)info;
-(id)GetDisplayContent;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)init;
@end

