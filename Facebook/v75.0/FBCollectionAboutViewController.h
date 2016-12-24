/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionAbstractViewController.h>

@class FBUserSession, NSOrderedSet;

@interface FBCollectionAboutViewController : FBCollectionAbstractViewController {

	FBUserSession* _session;
	NSOrderedSet* _rawSections;
	NSOrderedSet* _sections;

}
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)_shouldHideSearchBar;
-(BOOL)supportsPaging;
-(id)collectionForTableSection:(long long)arg1 ;
-(id)collectionSectionForTableSection:(long long)arg1 ;
-(unsigned long long)maxItemsToShowForCollectionStyle:(id)arg1 ;
-(id)newQueryWithPageInfo:(id)arg1 ;
-(id)queryForProfileSections;
-(void)handleBootstrapResponse:(id)arg1 error:(id)arg2 ;
-(id)viewEventLogData;
-(id)connectionKeypath;
-(void)updateWithConnectionNodes:(id)arg1 ;
-(unsigned long long)numberOfTableSections;
-(id)headerTitleForTableSection:(long long)arg1 ;
-(id)footerTitleForTableSection:(long long)arg1 ;
-(id)footerSubtitleForTableSection:(long long)arg1 ;
-(id)destinationURLForTableSection:(long long)arg1 ;
-(id)initWithSession:(id)arg1 owner:(id)arg2 ;
-(id)logoURLForTableSection:(long long)arg1 ;
-(unsigned long long)numberOfCollectionsForSection:(id)arg1 ;
-(id)collectionAtIndex:(long long)arg1 forCollectionSection:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
@end
