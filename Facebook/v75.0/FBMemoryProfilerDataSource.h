/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSMutableSet, NSByteCountFormatter, UIFont, FBRetainCycleAnalysisCache, NSString;

@interface FBMemoryProfilerDataSource : NSObject <UITableViewDataSource> {

	NSArray* _data;
	NSArray* _filtered;
	NSMutableSet* _expandedSection;
	NSByteCountFormatter* _byteCountFormatter;
	UIFont* _font;
	FBRetainCycleAnalysisCache* _analysisCache;
	NSString* _classFilter;
	unsigned long long _sortingMode;
	unsigned long long _sortingOrder;

}

@property (nonatomic,copy) NSString * classFilter;                         //@synthesize classFilter=_classFilter - In the implementation block
@property (assign,nonatomic) unsigned long long sortingMode;               //@synthesize sortingMode=_sortingMode - In the implementation block
@property (assign,nonatomic) unsigned long long sortingOrder;              //@synthesize sortingOrder=_sortingOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSectionExpanded:(long long)arg1 ;
-(void)refilter;
-(id)_colorForAnalysisStatus:(unsigned long long)arg1 ;
-(id)_sortArray:(id)arg1 withKey:(id)arg2 ;
-(id)_refilterSectionAtIndex:(long long)arg1 ;
-(id)initWithAnalysisCache:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 forSection:(long long)arg2 ;
-(void)forceDataReload;
-(id)summaryForSection:(long long)arg1 ;
-(void)setClassFilter:(NSString *)arg1 ;
-(void)setSortingOrder:(unsigned long long)arg1 ;
-(id)classNamesForSection:(long long)arg1 ;
-(NSString *)classFilter;
-(unsigned long long)sortingOrder;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)sortingMode;
-(void)setSortingMode:(unsigned long long)arg1 ;
@end
