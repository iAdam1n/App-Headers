/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBServerTrace : NSObject {

	BOOL _sampled;
	BOOL _chosenToBeSampledPostCreation;
	int _samplingRate;
	NSString* _serverTraceID;
	NSString* _traceDescription;
	unsigned long long _traceThreshold;

}

@property (nonatomic,copy,readonly) NSString * serverTraceID;                  //@synthesize serverTraceID=_serverTraceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * traceDescription;               //@synthesize traceDescription=_traceDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long traceThreshold;              //@synthesize traceThreshold=_traceThreshold - In the implementation block
@property (nonatomic,readonly) BOOL sampled;                                   //@synthesize sampled=_sampled - In the implementation block
@property (nonatomic,readonly) int samplingRate;                               //@synthesize samplingRate=_samplingRate - In the implementation block
@property (assign,nonatomic) BOOL chosenToBeSampledPostCreation;               //@synthesize chosenToBeSampledPostCreation=_chosenToBeSampledPostCreation - In the implementation block
-(id)initWithServerTraceID:(id)arg1 description:(id)arg2 threshold:(unsigned long long)arg3 sampled:(BOOL)arg4 samplingRate:(int)arg5 ;
-(NSString *)serverTraceID;
-(NSString *)traceDescription;
-(unsigned long long)traceThreshold;
-(BOOL)sampled;
-(int)samplingRate;
-(BOOL)chosenToBeSampledPostCreation;
-(void)setChosenToBeSampledPostCreation:(BOOL)arg1 ;
@end

