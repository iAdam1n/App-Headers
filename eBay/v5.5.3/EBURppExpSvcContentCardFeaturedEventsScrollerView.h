/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIContentCardHorizontalScrollerView.h>

@class NSArray, NSString;

@interface EBURppExpSvcContentCardFeaturedEventsScrollerView : EUIContentCardHorizontalScrollerView {

	NSArray* _expSvcEvents;
	NSString* _title;
	NSString* _internalCellAccessibilityID;

}

@property (nonatomic,copy) NSArray * expSvcEvents;                              //@synthesize expSvcEvents=_expSvcEvents - In the implementation block
@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * internalCellAccessibilityID;              //@synthesize internalCellAccessibilityID=_internalCellAccessibilityID - In the implementation block
-(NSString *)internalCellAccessibilityID;
-(void)setInternalCellAccessibilityID:(NSString *)arg1 ;
-(NSArray *)expSvcEvents;
-(void)setExpSvcEvents:(NSArray *)arg1 ;
-(id)ussEventFromExpSvcEventAtIndexPath:(id)arg1 ;
-(id)rppEventForIndexPath:(id)arg1 ;
-(void)loadExpSvcEvents:(id)arg1 ;
-(Class)scrollingContentClass;
-(double)cellWidthForCardWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSString *)title;
@end

