/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BITPLCrashReportSignalInfo : NSObject {

	NSString* _name;
	NSString* _code;
	unsigned long long _address;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * code;                         //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) unsigned long long address;              //@synthesize address=_address - In the implementation block
-(id)initWithSignalName:(id)arg1 code:(id)arg2 address:(unsigned long long)arg3 ;
-(void)dealloc;
-(NSString *)name;
-(NSString *)code;
-(unsigned long long)address;
@end

