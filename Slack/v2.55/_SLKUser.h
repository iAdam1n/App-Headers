/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:56:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SLKUserID, NSNumber, NSString;

@interface _SLKUser : NSManagedObject

@property (nonatomic,readonly) SLKUserID * objectID; 
@property (nonatomic,retain) NSNumber * admin; 
@property (assign) BOOL adminValue; 
@property (nonatomic,retain) NSNumber * bot; 
@property (assign) BOOL botValue; 
@property (nonatomic,retain) NSString * colorString; 
@property (nonatomic,retain) NSNumber * deleted; 
@property (assign) BOOL deletedValue; 
@property (nonatomic,retain) NSString * email; 
@property (nonatomic,retain) NSString * firstName; 
@property (nonatomic,retain) NSNumber * hasFiles; 
@property (assign) BOOL hasFilesValue; 
@property (nonatomic,retain) NSString * image192Url; 
@property (nonatomic,retain) NSString * image24Url; 
@property (nonatomic,retain) NSString * image32Url; 
@property (nonatomic,retain) NSString * image48Url; 
@property (nonatomic,retain) NSString * image72Url; 
@property (nonatomic,retain) NSString * imageOriginalUrl; 
@property (nonatomic,retain) NSString * lastName; 
@property (nonatomic,retain) NSNumber * markedForDeletion; 
@property (assign) BOOL markedForDeletionValue; 
@property (nonatomic,retain) NSNumber * me; 
@property (assign) BOOL meValue; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSNumber * owner; 
@property (assign) BOOL ownerValue; 
@property (nonatomic,retain) NSString * phone; 
@property (nonatomic,retain) NSString * presence; 
@property (nonatomic,retain) NSNumber * primaryOwner; 
@property (assign) BOOL primaryOwnerValue; 
@property (nonatomic,retain) NSString * realName; 
@property (nonatomic,retain) NSNumber * restricted; 
@property (assign) BOOL restrictedValue; 
@property (nonatomic,retain) NSString * skype; 
@property (nonatomic,retain) NSString * status; 
@property (nonatomic,retain) NSString * timezone; 
@property (nonatomic,retain) NSNumber * timezoneOffset; 
@property (assign) double timezoneOffsetValue; 
@property (nonatomic,retain) NSString * timezoneTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,retain) NSNumber * ultraRestricted; 
@property (assign) BOOL ultraRestrictedValue; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)markedForDeletionValue;
-(void)setMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)primitiveMarkedForDeletionValue;
-(void)setPrimitiveMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)adminValue;
-(void)setAdminValue:(BOOL)arg1 ;
-(BOOL)primitiveAdminValue;
-(void)setPrimitiveAdminValue:(BOOL)arg1 ;
-(BOOL)botValue;
-(void)setBotValue:(BOOL)arg1 ;
-(BOOL)primitiveBotValue;
-(void)setPrimitiveBotValue:(BOOL)arg1 ;
-(BOOL)deletedValue;
-(void)setDeletedValue:(BOOL)arg1 ;
-(BOOL)primitiveDeletedValue;
-(void)setPrimitiveDeletedValue:(BOOL)arg1 ;
-(BOOL)hasFilesValue;
-(void)setHasFilesValue:(BOOL)arg1 ;
-(BOOL)primitiveHasFilesValue;
-(void)setPrimitiveHasFilesValue:(BOOL)arg1 ;
-(BOOL)meValue;
-(void)setMeValue:(BOOL)arg1 ;
-(BOOL)primitiveMeValue;
-(void)setPrimitiveMeValue:(BOOL)arg1 ;
-(BOOL)ownerValue;
-(void)setOwnerValue:(BOOL)arg1 ;
-(BOOL)primitiveOwnerValue;
-(void)setPrimitiveOwnerValue:(BOOL)arg1 ;
-(BOOL)primaryOwnerValue;
-(void)setPrimaryOwnerValue:(BOOL)arg1 ;
-(BOOL)primitivePrimaryOwnerValue;
-(void)setPrimitivePrimaryOwnerValue:(BOOL)arg1 ;
-(BOOL)restrictedValue;
-(void)setRestrictedValue:(BOOL)arg1 ;
-(BOOL)primitiveRestrictedValue;
-(void)setPrimitiveRestrictedValue:(BOOL)arg1 ;
-(double)timezoneOffsetValue;
-(void)setTimezoneOffsetValue:(double)arg1 ;
-(double)primitiveTimezoneOffsetValue;
-(void)setPrimitiveTimezoneOffsetValue:(double)arg1 ;
-(BOOL)ultraRestrictedValue;
-(void)setUltraRestrictedValue:(BOOL)arg1 ;
-(BOOL)primitiveUltraRestrictedValue;
-(void)setPrimitiveUltraRestrictedValue:(BOOL)arg1 ;
-(SLKUserID *)objectID;
@end
