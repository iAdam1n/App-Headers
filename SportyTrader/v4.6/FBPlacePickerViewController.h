/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBGraphObjectPickerViewController.h>
#import <SportyTrader/FBGraphObjectViewControllerDelegate.h>

@class NSString, NSTimer;

@interface FBPlacePickerViewController : FBGraphObjectPickerViewController <FBGraphObjectViewControllerDelegate> {

	BOOL _hasSearchTextChangedSinceLastQuery;
	long long _radiusInMeters;
	long long _resultsLimit;
	NSString* _searchText;
	NSTimer* _searchTextChangedTimer;
	CGSize _locationCoordinate;

}

@property (assign,nonatomic) CGSize locationCoordinate;                        //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) long long radiusInMeters;                         //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (assign,nonatomic) long long resultsLimit;                           //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSString * searchText;                              //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain,readonly) id<FBGraphPlace> selection; 
@property (nonatomic,retain) NSTimer * searchTextChangedTimer;                 //@synthesize searchTextChangedTimer=_searchTextChangedTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)graphObjectPagingMode;
+(id)firstRenderLogString;
+(id)requestForPlacesSearchAtCoordinate:(CGSize)arg1 radiusInMeters:(long long)arg2 resultsLimit:(long long)arg3 searchText:(id)arg4 fields:(id)arg5 datasource:(id)arg6 session:(id)arg7 ;
+(id)cacheDescriptorWithLocationCoordinate:(CGSize)arg1 radiusInMeters:(long long)arg2 searchText:(id)arg3 resultsLimit:(long long)arg4 fieldsForRequest:(id)arg5 ;
-(id)graphObjectTableDataSource:(id)arg1 titleOfItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 subtitleOfItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 pictureUrlOfItem:(id)arg2 ;
-(BOOL)graphObjectTableDataSource:(id)arg1 filterIncludesItem:(id)arg2 ;
-(void)loadDataThrottledSkippingRoundTripIfCached:(id)arg1 ;
-(void)configureDataSource:(id)arg1 ;
-(void)loadDataSkippingRoundTripIfCached:(id)arg1 ;
-(void)notifyDelegateSelectionDidChange;
-(void)notifyDelegateDataDidChange;
-(BOOL)delegateIncludesGraphObject:(id)arg1 ;
-(void)setRadiusInMeters:(long long)arg1 ;
-(long long)radiusInMeters;
-(void)configureUsingCachedDescriptor:(id)arg1 ;
-(void)logAppEvents:(BOOL)arg1 ;
-(void)initializePlacePicker;
-(NSTimer *)searchTextChangedTimer;
-(id)createSearchTextChangedTimer;
-(void)setSearchTextChangedTimer:(NSTimer *)arg1 ;
-(void)searchTextChangedTimerFired:(id)arg1 ;
-(void)notifyDelegateOfError:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<FBGraphPlace>)selection;
-(NSString *)searchText;
-(void)setResultsLimit:(long long)arg1 ;
-(long long)resultsLimit;
-(void)setLocationCoordinate:(CGSize)arg1 ;
-(CGSize)locationCoordinate;
@end

