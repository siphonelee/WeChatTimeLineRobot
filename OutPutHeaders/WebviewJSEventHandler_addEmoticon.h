/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "EmoticonWebDownloadMgrExt.h"
#import "WebviewJSEventHandlerBase.h"


@interface WebviewJSEventHandler_addEmoticon : WebviewJSEventHandlerBase <EmoticonWebDownloadMgrExt> {
}
-(void)onDownloadFailedWithUrl:(id)url userData:(id)data errType:(int)type;
-(void)onDownloadFinishedWithUrl:(id)url userData:(id)data;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
-(void)dealloc;
-(id)init;
@end

