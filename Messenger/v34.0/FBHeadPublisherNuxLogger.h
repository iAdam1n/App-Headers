/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FBHeadPublisherNuxLogger : NSObject
+(void)logWithOutcome:(id)arg1 session:(id)arg2 outcome:(id)arg3 cacheNuxResponseOnClient:(BOOL)arg4 ;
+(void)logNuxTapOnClient:(id)arg1 session:(id)arg2 ;
+(void)logNuxIgnoredOnClient:(id)arg1 session:(id)arg2 ;
+(void)logNuxShownOnClient:(id)arg1 session:(id)arg2 ;
+(void)setStateOnClient:(id)arg1 session:(id)arg2 ;
+(BOOL)stateOnClient:(id)arg1 session:(id)arg2 ;
+(void)clearStateOnClient:(id)arg1 session:(id)arg2 ;
+(void)logWithHeadPublisherNuxStepAction:(id)arg1 session:(id)arg2 action:(long long)arg3 cacheNuxResponseOnClient:(BOOL)arg4 ;
+(BOOL)fetchNuxOutcomeStateOnClient:(id)arg1 session:(id)arg2 outcome:(id)arg3 ;
+(void)clearNuxOutcomeStateOnClient:(id)arg1 session:(id)arg2 outcome:(id)arg3 ;
@end

