/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FlurryPLCrashReporterConfig : NSObject {

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

