/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface Scorer : NSObject {

	NSString* scorerName;
	NSString* teamName;
	unsigned short scoresNumber;

}

@property (nonatomic,retain) NSString * scorerName; 
@property (nonatomic,retain) NSString * teamName; 
@property (assign,nonatomic) unsigned short scoresNumber; 
-(NSString *)teamName;
-(void)setTeamName:(NSString *)arg1 ;
-(NSString *)scorerName;
-(unsigned short)scoresNumber;
-(void)setScorerName:(NSString *)arg1 ;
-(void)setScoresNumber:(unsigned short)arg1 ;
-(id)init;
@end
