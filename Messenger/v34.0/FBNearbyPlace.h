/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCoding.h>
#import <Messenger/NSCopying.h>
#import <Messenger/FBDescribing.h>

@class NSString, NSNumber, NSURL, FBMemTaggableActivity, FBMemEvent;

@interface FBNearbyPlace : NSObject <NSCoding, NSCopying, FBDescribing> {

	BOOL _isCrop;
	NSString* _name;
	NSString* _shortName;
	NSString* _locationSubtext;
	NSString* _visitorsSubtext;
	NSString* _category;
	NSNumber* _ratingValue;
	long long _fanCount;
	NSString* _targetId;
	NSURL* _photoURL;
	unsigned long long _targetType;
	NSString* _taggableActivityIdSuggestionMechanism;
	FBMemTaggableActivity* _taggableActivity;
	FBMemEvent* _event;
	NSString* _homeCheckinCityId;
	NSString* _checkinSubtext;
	NSString* _eventSubtext;
	NSURL* _categoryIconURL;
	NSString* _searchSubtext;
	CGPoint _coordinates;
	CGRect _cropRect;

}

@property (nonatomic,copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * shortName;                                          //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy) NSString * locationSubtext;                                    //@synthesize locationSubtext=_locationSubtext - In the implementation block
@property (nonatomic,copy) NSString * visitorsSubtext;                                    //@synthesize visitorsSubtext=_visitorsSubtext - In the implementation block
@property (nonatomic,copy) NSString * category;                                           //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSNumber * ratingValue;                                        //@synthesize ratingValue=_ratingValue - In the implementation block
@property (assign,nonatomic) long long fanCount;                                          //@synthesize fanCount=_fanCount - In the implementation block
@property (nonatomic,copy) NSString * targetId;                                           //@synthesize targetId=_targetId - In the implementation block
@property (nonatomic,copy) NSURL * photoURL;                                              //@synthesize photoURL=_photoURL - In the implementation block
@property (assign,nonatomic) BOOL isCrop;                                                 //@synthesize isCrop=_isCrop - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                             //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) unsigned long long targetType;                               //@synthesize targetType=_targetType - In the implementation block
@property (assign,nonatomic) CGPoint coordinates;                                         //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,copy) NSString * taggableActivityIdSuggestionMechanism;              //@synthesize taggableActivityIdSuggestionMechanism=_taggableActivityIdSuggestionMechanism - In the implementation block
@property (nonatomic,retain) FBMemTaggableActivity * taggableActivity;                    //@synthesize taggableActivity=_taggableActivity - In the implementation block
@property (nonatomic,retain) FBMemEvent * event;                                          //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) NSString * homeCheckinCityId;                                  //@synthesize homeCheckinCityId=_homeCheckinCityId - In the implementation block
@property (nonatomic,copy) NSString * checkinSubtext;                                     //@synthesize checkinSubtext=_checkinSubtext - In the implementation block
@property (nonatomic,copy) NSString * eventSubtext;                                       //@synthesize eventSubtext=_eventSubtext - In the implementation block
@property (nonatomic,copy) NSURL * categoryIconURL;                                       //@synthesize categoryIconURL=_categoryIconURL - In the implementation block
@property (nonatomic,copy) NSString * searchSubtext;                                      //@synthesize searchSubtext=_searchSubtext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMemTaggableActivity *)taggableActivity;
-(void)setTaggableActivity:(FBMemTaggableActivity *)arg1 ;
-(void)setCoordinates:(CGPoint)arg1 ;
-(NSURL *)photoURL;
-(void)setPhotoURL:(NSURL *)arg1 ;
-(void)setShortName:(NSString *)arg1 ;
-(void)setTargetId:(NSString *)arg1 ;
-(void)setIsCrop:(BOOL)arg1 ;
-(void)setLocationSubtext:(NSString *)arg1 ;
-(void)setVisitorsSubtext:(NSString *)arg1 ;
-(void)setFanCount:(long long)arg1 ;
-(void)setTaggableActivityIdSuggestionMechanism:(NSString *)arg1 ;
-(void)setHomeCheckinCityId:(NSString *)arg1 ;
-(void)setCheckinSubtext:(NSString *)arg1 ;
-(void)setEventSubtext:(NSString *)arg1 ;
-(void)setCategoryIconURL:(NSURL *)arg1 ;
-(void)setSearchSubtext:(NSString *)arg1 ;
-(NSString *)targetId;
-(BOOL)isCrop;
-(NSString *)locationSubtext;
-(NSString *)visitorsSubtext;
-(long long)fanCount;
-(NSString *)taggableActivityIdSuggestionMechanism;
-(NSString *)homeCheckinCityId;
-(NSString *)checkinSubtext;
-(NSString *)eventSubtext;
-(NSURL *)categoryIconURL;
-(NSString *)searchSubtext;
-(id)initWithName:(id)arg1 shortName:(id)arg2 locationSubtext:(id)arg3 visitorsSubtext:(id)arg4 category:(id)arg5 ratingValue:(id)arg6 fanCount:(long long)arg7 targetId:(id)arg8 photoURL:(id)arg9 isCrop:(BOOL)arg10 cropRect:(CGRect)arg11 targetType:(unsigned long long)arg12 coordinates:(CGPoint)arg13 taggableActivityIdSuggestionMechanism:(id)arg14 taggableActivity:(id)arg15 event:(id)arg16 homeCheckinCityId:(id)arg17 checkinSubtext:(id)arg18 eventSubtext:(id)arg19 categoryIconURL:(id)arg20 searchSubtext:(id)arg21 ;
-(id)attributedDescription;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEvent:(FBMemEvent *)arg1 ;
-(FBMemEvent *)event;
-(CGPoint)coordinates;
-(NSString *)shortName;
-(NSNumber *)ratingValue;
-(void)setTargetType:(unsigned long long)arg1 ;
-(void)setRatingValue:(NSNumber *)arg1 ;
-(unsigned long long)targetType;
@end
