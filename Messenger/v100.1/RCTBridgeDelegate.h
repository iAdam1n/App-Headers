/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCTBridgeDelegate <NSObject>
@optional
-(id)fallbackSourceURLForBridge:(id)arg1;
-(id)extraModulesForBridge:(id)arg1;
-(id)whitelistedModulesForBridge:(id)arg1;
-(BOOL)shouldBridgeLoadJavaScriptSynchronously:(id)arg1;
-(BOOL)shouldBridgeInitializeNativeModulesSynchronously:(id)arg1;
-(BOOL)shouldBridgeUseCustomJSC:(id)arg1;
-(void)loadSourceForBridge:(id)arg1 onProgress:(/*^block*/id)arg2 onComplete:(/*^block*/id)arg3;
-(void)loadSourceForBridge:(id)arg1 withBlock:(/*^block*/id)arg2;

@required
-(id)sourceURLForBridge:(id)arg1;

@end
