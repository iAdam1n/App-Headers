/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol DDLogger, OS_dispatch_queue;
@class NSObject;

@interface DDLoggerNode : NSObject {

	id<DDLogger> logger;
	NSObject*<OS_dispatch_queue> loggerQueue;
	int logLevel;

}

@property (nonatomic,readonly) int logLevel; 
+(id)nodeWithLogger:(id)arg1 loggerQueue:(id)arg2 logLevel:(int)arg3 ;
-(id)initWithLogger:(id)arg1 loggerQueue:(id)arg2 logLevel:(int)arg3 ;
-(void)dealloc;
-(int)logLevel;
@end

