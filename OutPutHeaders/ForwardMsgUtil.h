/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface ForwardMsgUtil : MMObject {
}
+(id)GenForwardVideoFromMsgWrap:(id)msgWrap NeedSrcInfo:(BOOL)info;
+(id)readerAppMsgFromReaderWrap:(id)readerWrap;
+(id)locMsgFromMsgWrap:(id)msgWrap;
+(id)cardMsgFromMsgWrap:(id)msgWrap;
+(id)emojiMsgFromMsgWrap:(id)msgWrap;
+(id)genForwardAppRecordItemFromMsg:(id)msg;
+(id)appMsgFromMsgWrap:(id)msgWrap;
+(id)imgMsgFromMsgWrap:(id)msgWrap;
+(id)textMsgFromMsgWrap:(id)msgWrap;
+(id)GenForwardMsgFromMsgWrap:(id)msgWrap ToContact:(id)contact NeedSrcInfo:(BOOL)info;
+(id)getContactNickName:(id)name;
+(id)getMsgRealFrom:(id)from;
+(void)ForwardMsg:(id)msg ToContact:(id)contact NeedSrcInfo:(BOOL)info;
+(void)ForwardMsgList:(id)list ToContact:(id)contact NeedSrcInfo:(BOOL)info;
@end

