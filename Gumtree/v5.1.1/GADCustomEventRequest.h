/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(BOOL)userHasLocation;
-(long long)userGender;
-(NSDate *)userBirthday;
-(double)userLatitude;
-(double)userLongitude;
-(double)userLocationAccuracyInMeters;
-(NSString *)userLocationDescription;
-(NSArray *)userKeywords;
-(NSDictionary *)additionalParameters;
-(BOOL)isTesting;
@end

