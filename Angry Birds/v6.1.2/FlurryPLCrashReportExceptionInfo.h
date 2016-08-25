/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
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

