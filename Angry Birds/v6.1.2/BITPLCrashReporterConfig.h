/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BITPLCrashReporterConfig : NSObject {

	unsigned long long _signalHandlerType;
	unsigned long long _symbolicationStrategy;

}

@property (nonatomic,readonly) unsigned long long signalHandlerType;                  //@synthesize signalHandlerType=_signalHandlerType - In the implementation block
@property (nonatomic,readonly) unsigned long long symbolicationStrategy;              //@synthesize symbolicationStrategy=_symbolicationStrategy - In the implementation block
+(id)defaultConfiguration;
-(id)initWithSignalHandlerType:(unsigned long long)arg1 symbolicationStrategy:(unsigned long long)arg2 ;
-(unsigned long long)symbolicationStrategy;
-(unsigned long long)signalHandlerType;
-(id)init;
@end

