/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMMFacebookMgrExt.h"
#import "PluginContactInfoAssist.h"

@class NSString;

@interface FacebookContactInfoAssist : PluginContactInfoAssist <IMMFacebookMgrExt> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)onUnBindFacebookFinish:(unsigned long)finish;
-(void)onBindFacebookFinish:(unsigned long)finish;
-(void)showBindView;
-(id)getPluginIntro;
-(void)dealloc;
-(void)reloadInstalledTableViewData;
-(id)initWithContact:(id)contact delegate:(id)delegate;
@end

