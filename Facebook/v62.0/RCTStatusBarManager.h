/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTEventEmitter.h>

@interface RCTStatusBarManager : RCTEventEmitter
+(id)moduleName;
+(id)__rct_export__1021;
+(id)__rct_export__940;
+(id)__rct_export__1142;
+(id)__rct_export__1253;
+(void)load;
-(id)methodQueue;
-(id)supportedEvents;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
-(void)applicationWillChangeStatusBarFrame:(id)arg1 ;
-(void)emitEvent:(id)arg1 forNotification:(id)arg2 ;
-(void)getHeight:(/*^block*/id)arg1 ;
-(void)setHidden:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)startObserving;
-(void)stopObserving;
@end
