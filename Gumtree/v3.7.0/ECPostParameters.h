/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/NSCoding.h>
#import <Gumtree/NSCopying.h>

@protocol ECPostParametersEditorProtocol;
@class NSString, ECLocation, NSMutableArray, NSNumber, NSMutableDictionary, NSArray, ECFeatureProvider, ECPostValidatorBase, ECCategoryMetadata, NSObject;

@interface ECPostParameters : NSObject <NSCoding, NSCopying> {

	BOOL _inProgress;
	BOOL _needsFeatureProviderUpdate;
	BOOL _loadingMetadata;
	BOOL _dirty;
	NSString* _adID;
	ECLocation* _location;
	NSString* _categoryID;
	NSString* _title;
	NSString* _adDescription;
	NSMutableArray* _images;
	unsigned long long _maxImages;
	NSString* _adType;
	NSString* _priceFrequency;
	NSString* _priceType;
	NSNumber* _amount;
	NSString* _currencyCode;
	NSMutableDictionary* _attributes;
	NSString* _email;
	NSString* _phone;
	NSString* _street;
	NSString* _zipcode;
	NSString* _fullAddress;
	NSString* _replyURL;
	NSString* _posterEmail;
	NSString* _posterName;
	NSArray* _suppressedProperties;
	NSArray* _suppressedAttributes;
	ECFeatureProvider* _featureProvider;
	ECPostValidatorBase* _validator;
	ECCategoryMetadata* _metadata;
	NSObject*<ECPostParametersEditorProtocol> _editor;
	NSMutableDictionary* _dirtyStates;
	NSMutableDictionary* _dirtyAttributes;

}

@property (nonatomic,retain) NSString * adID;                                                      //@synthesize adID=_adID - In the implementation block
@property (nonatomic,retain) ECLocation * location;                                                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * categoryID;                                                //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * adDescription;                                             //@synthesize adDescription=_adDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * images;                                              //@synthesize images=_images - In the implementation block
@property (assign,nonatomic) unsigned long long maxImages;                                         //@synthesize maxImages=_maxImages - In the implementation block
@property (nonatomic,retain) NSString * adType;                                                    //@synthesize adType=_adType - In the implementation block
@property (nonatomic,retain) NSString * priceFrequency;                                            //@synthesize priceFrequency=_priceFrequency - In the implementation block
@property (nonatomic,retain) NSString * priceType;                                                 //@synthesize priceType=_priceType - In the implementation block
@property (nonatomic,retain) NSNumber * amount;                                                    //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                                              //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;                                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * email;                                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * phone;                                                     //@synthesize phone=_phone - In the implementation block
@property (nonatomic,retain) NSString * street;                                                    //@synthesize street=_street - In the implementation block
@property (nonatomic,retain) NSString * zipcode;                                                   //@synthesize zipcode=_zipcode - In the implementation block
@property (nonatomic,copy) NSString * fullAddress;                                                 //@synthesize fullAddress=_fullAddress - In the implementation block
@property (nonatomic,retain) NSString * replyURL;                                                  //@synthesize replyURL=_replyURL - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                                                      //@synthesize inProgress=_inProgress - In the implementation block
@property (nonatomic,retain) NSString * posterEmail;                                               //@synthesize posterEmail=_posterEmail - In the implementation block
@property (nonatomic,retain) NSString * posterName;                                                //@synthesize posterName=_posterName - In the implementation block
@property (nonatomic,retain) NSArray * suppressedProperties;                                       //@synthesize suppressedProperties=_suppressedProperties - In the implementation block
@property (nonatomic,retain) NSArray * suppressedAttributes;                                       //@synthesize suppressedAttributes=_suppressedAttributes - In the implementation block
@property (nonatomic,retain) ECFeatureProvider * featureProvider;                                  //@synthesize featureProvider=_featureProvider - In the implementation block
@property (assign) BOOL needsFeatureProviderUpdate;                                                //@synthesize needsFeatureProviderUpdate=_needsFeatureProviderUpdate - In the implementation block
@property (readonly) BOOL isEditingExistingAd; 
@property (nonatomic,retain) ECPostValidatorBase * validator;                                      //@synthesize validator=_validator - In the implementation block
@property (nonatomic,retain) ECCategoryMetadata * metadata;                                        //@synthesize metadata=_metadata - In the implementation block
@property (assign) BOOL loadingMetadata;                                                           //@synthesize loadingMetadata=_loadingMetadata - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ECPostParametersEditorProtocol> editor;              //@synthesize editor=_editor - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;                                            //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,retain) NSMutableDictionary * dirtyStates;                                    //@synthesize dirtyStates=_dirtyStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dirtyAttributes;                                //@synthesize dirtyAttributes=_dirtyAttributes - In the implementation block
+(id)currentPostParameters;
+(id)optOutUserDefaultsKeyForDataSourceKey:(id)arg1 ;
+(id)currentSavedPostData;
+(void)clearSavedCurrentPostParameters;
+(id)savedContactInfoValuesUserDefaultsKeyForDataSourceKey:(id)arg1 ;
+(id)propertyWithXMLName:(id)arg1 ;
+(id)postFieldIDForDataSourceKey:(id)arg1 ;
+(id)currentOrDefaultPostParameters;
+(void)clearSavedContactInfoValuesForUser;
+(id)xmlNameWithProperty:(id)arg1 ;
-(NSArray *)suppressedAttributes;
-(NSString *)adID;
-(NSString *)priceType;
-(NSString *)replyURL;
-(ECPostValidatorBase *)validator;
-(void)setValidator:(ECPostValidatorBase *)arg1 ;
-(void)setCategoryID:(NSString *)arg1 ;
-(BOOL)isEditingExistingAd;
-(NSString *)fullAddress;
-(void)setZipcode:(NSString *)arg1 ;
-(void)setFullAddress:(NSString *)arg1 ;
-(ECFeatureProvider *)featureProvider;
-(void)setFeatureProvider:(ECFeatureProvider *)arg1 ;
-(void)setAdID:(NSString *)arg1 ;
-(id)extendedParamsForFeatureProvider;
-(void)setNeedsFeatureProviderUpdate:(BOOL)arg1 ;
-(NSString *)adDescription;
-(void)setAdDescription:(NSString *)arg1 ;
-(void)setAdType:(NSString *)arg1 ;
-(void)setPriceType:(NSString *)arg1 ;
-(NSString *)priceFrequency;
-(void)setPriceFrequency:(NSString *)arg1 ;
-(void)setReplyURL:(NSString *)arg1 ;
-(NSString *)zipcode;
-(void)setPosterEmail:(NSString *)arg1 ;
-(void)setPosterName:(NSString *)arg1 ;
-(void)setMaxImages:(unsigned long long)arg1 ;
-(id)initWithValidator:(id)arg1 ;
-(id)getDefaultCurrencyCode;
-(void)updateFromSavedContactInfo;
-(void)initializeDefaultValidator;
-(void)takeValuesFromPostParameters:(id)arg1 ;
-(unsigned long long)maxImages;
-(NSString *)posterEmail;
-(void)setSuppressedAttributes:(NSArray *)arg1 ;
-(NSArray *)suppressedProperties;
-(void)setSuppressedProperties:(NSArray *)arg1 ;
-(BOOL)loadingMetadata;
-(void)restoreToCurrentOrMakeDefaultPostParameters;
-(BOOL)restoreFromCurrentSaveFile;
-(id)contactInfoDictionary;
-(NSMutableDictionary *)dirtyStates;
-(NSMutableDictionary *)dirtyAttributes;
-(void)setToDefaults;
-(id)contactInfoKeys;
-(void)updateFromLoggedInUser;
-(NSString *)posterName;
-(void)setLoadingMetadata:(BOOL)arg1 ;
-(void)updateFeatureProvider;
-(BOOL)needsFeatureProviderUpdate;
-(void)resetParametersOnCategoryChangeTo:(id)arg1 ;
-(void)resetParametersOnLocationChangeTo:(id)arg1 ;
-(void)saveAsCurrentPostParameters;
-(id)supportedPropertiesDictionary;
-(BOOL)isSimilarToPostParameters:(id)arg1 ;
-(BOOL)propertyIsDirty:(id)arg1 ;
-(void)setDirty:(BOOL)arg1 forProperty:(id)arg2 ;
-(BOOL)attributeIsDirty:(id)arg1 ;
-(void)setDirty:(BOOL)arg1 forAttribute:(id)arg2 ;
-(BOOL)validateForKeys:(id)arg1 ;
-(BOOL)validateAttributeForKey:(id)arg1 ;
-(BOOL)isAddressValidForKeys:(id)arg1 ;
-(BOOL)isTitleValid;
-(BOOL)isDescriptionValid;
-(BOOL)isPriceValid;
-(BOOL)areImagesValid;
-(void)setDirtyStates:(NSMutableDictionary *)arg1 ;
-(void)setDirtyAttributes:(NSMutableDictionary *)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSObject*<ECPostParametersEditorProtocol>)editor;
-(void)setEditor:(NSObject*<ECPostParametersEditorProtocol>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(BOOL)isValid;
-(NSString *)title;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)images;
-(ECLocation *)location;
-(void)setImages:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)attributes;
-(void)setAmount:(NSNumber *)arg1 ;
-(NSNumber *)amount;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(NSString *)phone;
-(void)setPhone:(NSString *)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(NSString *)categoryID;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(void)updateMetadata;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setLocation:(ECLocation *)arg1 ;
-(void)setMetadata:(ECCategoryMetadata *)arg1 ;
-(ECCategoryMetadata *)metadata;
-(NSString *)email;
-(BOOL)isDirty;
-(NSString *)adType;
-(NSString *)street;
@end
