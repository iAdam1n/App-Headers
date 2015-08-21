/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSFetchedResultsControllerDelegate.h>

@protocol ATMessageCenterDataSourceDelegate;
@class NSFetchedResultsController, NSObject;

@interface ATMessageCenterDataSource : NSObject <NSFetchedResultsControllerDelegate> {

	NSFetchedResultsController* fetchedMessagesController;
	NSObject*<ATMessageCenterDataSourceDelegate> delegate;

}

@property (nonatomic,readonly) NSFetchedResultsController * fetchedMessagesController; 
@property (assign,nonatomic) NSObject*<ATMessageCenterDataSourceDelegate> delegate; 
-(NSFetchedResultsController *)fetchedMessagesController;
-(void)createIntroMessageIfNecessary;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)controller:(id)arg1 sectionIndexTitleForSectionName:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(NSObject*<ATMessageCenterDataSourceDelegate>)arg1 ;
-(NSObject*<ATMessageCenterDataSourceDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)markAllMessagesAsRead;
-(id)initWithDelegate:(id)arg1 ;
@end

