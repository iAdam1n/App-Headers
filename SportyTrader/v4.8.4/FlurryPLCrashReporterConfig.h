/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
