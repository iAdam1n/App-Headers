/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBDiodeUnreadThreadViewModel : FBValueObject <NSCopying> {

	BOOL _isCanonicalThread;
	NSArray* _otherParticipants;
	long long _unreadCount;

}

@property (nonatomic,readonly) BOOL isCanonicalThread;                        //@synthesize isCanonicalThread=_isCanonicalThread - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherParticipants;              //@synthesize otherParticipants=_otherParticipants - In the implementation block
@property (nonatomic,readonly) long long unreadCount;                         //@synthesize unreadCount=_unreadCount - In the implementation block
-(NSArray *)otherParticipants;
-(BOOL)isCanonicalThread;
-(id)initWithIsCanonicalThread:(BOOL)arg1 otherParticipants:(id)arg2 unreadCount:(long long)arg3 ;
-(long long)unreadCount;
@end
