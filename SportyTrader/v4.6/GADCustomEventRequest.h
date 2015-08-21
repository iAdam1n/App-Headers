/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDate, NSString, NSArray, NSDictionary;

@interface GADCustomEventRequest : NSObject {

	BOOL _userHasLocation;
	BOOL _isTesting;
	long long _userGender;
	NSDate* _userBirthday;
	double _userLatitude;
	double _userLongitude;
	double _userLocationAccuracyInMeters;
	NSString* _userLocationDescription;
	NSArray* _userKeywords;
	NSDictionary* _additionalParameters;

}

@property (nonatomic,readonly) long long userGender;                                  //@synthesize userGender=_userGender - In the implementation block
@property (nonatomic,copy,readonly) NSDate * userBirthday;                            //@synthesize userBirthday=_userBirthday - In the implementation block
@property (nonatomic,readonly) BOOL userHasLocation;                                  //@synthesize userHasLocation=_userHasLocation - In the implementation block
@property (nonatomic,readonly) double userLatitude;                                   //@synthesize userLatitude=_userLatitude - In the implementation block
@property (nonatomic,readonly) double userLongitude;                                  //@synthesize userLongitude=_userLongitude - In the implementation block
@property (nonatomic,readonly) double userLocationAccuracyInMeters;                   //@synthesize userLocationAccuracyInMeters=_userLocationAccuracyInMeters - In the implementation block
@property (nonatomic,copy,readonly) NSString * userLocationDescription;               //@synthesize userLocationDescription=_userLocationDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userKeywords;                           //@synthesize userKeywords=_userKeywords - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalParameters;              //@synthesize additionalParameters=_additionalParameters - In the implementation block
@property (nonatomic,readonly) BOOL isTesting;                                        //@synthesize isTesting=_isTesting - In the implementation block
-(id)initWithConnector:(id)arg1 ;
-(long long)userGender;
-(NSDate *)userBirthday;
-(NSArray *)userKeywords;
-(BOOL)userHasLocation;
-(double)userLatitude;
-(double)userLongitude;
-(double)userLocationAccuracyInMeters;
-(NSString *)userLocationDescription;
-(NSDictionary *)additionalParameters;
-(BOOL)isTesting;
@end
