/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:21 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface Highlight : NSObject {

	unsigned short type;
	NSString* mainLabel;
	unsigned short tier;
	unsigned short timeOfPlay;
	unsigned short team;
	NSString* _secondaryLabel;

}

@property (assign,nonatomic) unsigned short type; 
@property (nonatomic,retain) NSString * mainLabel; 
@property (nonatomic,retain) NSString * secondaryLabel;              //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (assign,nonatomic) unsigned short tier; 
@property (assign,nonatomic) unsigned short timeOfPlay; 
@property (assign,nonatomic) unsigned short team; 
-(unsigned short)timeOfPlay;
-(void)setTimeOfPlay:(unsigned short)arg1 ;
-(void)setTeam:(unsigned short)arg1 ;
-(id)init;
-(void)setType:(unsigned short)arg1 ;
-(unsigned short)type;
-(NSString *)secondaryLabel;
-(void)setSecondaryLabel:(NSString *)arg1 ;
-(unsigned short)tier;
-(void)setTier:(unsigned short)arg1 ;
-(unsigned short)team;
-(NSString *)mainLabel;
-(void)setMainLabel:(NSString *)arg1 ;
@end
