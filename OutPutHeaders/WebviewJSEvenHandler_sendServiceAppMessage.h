/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebviewJSEventHandlerBase.h"
#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSDictionary, CMessageWrap, NSURLConnection, NSString;

@interface WebviewJSEvenHandler_sendServiceAppMessage : WebviewJSEventHandlerBase <NSURLConnectionDelegate> {
	CMessageWrap* m_wrapMsg;
	NSString* m_nsThumbUrl;
	NSURLConnection* _m_connecttion;
	NSDictionary* _m_curExtraData;
	NSMutableData* _m_recData;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableData* m_recData;
@property(retain, nonatomic) NSDictionary* m_curExtraData;
@property(retain, nonatomic) NSURLConnection* m_connecttion;
@property(copy, nonatomic) NSString* m_nsThumbUrl;
@property(retain, nonatomic) CMessageWrap* m_wrapMsg;
-(void).cxx_destruct;
-(void)sendServiceAppMessage:(id)message extraData:(id)data imageData:(id)data3;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)clearCurData;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
@end

