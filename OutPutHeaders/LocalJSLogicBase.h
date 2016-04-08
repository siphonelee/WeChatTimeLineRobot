/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class UIWebView, NSMutableArray;

@interface LocalJSLogicBase : MMObject {
	NSMutableArray* _authApiList;
	UIWebView* _webView;
}
-(void).cxx_destruct;
-(void)functionCall:(id)call withParams:(id)params withCallbackID:(id)callbackID;
-(void)reSetWebView:(id)view;
-(void)addAuthApiList:(id)list;
-(id)sendJSCBEventToJSBridge:(id)jsbridge withCallBackID:(id)callBackID;
-(void)handleJSApiDispatchMessage:(id)message;
-(id)sendEventToJSBridge:(id)jsbridge params:(id)params;
-(id)sendMessageToJSBridge:(id)jsbridge;
-(void)injectPluginJS;
-(void)injectWeixinJSBridge;
-(BOOL)tryInjectWeixinJSBridge:(id)bridge;
-(BOOL)isJSBridgeLoaded;
-(id)initWithWebView:(id)webView;
@end

