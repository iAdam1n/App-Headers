/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface HistoryTeam : NSObject {

	long long _teamID;
	NSString* _name;
	NSString* _imageName;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,nonatomic) long long teamID;                  //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * imageName;              //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                  //@synthesize endDate=_endDate - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setTeamID:(long long)arg1 ;
-(long long)teamID;
@end
