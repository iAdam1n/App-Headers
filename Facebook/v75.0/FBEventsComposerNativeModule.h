/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTBridgeModule.h>

@protocol FBEventsComposerNativeModuleDelegate;
@class RCTBridge, NSString;

@interface FBEventsComposerNativeModule : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;
	id<FBEventsComposerNativeModuleDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventsComposerNativeModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                                           //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__210;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)setEventTheme:(id)arg1 themeID:(id)arg2 themeURI:(id)arg3 ;
-(void)setDelegate:(id<FBEventsComposerNativeModuleDelegate>)arg1 ;
-(id<FBEventsComposerNativeModuleDelegate>)delegate;
-(RCTBridge *)bridge;
@end
