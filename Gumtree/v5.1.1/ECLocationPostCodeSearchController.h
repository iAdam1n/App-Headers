/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(void)updateSearchBar;
-(NSArray *)recentPostcodes;
-(NSArray *)locationsInternal;
-(void)setLocationsInternal:(NSArray *)arg1 ;
-(void)updateSectionMap;
-(void)setRecentPostcodes:(NSArray *)arg1 ;
-(void)setPostcodeSearchString:(NSString *)arg1 ;
-(BOOL)isSearchStringValid:(id)arg1 ;
-(NSString *)postcodeSearchString;
-(void)openWebviewForPostcodeFinder;
-(void)selectLocation:(id)arg1 finishSelection:(BOOL)arg2 ;
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
