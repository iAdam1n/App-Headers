/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol ECPostParametersEditorProtocol;
@class NSString, ECLocation, NSDictionary, NSMutableArray, NSArray, NSNumber, NSMutableDictionary, ECFeatureProvider, ECPostValidatorBase, ECCategoryMetadata, NSObject;

@interface ECPostParameters : NSObject <NSCoding, NSCopying> {

	BOOL _inProgress;
	BOOL _needsFeatureProviderUpdate;
	BOOL _loadingMetadata;
	BOOL _dirty;
	BOOL _imageUploadFailed;
	NSString* _adID;
	ECLocation* _location;
	NSString* _categoryID;
	NSString* _nativeLocale;
	NSString* _title;
	NSDictionary* _multilangTitle;
	NSString* _adDescription;
	NSDictionary* _multilangAdDescription;
	NSMutableArray* _images;
	unsigned long long _maxImages;
	NSArray* _updateImages;
	NSString* _adType;
	NSString* _priceFrequency;
	NSString* _priceType;
	NSNumber* _amount;
	NSString* _currencyCode;
	NSString* _allowBidding;
	NSNumber* _minimumBid;
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
@property (nonatomic,retain) NSString * nativeLocale;                                              //@synthesize nativeLocale=_nativeLocale - In the implementation block
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDictionary * multilangTitle;                                        //@synthesize multilangTitle=_multilangTitle - In the implementation block
@property (nonatomic,retain) NSString * adDescription;                                             //@synthesize adDescription=_adDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * multilangAdDescription;                                //@synthesize multilangAdDescription=_multilangAdDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * images;                                              //@synthesize images=_images - In the implementation block
@property (assign,nonatomic) unsigned long long maxImages;                                         //@synthesize maxImages=_maxImages - In the implementation block
@property (nonatomic,retain) NSArray * updateImages;                                               //@synthesize updateImages=_updateImages - In the implementation block
@property (nonatomic,retain) NSString * adType;                                                    //@synthesize adType=_adType - In the implementation block
@property (nonatomic,retain) NSString * priceFrequency;                                            //@synthesize priceFrequency=_priceFrequency - In the implementation block
@property (nonatomic,retain) NSString * priceType;                                                 //@synthesize priceType=_priceType - In the implementation block
@property (nonatomic,retain) NSNumber * amount;                                                    //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                                              //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSString * allowBidding;                                              //@synthesize allowBidding=_allowBidding - In the implementation block
@property (nonatomic,retain) NSNumber * minimumBid;                                                //@synthesize minimumBid=_minimumBid - In the implementation block
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
@property (assign,nonatomic) BOOL imageUploadFailed;                                               //@synthesize imageUploadFailed=_imageUploadFailed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dirtyStates;                                    //@synthesize dirtyStates=_dirtyStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dirtyAttributes;                                //@synthesize dirtyAttributes=_dirtyAttributes - In the implementation block
+(id)optOutUserDefaultsKeyForDataSourceKey:(id)arg1 ;
+(id)currentPostParameters;
+(BOOL)hasCurrentlySavedPostData;
+(void)clearSavedCurrentPostParameters;
+(id)xmlNameWithProperty:(id)arg1 ;
+(id)savedContactInfoValuesUserDefaultsKeyForDataSourceKey:(id)arg1 ;
+(id)propertyWithXMLName:(id)arg1 ;
+(void)clearSavedContactInfoValuesForUser;
+(id)postParametersFromCurrentSaveFile;
+(id)currentSavedPostData;
+(id)postFieldIDForDataSourceKey:(id)arg1 ;
-(NSString *)zipcode;
-(NSString *)posterEmail;
-(void)setAdType:(NSString *)arg1 ;
-(NSString *)adID;
-(NSString *)adDescription;
-(NSString *)priceFrequency;
-(NSString *)priceType;
-(void)setAdID:(NSString *)arg1 ;
-(void)setAdDescription:(NSString *)arg1 ;
-(void)setPriceFrequency:(NSString *)arg1 ;
-(void)setPriceType:(NSString *)arg1 ;
-(void)setCategoryID:(NSString *)arg1 ;
-(void)setZipcode:(NSString *)arg1 ;
-(void)setFullAddress:(NSString *)arg1 ;
-(BOOL)isEditingExistingAd;
-(NSString *)fullAddress;
-(ECFeatureProvider *)featureProvider;
-(NSArray *)suppressedAttributes;
-(void)setFeatureProvider:(ECFeatureProvider *)arg1 ;
-(void)setMaxImages:(unsigned long long)arg1 ;
-(void)setNeedsFeatureProviderUpdate:(BOOL)arg1 ;
-(void)setDirty:(BOOL)arg1 forProperty:(id)arg2 ;
-(void)updateFeatureProvider;
-(void)saveAsCurrentPostParameters;
-(void)changeCategoryID:(id)arg1 withPostConfigurator:(id)arg2 ;
-(id)supportedPropertiesDictionary;
-(BOOL)propertyIsDirty:(id)arg1 ;
-(BOOL)attributeIsDirty:(id)arg1 ;
-(BOOL)validateForKeys:(id)arg1 ;
-(NSString *)allowBidding;
-(BOOL)validateAttributeForKey:(id)arg1 ;
-(NSString *)posterName;
-(void)updateFromSavedContactInfo;
-(BOOL)imageUploadFailed;
-(void)setPosterEmail:(NSString *)arg1 ;
-(void)setPosterName:(NSString *)arg1 ;
-(void)setReplyURL:(NSString *)arg1 ;
-(id)extendedParamsForFeatureProvider;
-(unsigned long long)maxImages;
-(BOOL)loadingMetadata;
-(id)getDefaultCurrencyCode;
-(void)initializeDefaultValidator;
-(void)takeValuesFromPostParameters:(id)arg1 ;
-(void)setUpdateImages:(NSArray *)arg1 ;
-(void)setAllowBidding:(NSString *)arg1 ;
-(NSNumber *)minimumBid;
-(void)setMinimumBid:(NSNumber *)arg1 ;
-(NSString *)replyURL;
-(void)setSuppressedAttributes:(NSArray *)arg1 ;
-(NSArray *)suppressedProperties;
-(void)setSuppressedProperties:(NSArray *)arg1 ;
-(id)contactInfoDictionary;
-(id)contactInfoKeys;
-(void)updateFromLoggedInUser;
-(void)setLoadingMetadata:(BOOL)arg1 ;
-(BOOL)needsFeatureProviderUpdate;
-(void)resetParametersOnCategoryChangeTo:(id)arg1 withPostConfigurator:(id)arg2 ;
-(void)resetParametersOnLocationChangeTo:(id)arg1 ;
-(NSMutableDictionary *)dirtyStates;
-(NSMutableDictionary *)dirtyAttributes;
-(BOOL)isSimilarToPostParameters:(id)arg1 ;
-(void)setDirty:(BOOL)arg1 forAttribute:(id)arg2 ;
-(BOOL)isAddressValidForKeys:(id)arg1 ;
-(BOOL)isTitleValid;
-(BOOL)isDescriptionValid;
-(BOOL)isPriceValid;
-(BOOL)areImagesValid;
-(NSString *)nativeLocale;
-(void)setNativeLocale:(NSString *)arg1 ;
-(NSDictionary *)multilangTitle;
-(void)setMultilangTitle:(NSDictionary *)arg1 ;
-(NSDictionary *)multilangAdDescription;
-(void)setMultilangAdDescription:(NSDictionary *)arg1 ;
-(void)setImageUploadFailed:(BOOL)arg1 ;
-(void)setDirtyStates:(NSMutableDictionary *)arg1 ;
-(void)setDirtyAttributes:(NSMutableDictionary *)arg1 ;
-(id)initWithValidator:(id)arg1 ;
-(ECPostValidatorBase *)validator;
-(void)setValidator:(ECPostValidatorBase *)arg1 ;
-(NSObject*<ECPostParametersEditorProtocol>)editor;
-(void)setEditor:(NSObject*<ECPostParametersEditorProtocol>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(BOOL)isValid;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)images;
-(ECLocation *)location;
-(void)setImages:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)attributes;
-(void)setAmount:(NSNumber *)arg1 ;
-(NSNumber *)amount;
-(void)setLocation:(ECLocation *)arg1 ;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(NSString *)adType;
-(NSArray *)updateImages;
-(NSString *)phone;
-(void)setMetadata:(ECCategoryMetadata *)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(NSString *)street;
-(NSString *)categoryID;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(void)updateMetadata;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(ECCategoryMetadata *)metadata;
-(NSString *)email;
-(BOOL)isDirty;
-(void)setEmail:(NSString *)arg1 ;
-(void)setPhone:(NSString *)arg1 ;
@end

