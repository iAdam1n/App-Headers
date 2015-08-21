/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBContentInsetTracker, UIScrollView;

@interface FBScrollInsetTrackingView : UIView {

	FBContentInsetTracker* _contentInsetTracker;
	UIScrollView* _scrollView;
	double _topLayoutGuideLength;
	double _bottomLayoutGuideLength;

}

@property (assign,nonatomic) double topLayoutGuideLength;                 //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideLength;              //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(double)bottomLayoutGuideLength;
-(id)init;
-(void)layoutSubviews;
-(id)initWithScrollView:(id)arg1 ;
@end

