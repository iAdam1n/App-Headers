/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLupdates_ChannelDifference.h>

@class NSArray;

@interface TLUpdates_ChannelDifference$channelDifference : TLupdates_ChannelDifference {

	int _flags;
	int _pts;
	int _timeout;
	NSArray* _n_new_messages;
	NSArray* _other_updates;
	NSArray* _chats;
	NSArray* _users;

}

@property (assign,nonatomic) int flags;                             //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) int pts;                               //@synthesize pts=_pts - In the implementation block
@property (assign,nonatomic) int timeout;                           //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSArray * n_new_messages;              //@synthesize n_new_messages=_n_new_messages - In the implementation block
@property (nonatomic,retain) NSArray * other_updates;               //@synthesize other_updates=_other_updates - In the implementation block
@property (nonatomic,retain) NSArray * chats;                       //@synthesize chats=_chats - In the implementation block
@property (nonatomic,retain) NSArray * users;                       //@synthesize users=_users - In the implementation block
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(void)setPts:(int)arg1 ;
-(void)setChats:(NSArray *)arg1 ;
-(NSArray *)n_new_messages;
-(NSArray *)other_updates;
-(void)setN_new_messages:(NSArray *)arg1 ;
-(void)setOther_updates:(NSArray *)arg1 ;
-(int)pts;
-(void)setTimeout:(int)arg1 ;
-(int)timeout;
-(NSArray *)chats;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end
