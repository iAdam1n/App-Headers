/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol SKPVideoFilterRosterViewDelegate;
@class NSDictionary, NSMutableArray, UICollectionViewFlowLayout, NSString;

@interface SKPVideoFilterRosterView : UICollectionView <UICollectionViewDataSource> {

	unsigned long long _currentEffect;
	long long _orientation;
	NSDictionary* _allFilters;
	id<SKPVideoFilterRosterViewDelegate> _rosterViewDelegate;
	NSMutableArray* _availableFilters;
	UICollectionViewFlowLayout* _layout;

}

@property (retain) id<SKPVideoFilterRosterViewDelegate> rosterViewDelegate;              //@synthesize rosterViewDelegate=_rosterViewDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * availableFilters;                          //@synthesize availableFilters=_availableFilters - In the implementation block
@property (nonatomic,copy) NSDictionary * allFilters;                                    //@synthesize allFilters=_allFilters - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * layout;                        //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) unsigned long long currentEffect;                           //@synthesize currentEffect=_currentEffect - In the implementation block
@property (assign,nonatomic) CGSize itemSize; 
@property (assign,nonatomic) double padding; 
@property (nonatomic,readonly) unsigned long long numberOfFilters; 
@property (assign,nonatomic) long long orientation;                                      //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double spacingBetweenItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onFilterButtonTapped:(id)arg1 ;
-(id)createAllFiltersDict;
-(void)setRosterViewDelegate:(id<SKPVideoFilterRosterViewDelegate>)arg1 ;
-(id)cellForFilter:(id)arg1 ;
-(id<SKPVideoFilterRosterViewDelegate>)rosterViewDelegate;
-(unsigned long long)numberOfFilters;
-(NSMutableArray *)availableFilters;
-(id)buttonForFilter:(id)arg1 ;
-(double)rotationAngleForOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 enabledFilters:(id)arg2 delegate:(id)arg3 ;
-(void)prepareToDismiss;
-(void)prepareToPresent;
-(double)spacingBetweenItems;
-(void)setSpacingBetweenItems:(double)arg1 ;
-(NSDictionary *)allFilters;
-(void)setAllFilters:(NSDictionary *)arg1 ;
-(void)setAvailableFilters:(NSMutableArray *)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(id)indexPathForCell:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(UICollectionViewFlowLayout *)layout;
-(void)setPadding:(double)arg1 ;
-(double)padding;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(CGSize)itemSize;
-(unsigned long long)currentEffect;
-(void)setCurrentEffect:(unsigned long long)arg1 ;
@end
