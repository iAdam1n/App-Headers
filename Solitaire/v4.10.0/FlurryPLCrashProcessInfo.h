/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSString;

@interface FlurryPLCrashProcessInfo : NSObject {

	int _processID;
	NSString* _processName;
	int _parentProcessID;
	timeval _startTime;
	BOOL _traced;

}

@property (nonatomic,readonly) int processID;                            //@synthesize processID=_processID - In the implementation block
@property (nonatomic,readonly) NSString * processName;                   //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) int parentProcessID;                      //@synthesize parentProcessID=_parentProcessID - In the implementation block
@property (nonatomic,readonly) timeval startTime;                        //@synthesize startTime=_startTime - In the implementation block
@property (getter=isTraced,nonatomic,readonly) BOOL traced;              //@synthesize traced=_traced - In the implementation block
+(id)currentProcessInfo;
-(int)parentProcessID;
-(id)initWithProcessID:(int)arg1 ;
-(void)dealloc;
-(NSString *)processName;
-(timeval)startTime;
-(int)processID;
-(BOOL)isTraced;
@end
