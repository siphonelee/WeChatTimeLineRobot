/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;

@interface COpenBottleWrap : XXUnknownSuperclass {
	unsigned long m_uiLocalID;
	NSString* m_nsBottleInfo;
	unsigned long m_uiMsgType;
	unsigned long m_uiThumbStartPos;
	unsigned long m_uiThumbTotalLen;
	NSData* m_dtThumb;
	unsigned long m_uiContentStartPos;
	unsigned long m_uiContentTotalLen;
	NSData* m_dtContent;
	unsigned long m_uiVoiceTime;
}
@property(assign, nonatomic) unsigned long m_uiVoiceTime;
@property(retain, nonatomic) NSData* m_dtContent;
@property(assign, nonatomic) unsigned long m_uiContentTotalLen;
@property(assign, nonatomic) unsigned long m_uiContentStartPos;
@property(retain, nonatomic) NSData* m_dtThumb;
@property(assign, nonatomic) unsigned long m_uiThumbTotalLen;
@property(assign, nonatomic) unsigned long m_uiThumbStartPos;
@property(assign, nonatomic) unsigned long m_uiMsgType;
@property(retain, nonatomic) NSString* m_nsBottleInfo;
@property(assign, nonatomic) unsigned long m_uiLocalID;
-(void).cxx_destruct;
-(id)description;
-(void)dealloc;
-(id)init;
@end

