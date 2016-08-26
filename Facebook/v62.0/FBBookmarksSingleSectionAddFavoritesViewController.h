/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@protocol FBBookmarksSingleSectionDelegate;
@class FBLocalizedIndexedCollation, FBUserSession, NSArray, NSMutableSet, NSString;

@interface FBBookmarksSingleSectionAddFavoritesViewController : UITableViewController <FBAccessibilityInvalidationEventsListener> {

	FBLocalizedIndexedCollation* _collation;
	FBUserSession* _session;
	NSArray* _bookmarks;
	NSArray* _sortedCollatedItems;
	NSMutableSet* _selectedBookmarks;
	NSString* _title;
	id<FBBookmarksSingleSectionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveAccessibilityInvalidation;
-(BOOL)_sectionHasTitle:(long long)arg1 ;
-(long long)_originalIndexOfBookmark:(id)arg1 ;
-(id)initWithBookmarks:(id)arg1 selectedBookmarks:(id)arg2 title:(id)arg3 delegate:(id)arg4 session:(id)arg5 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end
