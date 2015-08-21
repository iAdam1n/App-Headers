/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECSearchDisplayController.h>

@class NSArray, NSString;

@interface ECLocationPostCodeSearchController : ECSearchDisplayController {

	BOOL _isLoading;
	NSArray* _locationsInternal;
	NSArray* _recentPostcodes;
	NSString* _postcodeSearchString;

}

@property (assign,nonatomic) BOOL isLoading;                               //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,retain) NSArray * locationsInternal;                  //@synthesize locationsInternal=_locationsInternal - In the implementation block
@property (nonatomic,retain) NSArray * recentPostcodes;                    //@synthesize recentPostcodes=_recentPostcodes - In the implementation block
@property (nonatomic,retain) NSString * postcodeSearchString;              //@synthesize postcodeSearchString=_postcodeSearchString - In the implementation block
-(void)updateSectionMap;
-(void)updateSearchBar;
-(BOOL)isSearchStringValid:(id)arg1 ;
-(NSArray *)recentPostcodes;
-(void)setRecentPostcodes:(NSArray *)arg1 ;
-(void)selectLocation:(id)arg1 finishSelection:(BOOL)arg2 ;
-(NSArray *)locationsInternal;
-(void)setLocationsInternal:(NSArray *)arg1 ;
-(void)setPostcodeSearchString:(NSString *)arg1 ;
-(NSString *)postcodeSearchString;
-(void)openWebviewForPostcodeFinder;
-(void)dismissWebView;
-(void)setLocations:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)isLoading;
-(id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)setIsLoading:(BOOL)arg1 ;
@end

