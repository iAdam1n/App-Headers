/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/ITCBasicDataSource.h>

@interface ITCActionDataSource : ITCBasicDataSource {

	BOOL _usesSingleCell;
	int _alignment;
	double _paddingBetweenActions;

}

@property (assign,nonatomic) double paddingBetweenActions;              //@synthesize paddingBetweenActions=_paddingBetweenActions - In the implementation block
@property (assign,nonatomic) int alignment;                             //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) BOOL usesSingleCell;                       //@synthesize usesSingleCell=_usesSingleCell - In the implementation block
-(id)initWithAlignment:(int)arg1 usesSingleCell:(BOOL)arg2 ;
-(void)registerReusableViewsWithCollectionView:(id)arg1 ;
-(void)setPaddingBetweenActions:(double)arg1 ;
-(double)paddingBetweenActions;
-(BOOL)usesSingleCell;
-(void)setUsesSingleCell:(BOOL)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(int)alignment;
@end

