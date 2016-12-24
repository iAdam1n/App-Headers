/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIActivityIndicatorView;

@interface FBReactionSingleButtonComponentView : UIView {

	NSArray* _stateToButtons;
	UIActivityIndicatorView* _spinner;
	BOOL _loading;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                   //@synthesize state=_state - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
-(void)setText:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)buttonForState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isLoading;
-(void)setLoading:(BOOL)arg1 ;
@end
