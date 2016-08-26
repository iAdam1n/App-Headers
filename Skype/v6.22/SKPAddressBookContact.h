/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPLazyPropertyContainer.h>

@class NSString, NSArray, UIImage, NSURL;

@interface SKPAddressBookContact : SKPLazyPropertyContainer {

	int _recordID;
	NSString* _fullName;
	NSArray* _phoneNumbers;
	NSArray* _labelledPhoneNumbers;
	NSArray* _emailAddresses;
	UIImage* _avatarImage;
	NSURL* _avatarURL;
	unsigned long long _objectId;
	NSString* _lastModifiedHashValue;
	unsigned long long _contactType;
	NSString* _displayName;
	NSString* _displaySubtext;

}

@property (assign,nonatomic) unsigned long long objectId;                          //@synthesize objectId=_objectId - In the implementation block
@property (nonatomic,retain) UIImage * avatarImage;                                //@synthesize avatarImage=_avatarImage - In the implementation block
@property (assign,nonatomic) unsigned long long contactType;                       //@synthesize contactType=_contactType - In the implementation block
@property (nonatomic,retain) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * displaySubtext;                            //@synthesize displaySubtext=_displaySubtext - In the implementation block
@property (nonatomic,retain) NSURL * avatarURL;                                    //@synthesize avatarURL=_avatarURL - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                    //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSArray * phoneNumbers;                               //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSArray * labelledPhoneNumbers;                       //@synthesize labelledPhoneNumbers=_labelledPhoneNumbers - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;                             //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSString * avatarPlaceholderIcon; 
@property (assign,nonatomic) int recordID;                                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * lastModifiedHashValue;                       //@synthesize lastModifiedHashValue=_lastModifiedHashValue - In the implementation block
+(unsigned long long)dbIdFromObjectId:(unsigned long long)arg1 ;
+(unsigned long long)objectIdFromDbId:(unsigned long long)arg1 ;
+(id)lazyLoadedPropertiesKeypaths;
+(id)keyPathsForValuesAffectingDisplayName;
+(id)keyPathsForValuesAffectingAvatarPlaceholderIcon;
+(id)keyPathsForValuesAffectingContactType;
+(id)keyPathsForValuesAffectingDisplaySubtext;
-(void)setAvatarURL:(NSURL *)arg1 ;
-(NSString *)avatarPlaceholderIcon;
-(id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id*)arg2 ;
-(NSURL *)avatarURL;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(UIImage *)avatarImage;
-(BOOL)flushLazyProperty:(id)arg1 ;
-(NSString *)displaySubtext;
-(NSArray *)labelledPhoneNumbers;
-(void)setLabelledPhoneNumbers:(NSArray *)arg1 ;
-(void)setLastModifiedHashValue:(NSString *)arg1 ;
-(NSString *)lastModifiedHashValue;
-(id)fetchOperationForABImage;
-(void)setDisplaySubtext:(NSString *)arg1 ;
-(id)init;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)phoneNumbers;
-(unsigned long long)contactType;
-(void)setFullName:(NSString *)arg1 ;
-(void)setRecordID:(int)arg1 ;
-(int)recordID;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(void)setContactType:(unsigned long long)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(unsigned long long)objectId;
-(void)setObjectId:(unsigned long long)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)fullName;
@end
