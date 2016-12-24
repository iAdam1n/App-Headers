/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface ECBScorecardExtras : NSObject {

	NSNumber* _byes;
	NSNumber* _legByes;
	NSNumber* _noBalls;
	NSNumber* _wides;
	NSNumber* _penalties;
	NSNumber* _totalExtras;

}

@property (nonatomic,retain) NSNumber * byes;                     //@synthesize byes=_byes - In the implementation block
@property (nonatomic,retain) NSNumber * legByes;                  //@synthesize legByes=_legByes - In the implementation block
@property (nonatomic,retain) NSNumber * noBalls;                  //@synthesize noBalls=_noBalls - In the implementation block
@property (nonatomic,retain) NSNumber * wides;                    //@synthesize wides=_wides - In the implementation block
@property (nonatomic,retain) NSNumber * penalties;                //@synthesize penalties=_penalties - In the implementation block
@property (nonatomic,retain) NSNumber * totalExtras;              //@synthesize totalExtras=_totalExtras - In the implementation block
-(NSNumber *)byes;
-(NSNumber *)legByes;
-(NSNumber *)wides;
-(NSNumber *)noBalls;
-(NSNumber *)penalties;
-(void)setPenalties:(NSNumber *)arg1 ;
-(void)setTotalExtras:(NSNumber *)arg1 ;
-(id)initWithInnings:(id)arg1 ;
-(NSNumber *)totalExtras;
-(void)setByes:(NSNumber *)arg1 ;
-(void)setLegByes:(NSNumber *)arg1 ;
-(void)setNoBalls:(NSNumber *)arg1 ;
-(void)setWides:(NSNumber *)arg1 ;
@end
