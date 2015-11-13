/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SLKBotID, NSNumber, NSString;

@interface _SLKBot : NSManagedObject

@property (nonatomic,readonly) SLKBotID * objectID; 
@property (nonatomic,retain) NSNumber * deleted; 
@property (assign) BOOL deletedValue; 
@property (nonatomic,retain) NSString * emoji; 
@property (nonatomic,retain) NSString * image48Url; 
@property (nonatomic,retain) NSString * image64Url; 
@property (nonatomic,retain) NSString * image72Url; 
@property (nonatomic,retain) NSNumber * markedForDeletion; 
@property (assign) BOOL markedForDeletionValue; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * tsid; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)markedForDeletionValue;
-(void)setMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)primitiveMarkedForDeletionValue;
-(void)setPrimitiveMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)deletedValue;
-(void)setDeletedValue:(BOOL)arg1 ;
-(BOOL)primitiveDeletedValue;
-(void)setPrimitiveDeletedValue:(BOOL)arg1 ;
-(SLKBotID *)objectID;
@end

