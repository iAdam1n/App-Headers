/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
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
