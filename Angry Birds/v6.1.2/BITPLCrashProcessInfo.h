/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
@class NSString;

@interface BITPLCrashProcessInfo : NSObject {

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
-(id)initWithProcessID:(int)arg1 ;
-(int)parentProcessID;
-(void)dealloc;
-(NSString *)processName;
-(timeval)startTime;
-(int)processID;
-(BOOL)isTraced;
@end

