/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAppBridgeScheme.h>

@class NSString, NSURL;

@interface FBWebAppBridgeScheme : FBAppBridgeScheme {

	NSString* _method;
	NSURL* _URL;

}
+(id)bridgeSchemeForFBAppForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBAppForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForLike;
+(id)schemePrefix;
-(id)URLForMethod:(id)arg1 queryParams:(id)arg2 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 ;
-(void)dealloc;
@end
