/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface FTSStatHelper : MMObject {
}
+(void)failRecvRes:(id)res;
+(void)asyncRecvRes:(id)res;
+(void)syncRecvRes:(id)res;
+(void)startRequestRes:(id)res;
+(void)endRequestJson:(id)json;
+(void)startRequestJson:(id)json;
+(void)finishLoadHtml:(id)html;
+(void)startLoadHtml;
+(void)clean;
@end
