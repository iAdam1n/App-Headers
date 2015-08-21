/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:05 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <ECBCricketApp/ECBCricketApp-Structs.h>
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

