/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface BITPLCrashReportMachExceptionInfo : NSObject {

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
