/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLCrashReportRegisterInfo : NSObject {

	NSString* _registerName;
	unsigned long long _registerValue;

}

@property (nonatomic,readonly) NSString * registerName;                       //@synthesize registerName=_registerName - In the implementation block
@property (nonatomic,readonly) unsigned long long registerValue;              //@synthesize registerValue=_registerValue - In the implementation block
-(NSString *)registerName;
-(unsigned long long)registerValue;
-(id)initWithRegisterName:(id)arg1 registerValue:(unsigned long long)arg2 ;
-(void)dealloc;
@end

