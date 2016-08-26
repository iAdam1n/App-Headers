/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNEphemeralMessagingBlanketExpirationTimestamp : FBValueObject <NSCopying> {

	unsigned long long _oldestMessageSeen;
	unsigned long long _newestMessageSeen;
	unsigned long long _blanketSetClientTimestamp;

}

@property (nonatomic,readonly) unsigned long long oldestMessageSeen;                      //@synthesize oldestMessageSeen=_oldestMessageSeen - In the implementation block
@property (nonatomic,readonly) unsigned long long newestMessageSeen;                      //@synthesize newestMessageSeen=_newestMessageSeen - In the implementation block
@property (nonatomic,readonly) unsigned long long blanketSetClientTimestamp;              //@synthesize blanketSetClientTimestamp=_blanketSetClientTimestamp - In the implementation block
-(id)initWithOldestMessageSeen:(unsigned long long)arg1 newestMessageSeen:(unsigned long long)arg2 blanketSetClientTimestamp:(unsigned long long)arg3 ;
-(unsigned long long)blanketSetClientTimestamp;
-(unsigned long long)oldestMessageSeen;
-(unsigned long long)newestMessageSeen;
@end
