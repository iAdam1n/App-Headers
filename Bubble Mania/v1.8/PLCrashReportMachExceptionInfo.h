/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLCrashReportMachExceptionInfo : NSObject {

	unsigned long long _type;
	NSArray* _codes;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * codes;                      //@synthesize codes=_codes - In the implementation block
-(id)initWithType:(unsigned long long)arg1 codes:(id)arg2 ;
-(NSArray *)codes;
-(void)dealloc;
-(unsigned long long)type;
@end
