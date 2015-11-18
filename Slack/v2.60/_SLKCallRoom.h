/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SLKCallRoomID, NSString, NSNumber;

@interface _SLKCallRoom : NSManagedObject

@property (nonatomic,readonly) SLKCallRoomID * objectID; 
@property (nonatomic,retain) id channelIDs; 
@property (nonatomic,retain) NSString * createdByUserID; 
@property (nonatomic,retain) NSString * dateCallEnded; 
@property (nonatomic,retain) NSString * dateCallStarted; 
@property (nonatomic,retain) NSNumber * isDMCall; 
@property (assign) BOOL isDMCallValue; 
@property (nonatomic,retain) NSNumber * markedForDeletion; 
@property (assign) BOOL markedForDeletionValue; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) id participantHistoryIDs; 
@property (nonatomic,retain) id participantIDs; 
@property (nonatomic,retain) id reactionsBlob; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,retain) NSNumber * wasMissedCall; 
@property (assign) BOOL wasMissedCallValue; 
@property (nonatomic,retain) NSNumber * wasRejected; 
@property (assign) BOOL wasRejectedValue; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)markedForDeletionValue;
-(void)setMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)primitiveMarkedForDeletionValue;
-(void)setPrimitiveMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)isDMCallValue;
-(void)setIsDMCallValue:(BOOL)arg1 ;
-(BOOL)primitiveIsDMCallValue;
-(void)setPrimitiveIsDMCallValue:(BOOL)arg1 ;
-(BOOL)wasMissedCallValue;
-(void)setWasMissedCallValue:(BOOL)arg1 ;
-(BOOL)primitiveWasMissedCallValue;
-(void)setPrimitiveWasMissedCallValue:(BOOL)arg1 ;
-(BOOL)wasRejectedValue;
-(void)setWasRejectedValue:(BOOL)arg1 ;
-(BOOL)primitiveWasRejectedValue;
-(void)setPrimitiveWasRejectedValue:(BOOL)arg1 ;
-(SLKCallRoomID *)objectID;
@end
