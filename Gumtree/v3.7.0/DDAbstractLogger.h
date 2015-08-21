/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/DDLogger.h>

@protocol DDLogFormatter, OS_dispatch_queue;
@class NSObject, NSString;

@interface DDAbstractLogger : NSObject <DDLogger> {

	id<DDLogFormatter> formatter;
	NSObject*<OS_dispatch_queue> loggerQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)logFormatter;
-(void)setLogFormatter:(id)arg1 ;
-(id)loggerQueue;
-(id)loggerName;
-(BOOL)isOnInternalLoggerQueue;
-(BOOL)isOnGlobalLoggingQueue;
-(void)dealloc;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end

