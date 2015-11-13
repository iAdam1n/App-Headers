/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Slack/NSFetchedResultsControllerDelegate.h>

@class NSFetchedResultsController, NSString;

@interface SLKTableViewController : UITableViewController <NSFetchedResultsControllerDelegate> {

	BOOL _loading;
	BOOL _visible;
	BOOL _disableCellInsertAnimation;
	NSFetchedResultsController* _fetchedResultsController;

}

@property (assign,getter=isLoading,nonatomic) BOOL loading;                                      //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                      //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * fetchedResultsController;              //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,readonly) long long fetchCount; 
@property (assign,nonatomic) BOOL disableCellInsertAnimation;                                    //@synthesize disableCellInsertAnimation=_disableCellInsertAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSFetchedResultsController *)fetchedResultsController;
-(id)fetchObjectIndexPath:(id)arg1 ;
-(void)setFetchedResultsController:(NSFetchedResultsController *)arg1 ;
-(void)setDisableCellInsertAnimation:(BOOL)arg1 ;
-(BOOL)disableCellInsertAnimation;
-(long long)fetchCount;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)init;
-(void)setVisible:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)isVisible;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
@end

