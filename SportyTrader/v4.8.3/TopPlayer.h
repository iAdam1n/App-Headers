/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/Player.h>

@interface TopPlayer : Player {

	unsigned short _nbMatchsPlayed;
	unsigned short _value;

}

@property (assign,nonatomic) unsigned short nbMatchsPlayed;              //@synthesize nbMatchsPlayed=_nbMatchsPlayed - In the implementation block
@property (assign,nonatomic) unsigned short value;                       //@synthesize value=_value - In the implementation block
-(void)setNbMatchsPlayed:(unsigned short)arg1 ;
-(unsigned short)nbMatchsPlayed;
-(unsigned short)value;
-(void)setValue:(unsigned short)arg1 ;
@end
