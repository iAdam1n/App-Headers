/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber, NSSet, ECBCareerStats;

@interface ECBPlayer : NSManagedObject

@property (nonatomic,retain) NSString * battingStyle; 
@property (nonatomic,retain) NSString * biography; 
@property (nonatomic,retain) NSString * birthLocation; 
@property (nonatomic,retain) NSString * born; 
@property (nonatomic,retain) NSString * bowlingStyle; 
@property (nonatomic,retain) NSString * country; 
@property (nonatomic,retain) NSString * county; 
@property (nonatomic,retain) NSDate * died; 
@property (nonatomic,retain) NSDate * dob; 
@property (nonatomic,retain) NSString * fieldingPosition; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSString * formattedDescription; 
@property (nonatomic,retain) NSString * fullName; 
@property (nonatomic,retain) NSNumber * hasImage; 
@property (nonatomic,retain) NSNumber * hasStats; 
@property (nonatomic,retain) NSNumber * hiddenInApp; 
@property (nonatomic,retain) NSString * imageApp; 
@property (nonatomic,retain) NSString * imagefromoo; 
@property (nonatomic,retain) NSString * imageName; 
@property (nonatomic,retain) NSString * knownName; 
@property (nonatomic,retain) NSDate * lastModified; 
@property (nonatomic,retain) NSDate * lastModifiedCondensed; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) NSDate * lastUpdate; 
@property (nonatomic,retain) NSNumber * legacyProfile; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * odiDebut; 
@property (nonatomic,retain) NSString * other; 
@property (nonatomic,retain) NSString * otherTeams; 
@property (nonatomic,retain) NSNumber * paId; 
@property (nonatomic,retain) NSString * playerDescription; 
@property (nonatomic,retain) NSNumber * playerId; 
@property (nonatomic,retain) NSString * position; 
@property (nonatomic,retain) NSString * previousTeams; 
@property (nonatomic,retain) NSNumber * showImage; 
@property (nonatomic,retain) NSString * sightCategory; 
@property (nonatomic,retain) NSString * t20Debut; 
@property (nonatomic,retain) NSNumber * teamId; 
@property (nonatomic,retain) NSString * testDebut; 
@property (nonatomic,retain) NSSet * awayTeamMatches; 
@property (nonatomic,retain) NSSet * batmanMatchEvents; 
@property (nonatomic,retain) NSSet * batsmanInnings; 
@property (nonatomic,retain) NSSet * bowledBatsmanInnings; 
@property (nonatomic,retain) NSSet * bowlerInnings; 
@property (nonatomic,retain) NSSet * bowlerMatchEvents; 
@property (nonatomic,retain) NSSet * caughtBatsmanInnings; 
@property (nonatomic,retain) NSSet * dismissedMatchEvents; 
@property (nonatomic,retain) NSSet * fallOfWickets; 
@property (nonatomic,retain) NSSet * fielder1MatchEvents; 
@property (nonatomic,retain) NSSet * fielder2MatchEvents; 
@property (nonatomic,retain) NSSet * fielder3MatchEvents; 
@property (nonatomic,retain) NSSet * fielder4MatchEvents; 
@property (nonatomic,retain) NSSet * homeTeamMatches; 
@property (nonatomic,retain) NSSet * nsBatsmanMatchEvents; 
@property (nonatomic,retain) ECBCareerStats * odiCareerStats; 
@property (nonatomic,retain) NSSet * retirements; 
@property (nonatomic,retain) NSSet * squads; 
@property (nonatomic,retain) NSSet * teams; 
@property (nonatomic,retain) ECBCareerStats * testCareerStats; 
@property (nonatomic,retain) ECBCareerStats * twenty20CareerStats; 
@property (nonatomic,retain) NSSet * manOfTheMatches; 
@property (nonatomic,retain) NSSet * manOfTheMatches2; 
@property (nonatomic,retain) NSSet * manOfTheSeries; 
@property (nonatomic,retain) NSSet * manOfTheSeries2; 
-(BOOL)updateFromDictionary:(id)arg1 ;
-(id)careerStatsForSeries:(unsigned long long)arg1 ;
-(BOOL)updateFromCondensedDictionary:(id)arg1 ;
-(void)updatePlayerWithCareerStats:(id)arg1 forSeries:(unsigned long long)arg2 ;
-(id)abbreviatedName;
@end

