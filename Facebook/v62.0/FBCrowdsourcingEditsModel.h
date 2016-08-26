/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoAttachmentProtocol;
#import <Facebook/Facebook-Structs.h>
@class NSMutableDictionary, NSMutableSet, FBUserSession, NSString, FBMemPage, CLLocation, NSArray, NSMutableArray, NSDictionary;

@interface FBCrowdsourcingEditsModel : NSObject {

	NSMutableDictionary* _fieldSections;
	NSMutableSet* _crowdsourceableFields;
	FBUserSession* _session;
	NSString* _placeID;
	FBMemPage* _place;
	CLLocation* _originalLocation;
	CLLocation* _suggestedLocation;
	id<FBPhotoAttachmentProtocol> _suggestedPhotoAttachment;
	CGImageRef _originalImage;
	NSString* _originalName;
	NSString* _suggestedName;
	NSString* _originalPhone;
	NSString* _suggestedPhone;
	NSString* _originalWebsite;
	NSString* _suggestedWebsite;
	NSString* _originalStreet;
	NSString* _suggestedStreet;
	NSString* _originalCity;
	NSString* _suggestedCity;
	NSString* _originalZip;
	NSString* _suggestedZip;
	NSString* _originalCityID;
	NSString* _suggestedCityID;
	NSString* _originalEmail;
	NSString* _suggestedEmail;
	NSArray* _originalCategories;
	NSArray* _suggestedCategories;
	NSArray* _originalWebsites;
	NSMutableArray* _suggestedWebsites;
	NSDictionary* _originalHours;
	NSMutableDictionary* _suggestedHours;
	unsigned long long _suggestedPhoneNumberValueType;
	unsigned long long _originalPhoneNumberValueType;
	unsigned long long _suggestedEmailValueType;
	unsigned long long _originalEmailValueType;
	unsigned long long _suggestedWebsiteValueType;
	unsigned long long _originalWebsiteValueType;
	unsigned long long _suggestedAddressValueType;
	unsigned long long _originalAddressValueType;
	NSString* _originalHoursType;
	NSString* _suggestedHoursType;
	unsigned long long _source;
	unsigned long long _entryPoint;
	unsigned long long _endpoint;

}

@property (nonatomic,readonly) FBUserSession * session;                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeID;                                           //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,retain) FBMemPage * place;                                                   //@synthesize place=_place - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * originalLocation;                                //@synthesize originalLocation=_originalLocation - In the implementation block
@property (nonatomic,copy) CLLocation * suggestedLocation;                                        //@synthesize suggestedLocation=_suggestedLocation - In the implementation block
@property (nonatomic,retain) id<FBPhotoAttachmentProtocol> suggestedPhotoAttachment;              //@synthesize suggestedPhotoAttachment=_suggestedPhotoAttachment - In the implementation block
@property (assign,nonatomic) CGImageRef originalImage;                                            //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalName;                                      //@synthesize originalName=_originalName - In the implementation block
@property (nonatomic,copy) NSString * suggestedName;                                              //@synthesize suggestedName=_suggestedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalPhone;                                     //@synthesize originalPhone=_originalPhone - In the implementation block
@property (nonatomic,copy) NSString * suggestedPhone;                                             //@synthesize suggestedPhone=_suggestedPhone - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalWebsite;                                   //@synthesize originalWebsite=_originalWebsite - In the implementation block
@property (nonatomic,copy) NSString * suggestedWebsite;                                           //@synthesize suggestedWebsite=_suggestedWebsite - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalStreet;                                    //@synthesize originalStreet=_originalStreet - In the implementation block
@property (nonatomic,copy) NSString * suggestedStreet;                                            //@synthesize suggestedStreet=_suggestedStreet - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalCity;                                      //@synthesize originalCity=_originalCity - In the implementation block
@property (nonatomic,copy) NSString * suggestedCity;                                              //@synthesize suggestedCity=_suggestedCity - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalZip;                                       //@synthesize originalZip=_originalZip - In the implementation block
@property (nonatomic,copy) NSString * suggestedZip;                                               //@synthesize suggestedZip=_suggestedZip - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalCityID;                                    //@synthesize originalCityID=_originalCityID - In the implementation block
@property (nonatomic,copy) NSString * suggestedCityID;                                            //@synthesize suggestedCityID=_suggestedCityID - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalEmail;                                     //@synthesize originalEmail=_originalEmail - In the implementation block
@property (nonatomic,copy) NSString * suggestedEmail;                                             //@synthesize suggestedEmail=_suggestedEmail - In the implementation block
@property (nonatomic,copy) NSArray * originalCategories;                                          //@synthesize originalCategories=_originalCategories - In the implementation block
@property (nonatomic,copy) NSArray * suggestedCategories;                                         //@synthesize suggestedCategories=_suggestedCategories - In the implementation block
@property (nonatomic,copy) NSArray * originalWebsites;                                            //@synthesize originalWebsites=_originalWebsites - In the implementation block
@property (nonatomic,copy) NSMutableArray * suggestedWebsites;                                    //@synthesize suggestedWebsites=_suggestedWebsites - In the implementation block
@property (nonatomic,copy) NSDictionary * originalHours;                                          //@synthesize originalHours=_originalHours - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * suggestedHours;                                //@synthesize suggestedHours=_suggestedHours - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedPhoneNumberValueType;                    //@synthesize suggestedPhoneNumberValueType=_suggestedPhoneNumberValueType - In the implementation block
@property (assign,nonatomic) unsigned long long originalPhoneNumberValueType;                     //@synthesize originalPhoneNumberValueType=_originalPhoneNumberValueType - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedEmailValueType;                          //@synthesize suggestedEmailValueType=_suggestedEmailValueType - In the implementation block
@property (assign,nonatomic) unsigned long long originalEmailValueType;                           //@synthesize originalEmailValueType=_originalEmailValueType - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedWebsiteValueType;                        //@synthesize suggestedWebsiteValueType=_suggestedWebsiteValueType - In the implementation block
@property (assign,nonatomic) unsigned long long originalWebsiteValueType;                         //@synthesize originalWebsiteValueType=_originalWebsiteValueType - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedAddressValueType;                        //@synthesize suggestedAddressValueType=_suggestedAddressValueType - In the implementation block
@property (assign,nonatomic) unsigned long long originalAddressValueType;                         //@synthesize originalAddressValueType=_originalAddressValueType - In the implementation block
@property (nonatomic,copy) NSString * originalHoursType;                                          //@synthesize originalHoursType=_originalHoursType - In the implementation block
@property (nonatomic,copy) NSString * suggestedHoursType;                                         //@synthesize suggestedHoursType=_suggestedHoursType - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                           //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long entryPoint;                                       //@synthesize entryPoint=_entryPoint - In the implementation block
@property (assign,nonatomic) unsigned long long endpoint;                                         //@synthesize endpoint=_endpoint - In the implementation block
-(void)setEntryPoint:(unsigned long long)arg1 ;
-(void)setSuggestedCity:(NSString *)arg1 ;
-(NSString *)suggestedName;
-(void)setSuggestedName:(NSString *)arg1 ;
-(id<FBPhotoAttachmentProtocol>)suggestedPhotoAttachment;
-(void)setSuggestedPhotoAttachment:(id<FBPhotoAttachmentProtocol>)arg1 ;
-(NSString *)suggestedPhone;
-(void)setSuggestedPhone:(NSString *)arg1 ;
-(NSString *)suggestedWebsite;
-(void)setSuggestedWebsite:(NSString *)arg1 ;
-(NSString *)suggestedCity;
-(NSString *)suggestedCityID;
-(void)setSuggestedCityID:(NSString *)arg1 ;
-(NSString *)suggestedZip;
-(void)setSuggestedZip:(NSString *)arg1 ;
-(void)_buildFieldSectionDictionary;
-(BOOL)_isNotApplicable:(id)arg1 ;
-(id)_getHoursData;
-(void)setSuggestedCategories:(NSArray *)arg1 ;
-(BOOL)hasEditedHours;
-(BOOL)isFieldTypeCrowdsourceable:(id)arg1 ;
-(CLLocation *)originalLocation;
-(CLLocation *)suggestedLocation;
-(void)setSuggestedLocation:(CLLocation *)arg1 ;
-(NSString *)originalPhone;
-(NSString *)originalWebsite;
-(NSString *)originalStreet;
-(NSString *)suggestedStreet;
-(void)setSuggestedStreet:(NSString *)arg1 ;
-(NSString *)originalCity;
-(NSString *)originalZip;
-(NSString *)originalCityID;
-(NSString *)originalEmail;
-(NSString *)suggestedEmail;
-(void)setSuggestedEmail:(NSString *)arg1 ;
-(void)setOriginalCategories:(NSArray *)arg1 ;
-(NSArray *)suggestedCategories;
-(NSArray *)originalWebsites;
-(void)setOriginalWebsites:(NSArray *)arg1 ;
-(void)setSuggestedWebsites:(NSMutableArray *)arg1 ;
-(NSDictionary *)originalHours;
-(void)setOriginalHours:(NSDictionary *)arg1 ;
-(unsigned long long)originalPhoneNumberValueType;
-(void)setOriginalPhoneNumberValueType:(unsigned long long)arg1 ;
-(unsigned long long)originalEmailValueType;
-(void)setOriginalEmailValueType:(unsigned long long)arg1 ;
-(unsigned long long)originalWebsiteValueType;
-(void)setOriginalWebsiteValueType:(unsigned long long)arg1 ;
-(unsigned long long)originalAddressValueType;
-(void)setOriginalAddressValueType:(unsigned long long)arg1 ;
-(NSString *)originalHoursType;
-(void)setOriginalHoursType:(NSString *)arg1 ;
-(BOOL)isDayOpen:(id)arg1 ;
-(void)setSuggestedHours:(NSMutableDictionary *)arg1 ;
-(id)initWithPlaceID:(id)arg1 placeName:(id)arg2 placeLocation:(id)arg3 session:(id)arg4 ;
-(NSString *)suggestedHoursType;
-(NSMutableDictionary *)suggestedHours;
-(BOOL)isCategorySuggested:(id)arg1 ;
-(BOOL)isCategoryOriginal:(id)arg1 ;
-(void)setSuggestedHoursType:(NSString *)arg1 ;
-(NSArray *)originalCategories;
-(void)removeCategory:(id)arg1 ;
-(unsigned long long)suggestedAddressValueType;
-(unsigned long long)suggestedPhoneNumberValueType;
-(unsigned long long)suggestedEmailValueType;
-(unsigned long long)suggestedWebsiteValueType;
-(NSMutableArray *)suggestedWebsites;
-(void)updateNewModelWithGraphQLData:(id)arg1 ;
-(id)getCrowdsourceableFieldsWithHeaderSectionFieldsIncluded:(BOOL)arg1 ;
-(id)getPhotoURL;
-(BOOL)hasEditedValues;
-(void)setSuggestedAddressValueType:(unsigned long long)arg1 ;
-(void)setSuggestedPhoneNumberValueType:(unsigned long long)arg1 ;
-(void)setSuggestedEmailValueType:(unsigned long long)arg1 ;
-(void)setSuggestedWebsiteValueType:(unsigned long long)arg1 ;
-(void)convertToNotApplicableString;
-(void)updateData:(id)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(unsigned long long)endpoint;
-(BOOL)addCategory:(id)arg1 ;
-(FBMemPage *)place;
-(void)setPlace:(FBMemPage *)arg1 ;
-(NSString *)placeID;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(unsigned long long)entryPoint;
-(CGImageRef)originalImage;
-(FBUserSession *)session;
-(void)setOriginalImage:(CGImageRef)arg1 ;
-(NSString *)originalName;
@end
