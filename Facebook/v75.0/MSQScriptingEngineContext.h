/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQEventDispatcher.h>
#import <Facebook/MSQScriptingContext.h>

@class NSString;

@interface MSQScriptingEngineContext : MQEventDispatcher <MSQScriptingContext>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL supportsScriptEvaluation; 
-(BOOL)supportsScriptEvaluation;
-(void)evaluateScript:(id)arg1 ;
-(void)logMessage:(id)arg1 ;
@end
