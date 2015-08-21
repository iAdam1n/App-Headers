/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray;

@interface PLCrashReportThreadInfo : NSObject {

	long long _threadNumber;
	NSArray* _stackFrames;
	BOOL _crashed;
	NSArray* _registers;

}

@property (nonatomic,readonly) long long threadNumber;              //@synthesize threadNumber=_threadNumber - In the implementation block
@property (nonatomic,readonly) NSArray * stackFrames;               //@synthesize stackFrames=_stackFrames - In the implementation block
@property (nonatomic,readonly) BOOL crashed;                        //@synthesize crashed=_crashed - In the implementation block
@property (nonatomic,readonly) NSArray * registers;                 //@synthesize registers=_registers - In the implementation block
-(id)initWithThreadNumber:(long long)arg1 stackFrames:(id)arg2 crashed:(BOOL)arg3 registers:(id)arg4 ;
-(long long)threadNumber;
-(NSArray *)stackFrames;
-(BOOL)crashed;
-(NSArray *)registers;
-(void)dealloc;
@end

