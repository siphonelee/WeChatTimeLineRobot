/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"
#import "UINavigationControllerDelegate.h"
#import "IUiUtilExt.h"
#import "CameraScannerViewDelegate.h"

@class NSString;
@protocol NewQRCodeScannerDelegate;

@interface NewQRCodeScanner : MMUIView <UINavigationControllerDelegate, CameraScannerViewDelegate, IUiUtilExt> {
	BOOL oneDMode;
	BOOL decoding;
	BOOL hasInit;
	BOOL _rotateImage;
	CGRect cropRect;
	NSString* _resultData;
	NSString* _resultType;
	char* _sendImage;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _decodeData;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _decodeType;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _decodeCharset;
	QBar* _qbar;
	int scanCodeType;
	id<NewQRCodeScannerDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int scanCodeType;
@property(assign, nonatomic) CGRect cropRect;
@property(retain, nonatomic) NSString* resultType;
@property(retain, nonatomic) NSString* resultData;
@property(assign, nonatomic) __weak id<NewQRCodeScannerDelegate> delegate;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)stopCapture;
-(void)startCapture;
-(void)showScanResult;
-(BOOL)tryScanOnePicture:(id)picture;
-(bool)scanOnePicture:(id)picture;
-(void)notifyResult:(id)result;
-(void)notifyGotBarcode:(id)barcode;
-(id)getStringFromUTF8Bytes:(const char*)utf8Bytes LENGTH:(int)length;
-(BOOL)doScanCode:(char*)code Width:(int)width Height:(int)height;
-(void)captureOutput:(id)output didOutputSampleBuffer:(opaqueCMSampleBuffer*)buffer fromConnection:(id)connection;
-(void)notifyDelegate:(id)delegate;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate CodeType:(int)type;
@end

