/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BITPLCrashReportProcessorInfo : NSObject {

	int _typeEncoding;
	unsigned long long _type;
	unsigned long long _subtype;

}

@property (nonatomic,readonly) int typeEncoding;                        //@synthesize typeEncoding=_typeEncoding - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long subtype;              //@synthesize subtype=_subtype - In the implementation block
-(id)initWithTypeEncoding:(int)arg1 type:(unsigned long long)arg2 subtype:(unsigned long long)arg3 ;
-(unsigned long long)type;
-(unsigned long long)subtype;
-(int)typeEncoding;
@end

