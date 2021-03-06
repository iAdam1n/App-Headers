/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <ECBCricketApp/ECBCricketApp-Structs.h>
@class NSOperationQueue, NSDateFormatter, NSCalendar, NSMutableDictionary, NSDictionary, NSString, NSArray, ECBMatch, OTHERCache;

@interface ECBUtils : NSObject {

	NSOperationQueue* imageDownloadQueue;
	NSDateFormatter* dayDateFormatter;
	NSDateFormatter* shortDateFormatter;
	NSCalendar* calendar;
	NSDateFormatter* formatter;
	NSMutableDictionary* dateFormatters;
	NSDictionary* _config;
	NSString* _userAgentString;
	NSArray* _sortedCompetitionCategories;
	NSArray* _sortedTeamCategories;
	NSArray* _more;
	NSDictionary* _teamsAndCompetitions;
	NSDictionary* _selectedTeamsAndCompetitions;
	long long _powerManagementLevel;
	ECBMatch* _currentMatch;
	OTHERCache* _applicationCache;

}

@property (nonatomic,readonly) NSString * userAgentString;                             //@synthesize userAgentString=_userAgentString - In the implementation block
@property (nonatomic,readonly) long long powerManagementLevel;                         //@synthesize powerManagementLevel=_powerManagementLevel - In the implementation block
@property (nonatomic,retain) ECBMatch * currentMatch;                                  //@synthesize currentMatch=_currentMatch - In the implementation block
@property (nonatomic,readonly) NSArray * videoCategories; 
@property (nonatomic,readonly) NSArray * pushTypes; 
@property (nonatomic,readonly) NSArray * more;                                         //@synthesize more=_more - In the implementation block
@property (nonatomic,readonly) NSArray * teams; 
@property (nonatomic,readonly) NSArray * competitions; 
@property (nonatomic,readonly) NSArray * promoCompetitions; 
@property (nonatomic,readonly) NSArray * competitionTypeIds; 
@property (nonatomic,retain) NSArray * selectedTeams; 
@property (nonatomic,retain) NSArray * selectedCompetitions; 
@property (nonatomic,retain) NSArray * selectedPromoCompetitions; 
@property (nonatomic,retain) NSArray * selectedCompetitionTypeIds; 
@property (nonatomic,readonly) OTHERCache * applicationCache;                          //@synthesize applicationCache=_applicationCache - In the implementation block
@property (nonatomic,retain) NSDictionary * config;                                    //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSDictionary * baseURLs; 
@property (nonatomic,readonly) NSDictionary * pollingIntervals; 
@property (nonatomic,readonly) NSArray * sortedCompetitionCategories;                  //@synthesize sortedCompetitionCategories=_sortedCompetitionCategories - In the implementation block
@property (nonatomic,readonly) NSArray * sortedTeamCategories;                         //@synthesize sortedTeamCategories=_sortedTeamCategories - In the implementation block
@property (nonatomic,readonly) NSDictionary * teamsAndCompetitions;                    //@synthesize teamsAndCompetitions=_teamsAndCompetitions - In the implementation block
@property (nonatomic,retain) NSDictionary * selectedTeamsAndCompetitions;              //@synthesize selectedTeamsAndCompetitions=_selectedTeamsAndCompetitions - In the implementation block
+(id)sharedUtils;
+(id)dateFromMillisecondsTimestamp:(id)arg1 ;
+(id)lightBlueColor;
+(id)lightGrayTextColor;
+(id)midGrayColor;
+(id)formattedStatus:(id)arg1 ;
+(id)applicationDocumentsDirectoryURL;
+(id)applicationGroupIdentifier;
+(id)applicationGroupContainerURL;
+(BOOL)isMatchLive:(id)arg1 ;
+(id)applicationCachesDirectoryURL;
+(id)tealColor;
+(id)violetColor;
+(id)darkOrangeColor;
+(id)grayColor;
+(id)lightGrayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)orangeColor;
+(id)purpleColor;
+(double)cornerRadius;
+(id)preferredFontForTextStyle:(id)arg1 ;
+(id)userDefaults;
+(id)grayTextColor;
-(id)feedURLForRestEndpoint:(id)arg1 path:(id)arg2 ;
-(long long)powerManagementLevel;
-(id)pollingIntervalForClass:(id)arg1 powerManagementLevel:(long long)arg2 ;
-(id)tintImage:(id)arg1 withColor:(id)arg2 ;
-(id)stringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3 ;
-(void)imageWithFilename:(id)arg1 width:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)imageWithColor:(id)arg1 andSize:(CGSize)arg2 ;
-(id)imageURL:(id)arg1 width:(double)arg2 ;
-(void)imageWithFilename:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)imageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)sortOrderForTeamCategory:(id)arg1 ;
-(id)timeFromFormattedDate:(id)arg1 ;
-(NSArray *)competitions;
-(NSArray *)pushTypes;
-(id)staticURLForPath:(id)arg1 ;
-(void)updateConfig;
-(void)updateMore;
-(void)updateTeamsAndCompetitions;
-(void)updateSortOrders;
-(id)dateByRemovingTime:(id)arg1 ;
-(NSArray *)videoCategories;
-(void)updatePowerManagementLevel;
-(OTHERCache *)applicationCache;
-(void)updateFileAtURL:(id)arg1 destination:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDictionary *)baseURLs;
-(NSDictionary *)pollingIntervals;
-(NSDictionary *)teamsAndCompetitions;
-(NSDictionary *)selectedTeamsAndCompetitions;
-(void)setSelectedTeamsAndCompetitions:(NSDictionary *)arg1 ;
-(id)lastModifiedDateStringForURL:(id)arg1 ;
-(void)setLastModifiedDateString:(id)arg1 forURL:(id)arg2 ;
-(id)timestampForStoredSortOrders;
-(NSArray *)sortedCompetitionCategories;
-(NSArray *)sortedTeamCategories;
-(id)sortOrderForCompetitionCategory:(id)arg1 ;
-(void)setPowerManagementLevel:(long long)arg1 ;
-(id)maskImage:(id)arg1 withMask:(id)arg2 ;
-(NSArray *)promoCompetitions;
-(NSArray *)competitionTypeIds;
-(NSArray *)selectedTeams;
-(NSArray *)selectedCompetitions;
-(NSArray *)selectedPromoCompetitions;
-(NSArray *)selectedCompetitionTypeIds;
-(void)setSelectedTeams:(NSArray *)arg1 ;
-(void)setSelectedCompetitions:(NSArray *)arg1 ;
-(void)setSelectedPromoCompetitions:(NSArray *)arg1 ;
-(void)setSelectedCompetitionTypeIds:(NSArray *)arg1 ;
-(void)updateCompetitionsWithCategorySortOrders;
-(void)updateTeamsWithCategorySortOrders;
-(id)relativeDateStringFromDate:(id)arg1 ;
-(BOOL)addSkipBackupAttributeToItemAtURL:(id)arg1 ;
-(ECBMatch *)currentMatch;
-(void)setCurrentMatch:(ECBMatch *)arg1 ;
-(void)handleNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(NSDictionary *)config;
-(void)setConfig:(NSDictionary *)arg1 ;
-(NSString *)userAgentString;
-(NSArray *)more;
-(NSArray *)teams;
@end

