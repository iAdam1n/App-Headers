/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface GADSwipeToViewControllerConfigurations : NSObject {

	BOOL _adDraggable;
	NSString* _swipeableInAppStoreProductID;
	NSArray* _swipeableRectangles;
	long long _swipeDirection;
	double _swipeAnimationTransitionDuration;
	NSDictionary* _swipeEventCreativeMetadata;

}

@property (nonatomic,copy,readonly) NSString * swipeableInAppStoreProductID;                //@synthesize swipeableInAppStoreProductID=_swipeableInAppStoreProductID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * swipeableRectangles;                          //@synthesize swipeableRectangles=_swipeableRectangles - In the implementation block
@property (assign,nonatomic) long long swipeDirection;                                      //@synthesize swipeDirection=_swipeDirection - In the implementation block
@property (assign,getter=isAdDraggable,nonatomic) BOOL adDraggable;                         //@synthesize adDraggable=_adDraggable - In the implementation block
@property (nonatomic,readonly) double swipeAnimationTransitionDuration;                     //@synthesize swipeAnimationTransitionDuration=_swipeAnimationTransitionDuration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * swipeEventCreativeMetadata;              //@synthesize swipeEventCreativeMetadata=_swipeEventCreativeMetadata - In the implementation block
-(id)initWithSwipeConfigurations:(id)arg1 ;
-(NSString *)swipeableInAppStoreProductID;
-(NSArray *)swipeableRectangles;
-(void)setSwipeDirection:(long long)arg1 ;
-(BOOL)isAdDraggable;
-(void)setAdDraggable:(BOOL)arg1 ;
-(double)swipeAnimationTransitionDuration;
-(NSDictionary *)swipeEventCreativeMetadata;
-(long long)swipeDirection;
-(id)init;
@end
