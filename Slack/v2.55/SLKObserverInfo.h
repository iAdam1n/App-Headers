/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:56:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/NSFetchedResultsControllerDelegate.h>

@class NSFetchedResultsController, NSManagedObjectID, NSArray, NSString;

@interface SLKObserverInfo : NSObject <NSFetchedResultsControllerDelegate> {

	NSFetchedResultsController* _frc;
	NSManagedObjectID* _objectID;
	NSArray* _keyPaths;
	/*^block*/id _block;

}

@property (nonatomic,retain) NSFetchedResultsController * frc;              //@synthesize frc=_frc - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;                  //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) NSArray * keyPaths;                            //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy) id block;                                        //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)keyPaths;
-(NSFetchedResultsController *)frc;
-(void)setFrc:(NSFetchedResultsController *)arg1 ;
-(void)removeFromManager;
-(void)setKeyPaths:(NSArray *)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSManagedObjectID *)objectID;
-(NSString *)description;
-(void)invalidate;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
@end
