/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SLKUserGroupID, NSString, NSNumber;

@interface _SLKUserGroup : NSManagedObject

@property (nonatomic,readonly) SLKUserGroupID * objectID; 
@property (nonatomic,retain) NSString * groupDescription; 
@property (nonatomic,retain) NSString * handle; 
@property (nonatomic,retain) NSNumber * isMember; 
@property (assign) BOOL isMemberValue; 
@property (nonatomic,retain) NSNumber * markedForDeletion; 
@property (assign) BOOL markedForDeletionValue; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) id preferences; 
@property (nonatomic,retain) NSString * teamId; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,retain) NSNumber * userCount; 
@property (assign) int userCountValue; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)markedForDeletionValue;
-(void)setMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)primitiveMarkedForDeletionValue;
-(void)setPrimitiveMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)isMemberValue;
-(void)setIsMemberValue:(BOOL)arg1 ;
-(BOOL)primitiveIsMemberValue;
-(void)setPrimitiveIsMemberValue:(BOOL)arg1 ;
-(int)userCountValue;
-(void)setUserCountValue:(int)arg1 ;
-(int)primitiveUserCountValue;
-(void)setPrimitiveUserCountValue:(int)arg1 ;
-(SLKUserGroupID *)objectID;
@end
