/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray, MNConversationContact;

@interface FBWebRTCCallLogViewModelGroupedEntry : FBValueObject <NSCopying> {

	unsigned long long _callDirection;
	unsigned long long _callType;
	NSDate* _date;
	NSArray* _callLogEntries;
	MNConversationContact* _otherParticipant;

}

@property (nonatomic,readonly) unsigned long long callDirection;                           //@synthesize callDirection=_callDirection - In the implementation block
@property (nonatomic,readonly) unsigned long long callType;                                //@synthesize callType=_callType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                         //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSArray * callLogEntries;                              //@synthesize callLogEntries=_callLogEntries - In the implementation block
@property (nonatomic,copy,readonly) MNConversationContact * otherParticipant;              //@synthesize otherParticipant=_otherParticipant - In the implementation block
-(unsigned long long)callDirection;
-(MNConversationContact *)otherParticipant;
-(id)initWithCallDirection:(unsigned long long)arg1 callType:(unsigned long long)arg2 date:(id)arg3 callLogEntries:(id)arg4 otherParticipant:(id)arg5 ;
-(NSArray *)callLogEntries;
-(NSDate *)date;
-(unsigned long long)callType;
@end
