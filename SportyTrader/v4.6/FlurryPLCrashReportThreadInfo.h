/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray;

@interface FlurryPLCrashReportThreadInfo : NSObject {

	long long _threadNumber;
	NSArray* _stackFrames;
	BOOL _crashed;
	NSArray* _registers;

}

@property (nonatomic,readonly) long long threadNumber;              //@synthesize threadNumber=_threadNumber - In the implementation block
@property (nonatomic,readonly) NSArray * stackFrames;               //@synthesize stackFrames=_stackFrames - In the implementation block
@property (nonatomic,readonly) BOOL crashed;                        //@synthesize crashed=_crashed - In the implementation block
@property (nonatomic,readonly) NSArray * registers;                 //@synthesize registers=_registers - In the implementation block
-(BOOL)crashed;
-(id)initWithThreadNumber:(long long)arg1 stackFrames:(id)arg2 crashed:(BOOL)arg3 registers:(id)arg4 ;
-(long long)threadNumber;
-(NSArray *)stackFrames;
-(NSArray *)registers;
-(void)dealloc;
@end
