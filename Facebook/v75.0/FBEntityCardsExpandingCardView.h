/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBEntityCardsExpandingCardViewDelegate;
@interface FBEntityCardsExpandingCardView : UIView {

	id<FBEntityCardsExpandingCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEntityCardsExpandingCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<FBEntityCardsExpandingCardViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<FBEntityCardsExpandingCardViewDelegate>)delegate;
@end
