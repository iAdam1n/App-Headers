/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol T1Selection;
@class UIView;

@interface T1SearchScopeHeaderView : UIView {

	UIView* _infoView;
	UIView*<T1Selection> _selectionView;

}

@property (nonatomic,retain) UIView * infoView;                               //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) UIView*<T1Selection> selectionView;              //@synthesize selectionView=_selectionView - In the implementation block
-(UIView *)infoView;
-(void)setInfoView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView*<T1Selection>)selectionView;
-(void)setSelectionView:(UIView*<T1Selection>)arg1 ;
@end

