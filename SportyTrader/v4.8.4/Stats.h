/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface Stats : NSObject {

	NSString* label;
	unsigned short team1Value;
	unsigned short team2Value;

}

@property (nonatomic,retain) NSString * label; 
@property (assign,nonatomic) unsigned short team1Value; 
@property (assign,nonatomic) unsigned short team2Value; 
-(unsigned short)team1Value;
-(void)setTeam1Value:(unsigned short)arg1 ;
-(unsigned short)team2Value;
-(void)setTeam2Value:(unsigned short)arg1 ;
-(id)init;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end
