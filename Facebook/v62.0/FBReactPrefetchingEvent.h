/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, FBReactPersistedQueriesNetworkResponse;

@interface FBReactPrefetchingEvent : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSDictionary* _startPrefetchingEvent_config;
	NSDictionary* _startPrefetchingEvent_userParamValues;
	NSString* _dataFetchedEvent_queryName;
	FBReactPersistedQueriesNetworkResponse* _dataFetchedEvent_response;

}
+(id)startPrefetchingEventWithConfig:(id)arg1 userParamValues:(id)arg2 ;
+(id)dataFetchedEventWithQueryName:(id)arg1 response:(id)arg2 ;
+(id)relayRequestEvent;
-(void)matchStartPrefetchingEvent:(/*^block*/id)arg1 dataFetchedEvent:(/*^block*/id)arg2 relayRequestEvent:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
