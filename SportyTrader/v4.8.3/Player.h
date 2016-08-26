/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface Player : NSObject {

	long long _playerID;
	NSString* _name;
	NSString* _portraitImageName;

}

@property (assign,nonatomic) long long playerID;                        //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * portraitImageName;              //@synthesize portraitImageName=_portraitImageName - In the implementation block
-(void)setPortraitImageName:(NSString *)arg1 ;
-(NSString *)portraitImageName;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)playerID;
-(void)setPlayerID:(long long)arg1 ;
@end
