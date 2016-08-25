/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSManagedObjectContext;

@interface SLKManagedObjectController : NSObject {

	NSMutableArray* _observers;
	NSManagedObjectContext* _defaultManagedObjectContext;
	NSManagedObjectContext* _backgroundManagedObjectContext;

}

@property (nonatomic,retain) NSMutableArray * observers;                                                  //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) NSManagedObjectContext * defaultManagedObjectContext;                 //@synthesize defaultManagedObjectContext=_defaultManagedObjectContext - In the implementation block
@property (assign,nonatomic,__weak) NSManagedObjectContext * backgroundManagedObjectContext;              //@synthesize backgroundManagedObjectContext=_backgroundManagedObjectContext - In the implementation block
+(void)setDefaultManagedObjectContext:(id)arg1 ;
+(void)setBackgroundManagedObjectContext:(id)arg1 ;
+(id)sharedController;
-(void)setDefaultManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)setBackgroundManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)fetchedResultsControllerForEntity:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3 ;
-(id)addObserverForFetchedResultsController:(id)arg1 objectID:(id)arg2 forKeyPaths:(id)arg3 didChange:(/*^block*/id)arg4 ;
-(id)observeEntity:(id)arg1 forKeyPath:(id)arg2 inManagedObjectContext:(id)arg3 didChange:(/*^block*/id)arg4 ;
-(NSManagedObjectContext *)backgroundManagedObjectContext;
-(NSManagedObjectContext *)defaultManagedObjectContext;
-(id)observeEntity:(id)arg1 objectID:(id)arg2 forKeyPaths:(id)arg3 predicate:(id)arg4 inManagedObjectContext:(id)arg5 didChange:(/*^block*/id)arg6 ;
-(id)observeEntity:(id)arg1 inManagedObjectContext:(id)arg2 didChange:(/*^block*/id)arg3 ;
-(BOOL)removeObserverForFetchedResultsController:(id)arg1 ;
-(BOOL)removeObservers:(id)arg1 ;
-(BOOL)removeObserver:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(BOOL)removeAllObservers;
@end

