/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/UAJavaScriptDelegate.h>

@class NSString;

@interface UAActionJSDelegate : NSObject <UAJavaScriptDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callWithData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)objectForEncodedArguments:(id)arg1 ;
-(id)createMetaDataFromCallData:(id)arg1 ;
-(id)decodeActionArgumentsWithData:(id)arg1 basicEncoding:(BOOL)arg2 ;
-(void)runActionWithCallbackID:(id)arg1 data:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)runActionsWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runBasicActionsWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
