/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLupdates_ChannelDifference.h>

@interface TLUpdates_ChannelDifference$empty : TLupdates_ChannelDifference {

	int _flags;
	int _pts;
	int _timeout;

}

@property (assign,nonatomic) int flags;                //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) int pts;                  //@synthesize pts=_pts - In the implementation block
@property (assign,nonatomic) int timeout;              //@synthesize timeout=_timeout - In the implementation block
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(void)setPts:(int)arg1 ;
-(int)pts;
-(void)setTimeout:(int)arg1 ;
-(int)timeout;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end
