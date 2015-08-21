/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1EventCardView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILabel, UIView, CAShapeLayer, T1SportEventRowView, NSString;

@interface T1EventCardSportView : T1EventCardView <UIGestureRecognizerDelegate> {

	UILabel* _statusTextLabel;
	UIView* _sportContainer;
	CAShapeLayer* _containerBackgroundLayer;
	T1SportEventRowView* _topRowView;
	T1SportEventRowView* _bottomRowView;
	UILabel* _socialTextLabel;

}

@property (nonatomic,retain) UILabel * statusTextLabel;                            //@synthesize statusTextLabel=_statusTextLabel - In the implementation block
@property (nonatomic,retain) UIView * sportContainer;                              //@synthesize sportContainer=_sportContainer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * containerBackgroundLayer;              //@synthesize containerBackgroundLayer=_containerBackgroundLayer - In the implementation block
@property (nonatomic,retain) T1SportEventRowView * topRowView;                     //@synthesize topRowView=_topRowView - In the implementation block
@property (nonatomic,retain) T1SportEventRowView * bottomRowView;                  //@synthesize bottomRowView=_bottomRowView - In the implementation block
@property (nonatomic,retain) UILabel * socialTextLabel;                            //@synthesize socialTextLabel=_socialTextLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_socialTextFont;
+(double)contentHeightForStyle:(long long)arg1 ;
+(id)_statusTextFont;
-(void)willDisplay;
-(void)didUpdateSportEvent:(id)arg1 ;
-(void)setEventViewStyle:(long long)arg1 ;
-(void)_updateStyle:(long long)arg1 ;
-(UILabel *)statusTextLabel;
-(void)setStatusTextLabel:(UILabel *)arg1 ;
-(UIView *)sportContainer;
-(void)setSportContainer:(UIView *)arg1 ;
-(CAShapeLayer *)containerBackgroundLayer;
-(void)setContainerBackgroundLayer:(CAShapeLayer *)arg1 ;
-(T1SportEventRowView *)topRowView;
-(void)setTopRowView:(T1SportEventRowView *)arg1 ;
-(T1SportEventRowView *)bottomRowView;
-(void)setBottomRowView:(T1SportEventRowView *)arg1 ;
-(UILabel *)socialTextLabel;
-(void)setSocialTextLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)update;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)cleanup;
@end

