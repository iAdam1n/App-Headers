/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNDirectMessageEventsResponse, TFNDirectMessageAddParticipantFailuresResponse;

@interface TFNDirectMessageAddParticipantsResponse : NSObject {

	TFNDirectMessageEventsResponse* _eventsResponse;
	TFNDirectMessageAddParticipantFailuresResponse* _addParticipantFailuresResponse;

}

@property (nonatomic,readonly) TFNDirectMessageEventsResponse * eventsResponse;                                              //@synthesize eventsResponse=_eventsResponse - In the implementation block
@property (nonatomic,readonly) TFNDirectMessageAddParticipantFailuresResponse * addParticipantFailuresResponse;              //@synthesize addParticipantFailuresResponse=_addParticipantFailuresResponse - In the implementation block
-(id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2 ;
-(TFNDirectMessageEventsResponse *)eventsResponse;
-(TFNDirectMessageAddParticipantFailuresResponse *)addParticipantFailuresResponse;
@end

