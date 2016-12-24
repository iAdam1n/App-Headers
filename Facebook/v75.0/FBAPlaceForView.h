/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBAPlaceForViewDelegate;
@class UIView;

@interface FBAPlaceForView : UIView {

	UIView* _contentView;
	id<FBAPlaceForViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAPlaceForViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setupAndAddBackButton;
-(void)didTapBackButton:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithContentView:(id)arg1 ;
-(void)setDelegate:(id<FBAPlaceForViewDelegate>)arg1 ;
-(id<FBAPlaceForViewDelegate>)delegate;
@end
