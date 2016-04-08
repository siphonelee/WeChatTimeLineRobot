/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "MMService.h"

@class NSDateFormatter, NSString;

@interface PushSystemMsgMgr : MMService <MessageObserverDelegate, MMService> {
	unsigned long m_retryCount;
	NSDateFormatter* m_dateFormatter;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)dealloc;
-(id)init;
-(void)CheckMsg;
-(void)initMessage:(unsigned long)message;
-(void)testParseXml;
-(void)initListen;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)RemovePushSoftWare;
-(void)ModPushSoftWare:(unsigned long)ware;
-(void)RemoveSystemMsg;
-(void)ModSystemMsg:(unsigned long)msg;
-(void)internalModeMessage:(unsigned long)message mode:(unsigned long)mode;
-(void)handleNewMessage:(id)message mode:(unsigned long)mode;
-(void)showMessage:(id)message mode:(unsigned long)mode;
-(void)ReportPushSystemMsg:(id)msg modType:(unsigned long)type;
-(void)getImageOfURI:(id)uri startPos:(unsigned long)pos mode:(unsigned long)mode;
-(void)RemoveMessage:(unsigned long)message;
-(id)GetPathOfDownloadingMessageImage:(unsigned long)downloadingMessageImage;
-(id)GetPathOfDownloadingMessage:(unsigned long)downloadingMessage;
-(id)GetPathOfCurrentMessageImage:(unsigned long)currentMessageImage;
-(id)GetPathOfCurrentMessage:(unsigned long)currentMessage;
-(id)parseSystemMsg:(id)msg;
-(id)decodeChild:(XmlReaderNode_t*)child withType:(id)type equals:(id)equals;
-(id)parseDateMsg:(XmlReaderNode_t*)msg;
-(id)parseTextMsg:(XmlReaderNode_t*)msg;
-(unsigned long)decodeAttributeToInteger:(XmlReaderNode_t*)integer key:(const char*)key;
-(unsigned long)decodeToInteger:(XmlReaderNode_t*)integer key:(const char*)key;
-(id)decodeAttributeToString:(XmlReaderNode_t*)string key:(const char*)key;
-(id)decodeToString:(XmlReaderNode_t*)string key:(const char*)key;
@end

