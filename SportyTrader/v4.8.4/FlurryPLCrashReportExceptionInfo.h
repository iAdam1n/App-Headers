/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FlurryPLCrashReportExceptionInfo : NSObject {

	NSString* _name;
	NSString* _reason;
	NSArray* _stackFrames;

}

@property (nonatomic,readonly) NSString * exceptionName;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * exceptionReason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSArray * stackFrames;                   //@synthesize stackFrames=_stackFrames - In the implementation block
-(id)initWithExceptionName:(id)arg1 reason:(id)arg2 ;
-(id)initWithExceptionName:(id)arg1 reason:(id)arg2 stackFrames:(id)arg3 ;
-(NSString *)exceptionName;
-(NSString *)exceptionReason;
-(NSArray *)stackFrames;
-(void)dealloc;
@end
