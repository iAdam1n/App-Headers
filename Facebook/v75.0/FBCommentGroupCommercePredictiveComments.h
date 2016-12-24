/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTBridgeModule.h>
#import <Facebook/FBCommentComposerBannerController.h>

@class NSString, RCTBridge;

@interface FBCommentGroupCommercePredictiveComments : NSObject <RCTBridgeModule, FBCommentComposerBannerController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (nonatomic,readonly) BOOL sendCommentWithBannerController; 
+(id)moduleName;
+(id)__rct_export__830;
+(void)load;
-(id)initWithBannerHost:(id)arg1 bannerDelegate:(id)arg2 scrollDelegate:(id)arg3 session:(id)arg4 story:(id)arg5 ;
-(BOOL)sendCommentWithBannerController;
-(void)predictiveCommentSelected:(id)arg1 reactTag:(id)arg2 ;
-(id)sendButtonTitle;
-(void)sendComment:(id)arg1 story:(id)arg2 recipient:(id)arg3 ;
@end
