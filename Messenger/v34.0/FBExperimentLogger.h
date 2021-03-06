/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBAnalytics, FBExperimentCatalog, FBExperimentLoggingRateLimiter;

@interface FBExperimentLogger : NSObject {

	FBAnalytics* _analytics;
	FBExperimentCatalog* _catalog;
	FBExperimentLoggingRateLimiter* _rateLimiter;

}
-(void)logObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 identifier:(id)arg3 date:(id)arg4 extraData:(id)arg5 ;
-(ConfigInfo)_loggingInfo:(id)arg1 group:(id)arg2 ;
-(id)observationDataForExperimentWithContextClass:(Class)arg1 type:(id)arg2 identifier:(id)arg3 date:(id)arg4 extraData:(id)arg5 ;
-(id)initWithAnalytics:(id)arg1 catalog:(id)arg2 ;
-(BOOL)attemptLogObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 identifier:(id)arg3 extraData:(id)arg4 ;
-(id)init;
@end

