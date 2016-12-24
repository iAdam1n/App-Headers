/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/RCTBridgeModule.h>

@class NSMapTable, RCTBridge, NSString;

@interface RCTActionSheetManager : NSObject <UIActionSheetDelegate, RCTBridgeModule> {

	NSMapTable* _callbacks;
	RCTBridge* _bridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__540;
+(id)__rct_export__1241;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(CGRect)sourceRectInView:(id)arg1 anchorViewTag:(id)arg2 ;
-(void)showActionSheetWithOptions:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)showShareActionSheetWithOptions:(id)arg1 failureCallback:(/*^block*/id)arg2 successCallback:(/*^block*/id)arg3 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(RCTBridge *)bridge;
@end
